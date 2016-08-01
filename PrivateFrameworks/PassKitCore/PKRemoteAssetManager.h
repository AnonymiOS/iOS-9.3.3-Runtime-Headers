/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSURLSession, NSObject, NSMutableDictionary;

@interface PKRemoteAssetManager : NSObject {

	NSURL* _directoryURL;
	NSURLSession* _urlSession;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _manifestItemsByRelativeURL;

}
-(void)dealloc;
-(id)initWithFileURL:(id)arg1 queue:(id)arg2 ;
-(id)remoteAssetManifests;
-(BOOL)assetExistsLocally:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)deviceSpecificItemsForScreenScale:(double)arg1 suffix:(id)arg2 ;
-(id)itemWithRelativePath:(id)arg1 ;
-(void)_flushBundleCaches;
-(BOOL)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id*)arg3 ;
-(id)deviceSpecificItems;
-(void)cancelDownloads;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
@end

