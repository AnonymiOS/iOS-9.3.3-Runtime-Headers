/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WLAppWishlistController : NSObject
+(id)sharedInstance;
+(id)_storeNotificationSerialQueue;
-(void)_sendWishListToStoreWithAppIdentifiers:(id)arg1 attemptState:(unsigned long long)arg2 ;
-(unsigned long long)_newAttemptStateForResponse:(id)arg1 error:(id)arg2 previousState:(unsigned long long)arg3 ;
-(BOOL)_onStoreNotificationSerialQueue_retryWishlistAttemptForAppIdentifiersIfPossible:(id)arg1 attemptState:(unsigned long long)arg2 ;
-(void)addMigratableAppsToWishlist:(id)arg1 ;
@end

