/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@interface FBSSystemAppProxy : FBSSystemServiceFacilityClient
+(id)sharedInstance;
-(void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned)arg3 withResult:(/*^block*/id)arg4 ;
-(void)checkInUIApplication;
-(void)activeInterfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
-(void)badgeValueForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNextWakeInterval:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)applicationBundleID:(id)arg1 requestBrightness:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)fireCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)_sendMessageType:(long long)arg1 withMessage:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 ;
-(void)systemApplicationBundleIdentifierWithResult:(/*^block*/id)arg1 ;
-(void)isPasscodeLockedOrBlockedWithCompletion:(/*^block*/id)arg1 ;
-(void)canActivateApplication:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)fireCompletion:(/*^block*/id)arg1 bundleIDResult:(id)arg2 error:(id)arg3 ;
-(void)fireCompletion:(/*^block*/id)arg1 pidResult:(int)arg2 error:(id)arg3 ;
-(void)fireCompletion:(/*^block*/id)arg1 openAppErrorCode:(long long)arg2 ;
-(void)_serializeOpenAppMessage:(id)arg1 bundleID:(id)arg2 options:(id)arg3 clientPort:(unsigned)arg4 ;
-(BOOL)isClientLoggingEnabled;
-(void)pidForApplication:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)init;
-(void)suspendCurrentApplication;
-(void)sendActions:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)setBadgeValue:(id)arg1 forBundleID:(id)arg2 ;
-(void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned)arg4 withResult:(/*^block*/id)arg5 ;
-(void)shutdownAndReboot:(BOOL)arg1 ;
-(void)deleteAllSnapshotsForApplication:(id)arg1 ;
-(id)clientCallbackQueue;
@end

