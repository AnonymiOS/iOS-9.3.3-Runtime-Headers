/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BFFCapabilities : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	BOOL _regionSupportsPaymentRegistrationInitialized;
	BOOL _regionSupportsPaymentRegistration;

}
+(id)sharedCapabilities;
-(void)dealloc;
-(id)init;
-(BOOL)isAppleTV;
-(void)getRegionSupportsPaymentRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)supportsApplePay;
-(void)localeChanged:(id)arg1 ;
@end

