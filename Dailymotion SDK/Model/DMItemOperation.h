//
//  DMItemOperation.h
//  Dailymotion SDK iOS
//
//  Created by Olivier Poitrey on 18/06/12.
//
//

#import <Foundation/Foundation.h>

@interface DMItemOperation : NSObject

@property (nonatomic, assign) BOOL isFinished;
@property (nonatomic, assign) BOOL isCancelled;

- (void)cancel;

@end
