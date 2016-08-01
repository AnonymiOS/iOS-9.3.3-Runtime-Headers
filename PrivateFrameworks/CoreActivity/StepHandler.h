/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreActivity.framework/CoreActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreActivityPedometerDelegate;
@interface StepHandler : NSObject {

	id<CoreActivityPedometerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CoreActivityPedometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedStepActivityHandler;
-(void)setDelegate:(id<CoreActivityPedometerDelegate>)arg1 ;
-(id<CoreActivityPedometerDelegate>)delegate;
-(void)resetState;
-(void)setupStepClient;
-(void)handleStepCallBack:(int)arg1 strideLen:(double)arg2 stepType:(int)arg3 ;
-(void)handleAccelData:(double)arg1 y:(double)arg2 z:(double)arg3 ;
@end

