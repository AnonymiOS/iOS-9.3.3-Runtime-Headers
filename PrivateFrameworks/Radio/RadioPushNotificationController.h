/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol RadioPushNotificationControllerDelegate;
@class APSConnection, NSString;

@interface RadioPushNotificationController : NSObject <APSConnectionDelegate> {

	APSConnection* _connection;
	id<RadioPushNotificationControllerDelegate> _delegate;
	NSString* _environment;
	BOOL _notificationsEnabled;
	BOOL _pushEnabled;

}

@property (assign,nonatomic,__weak) id<RadioPushNotificationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;                                                //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)notificationsEnabled;
-(void)setDelegate:(id<RadioPushNotificationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<RadioPushNotificationControllerDelegate>)delegate;
-(id)_portNameForEnvironmentName:(id)arg1 ;
-(void)_loadURLBagWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
@end

