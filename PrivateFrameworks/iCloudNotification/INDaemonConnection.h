/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface INDaemonConnection : NSObject {

	NSXPCConnection* _connection;

}
-(void)dealloc;
-(id)init;
-(BOOL)registerAccount:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)unregisterAccount:(id)arg1 fromiCloudNotificationsWithError:(id*)arg2 ;
-(BOOL)clearAllRegistrationDigestsWithError:(id*)arg1 ;
-(id)diagnosticReport;
@end

