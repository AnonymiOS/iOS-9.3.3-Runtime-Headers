/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WebCookieStorageObjCAdapter : NSObject {

	/*function pointer*/void* m_cookieChangeCallback;

}
-(void)notifyCookiesChangedOnMainThread;
-(void)cookiesChangedNotificationHandler:(id)arg1 ;
-(void)startListeningForCookieChangeNotificationsWithCallback:(/*function pointer*/void*)arg1 ;
-(void)stopListeningForCookieChangeNotifications;
@end

