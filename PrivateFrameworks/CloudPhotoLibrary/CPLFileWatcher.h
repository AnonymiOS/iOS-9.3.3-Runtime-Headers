/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CPLFileWatcherDelegate;
@class NSObject, NSURL;

@interface CPLFileWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _nodeSource;
	NSObject*<OS_dispatch_source> _parentSource;
	NSURL* _fileURL;
	id<CPLFileWatcherDelegate> _delegate;

}

@property (nonatomic,copy) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic,__weak) id<CPLFileWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CPLFileWatcherDelegate>)arg1 ;
-(id<CPLFileWatcherDelegate>)delegate;
-(NSURL *)fileURL;
-(void)_stopWatchingNode;
-(void)_startWatchingParent;
-(void)_startWatchingNode;
-(void)_stopWatchingParent;
-(id)initWithFileURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)startWatching;
-(void)stopWatching;
-(void)setFileURL:(NSURL *)arg1 ;
@end

