/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaServices/MediaServices-Structs.h>
@class NSObject;

@interface MSVSystemDialogManager : NSObject {

	CFDictionaryRef _registeredSystemDialogs;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)registerSystemDialog:(id)arg1 forUserNotification:(CFUserNotificationRef)arg2 ;
-(id)systemDialogForUserNotification:(CFUserNotificationRef)arg1 ;
-(void)unregisterSystemDialogWithUserNotification:(CFUserNotificationRef)arg1 ;
@end

