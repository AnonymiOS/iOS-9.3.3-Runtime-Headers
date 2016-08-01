/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MRVVIClient : NSObject {

	NSMutableDictionary* _deviceIDToCallbackMap;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedClient;
-(void)dealloc;
-(id)init;
-(void)setRecordingStateCallback:(/*^block*/id)arg1 forDeviceID:(unsigned)arg2 ;
-(void)_recordingStateChangedNotification:(id)arg1 ;
@end
