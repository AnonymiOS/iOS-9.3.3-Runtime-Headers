/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Foundation/Foundation-Structs.h>
@class NSObject, NSURL, NSFileWatcherObservations, NSMutableDictionary, NSString;

@interface NSFileWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _url;
	/*^block*/id _observer;
	BOOL _isWatching;
	NSObject*<OS_dispatch_source> _eventSource;
	unsigned long long _lastObservedEventID;
	FSEventStreamRef _eventStream;
	BOOL _eventsAreAboutDirectory;
	BOOL _isUnsettled;
	NSFileWatcherObservations* _itemObservations;
	NSMutableDictionary* _subitemObservationsByEventPath;
	NSURL* _fileReferenceURL;
	NSString* _formerPath;
	NSURL* _formerURL;

}
-(void)setLastObservedEventID:(unsigned long long)arg1 ;
-(void)settle;
-(void)watchItem;
-(void)_coalesceSubitemObservations;
-(void)handleFSEventPath:(id)arg1 flags:(unsigned)arg2 id:(unsigned long long)arg3 ;
-(void)unsettle;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)setObserver:(/*^block*/id)arg1 ;
-(void)setURL:(id)arg1 ;
@end

