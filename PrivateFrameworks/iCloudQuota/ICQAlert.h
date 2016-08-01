/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <iCloudQuota/iCloudQuota-Structs.h>
@class NSLock, NSObject, ICQOffer;

@interface ICQAlert : NSObject {

	NSLock* _alertLock;
	long long _alertState;
	CFUserNotificationRef _cfAlert;
	NSObject*<OS_dispatch_semaphore> _alertSema;
	NSObject*<OS_dispatch_queue> _alertQueue;
	BOOL _showOnlyInSpringboard;
	BOOL _handleActionsBeforeCallingCompletionHandler;
	ICQOffer* _offer;

}

@property (nonatomic,readonly) ICQOffer * offer;                                            //@synthesize offer=_offer - In the implementation block
@property (assign,nonatomic) BOOL showOnlyInSpringboard;                                    //@synthesize showOnlyInSpringboard=_showOnlyInSpringboard - In the implementation block
@property (assign,nonatomic) BOOL handleActionsBeforeCallingCompletionHandler;              //@synthesize handleActionsBeforeCallingCompletionHandler=_handleActionsBeforeCallingCompletionHandler - In the implementation block
+(BOOL)shouldShowForOffer:(id)arg1 ;
+(void)dismissAlertsWithNotificationID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(ICQOffer *)offer;
-(void)dismissAlert;
-(BOOL)showAlertWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)showOnlyInSpringboard;
-(BOOL)handleActionsBeforeCallingCompletionHandler;
-(void)_handleLink:(id)arg1 ;
-(void)setShowOnlyInSpringboard:(BOOL)arg1 ;
-(void)setHandleActionsBeforeCallingCompletionHandler:(BOOL)arg1 ;
-(id)initWithOffer:(id)arg1 ;
@end

