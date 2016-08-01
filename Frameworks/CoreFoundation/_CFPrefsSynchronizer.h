/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface _CFPrefsSynchronizer : NSObject {

	NSObject*<OS_dispatch_source> _synchTimer;
	CFSetRef _dirtySources;
	opaque_pthread_mutex_t _CFPrefsDirtySourcesLock;
	BOOL _active;

}
+(id)sharedInstance;
-(void)enableTimer_alreadyLocked;
-(void)clear_alreadyLocked;
-(const CFSetRef)copyDirtySourcesSnapshotAndClear;
-(void)disableTimer_alreadyLocked;
-(void)noteDirtySource:(id)arg1 ;
-(void)synchronizeAndWait;
-(id)init;
-(void)synchronize;
-(void)clear;
@end

