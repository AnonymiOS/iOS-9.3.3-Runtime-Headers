/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSString;

@interface HDUserNotification : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _defaultButton;
	NSString* _cancelButton;
	NSString* _otherButton;
	/*^block*/id _responseHandler;
	CFUserNotificationRef _notification;

}

@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * defaultButton;                          //@synthesize defaultButton=_defaultButton - In the implementation block
@property (nonatomic,copy) NSString * cancelButton;                           //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy) NSString * otherButton;                            //@synthesize otherButton=_otherButton - In the implementation block
@property (nonatomic,copy) id responseHandler;                                //@synthesize responseHandler=_responseHandler - In the implementation block
@property (assign,nonatomic) CFUserNotificationRef notification;              //@synthesize notification=_notification - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(CFUserNotificationRef)notification;
-(NSString *)title;
-(NSString *)message;
-(NSString *)cancelButton;
-(void)setCancelButton:(NSString *)arg1 ;
-(NSString *)defaultButton;
-(void)setDefaultButton:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)setNotification:(CFUserNotificationRef)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(void)presentWithResponseHandler:(/*^block*/id)arg1 ;
-(void)_handleResponse:(unsigned long long)arg1 ;
-(NSString *)otherButton;
-(void)setOtherButton:(NSString *)arg1 ;
-(id)responseHandler;
@end

