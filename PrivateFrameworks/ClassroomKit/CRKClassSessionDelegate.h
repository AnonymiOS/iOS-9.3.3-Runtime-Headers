/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKClassSessionDelegate <NSObject>
@required
-(void)classSession:(id)arg1 didChangeState:(long long)arg2 previousState:(long long)arg3;
-(void)classSession:(id)arg1 didConnectWithTransport:(id)arg2;
-(void)classSessionDidDisconnect:(id)arg1;
-(void)classSessionDidInvalidate:(id)arg1;

@end

