/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCSessionPrivateDelegate <NSObject>
@optional
-(void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(/*^block*/id)arg4 propagate:(BOOL*)arg5;

@required
-(void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(BOOL*)arg6;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(BOOL*)arg4;
-(void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(BOOL*)arg4;
-(void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(BOOL*)arg5;
-(void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(BOOL*)arg5;

@end

