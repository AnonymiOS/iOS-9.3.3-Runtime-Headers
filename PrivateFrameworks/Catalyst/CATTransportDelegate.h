/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTransportDelegate <NSObject>
@optional
-(void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
-(void)transport:(id)arg1 didSendMessage:(id)arg2;
-(void)transportDidResume:(id)arg1;
-(void)transportDidConnect:(id)arg1;
-(void)transport:(id)arg1 didReceiveMessage:(id)arg2;
-(void)transport:(id)arg1 didInterruptWithError:(id)arg2;
-(void)transportDidInvalidate:(id)arg1;

@end

