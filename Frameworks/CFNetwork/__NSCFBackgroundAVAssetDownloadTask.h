/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

@class NSURL, AVURLAsset, NSDictionary, NSArray;

@interface __NSCFBackgroundAVAssetDownloadTask : __NSCFBackgroundSessionTask {

	unsigned long long _downloadToken;
	unsigned long long _AVAssetDownloadToken;
	NSURL* _URL;
	NSURL* _destinationURL;
	NSURL* _temporaryDestinationURL;
	AVURLAsset* _URLAsset;
	NSDictionary* _options;
	NSArray* _loadedTimeRanges;

}

@property (assign) unsigned long long AVAssetDownloadToken;              //@synthesize AVAssetDownloadToken=_AVAssetDownloadToken - In the implementation block
@property (copy) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (copy) NSURL * destinationURL;                                 //@synthesize destinationURL=_destinationURL - In the implementation block
@property (copy) NSURL * temporaryDestinationURL;                        //@synthesize temporaryDestinationURL=_temporaryDestinationURL - In the implementation block
@property (retain) AVURLAsset * URLAsset;                                //@synthesize URLAsset=_URLAsset - In the implementation block
@property (copy) NSDictionary * options;                                 //@synthesize options=_options - In the implementation block
@property (copy) NSArray * loadedTimeRanges;                             //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(AVURLAsset *)URLAsset;
-(unsigned long long)AVAssetDownloadToken;
-(id)initWithTaskInfo:(id)arg1 session:(id)arg2 remoteSession:(id)arg3 ident:(unsigned long long)arg4 ;
-(id)initWithSession:(id)arg1 remoteSession:(id)arg2 URLAsset:(id)arg3 URL:(id)arg4 destinationURL:(id)arg5 temporaryDestinationURL:(id)arg6 ident:(unsigned long long)arg7 ;
-(void)_onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2 ;
-(void)setAVAssetDownloadToken:(unsigned long long)arg1 ;
-(void)_onqueue_didLoadTimeRange:(id)arg1 totalTimeRangesLoaded:(id)arg2 timeRangeExpectedToLoad:(id)arg3 ;
-(void)_onqueue_didResolveMediaSelectionPropertyList:(id)arg1 ;
-(void)setURLAsset:(AVURLAsset *)arg1 ;
-(void)setTemporaryDestinationURL:(NSURL *)arg1 ;
-(NSURL *)temporaryDestinationURL;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(NSURL *)URL;
-(id)response;
-(void)setURL:(NSURL *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)originalRequest;
-(NSArray *)loadedTimeRanges;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(id)currentRequest;
@end

