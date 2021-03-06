/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableSet, NSObject, NSDictionary;

@interface _HKMobileAssetDownloadManager : NSObject {

	NSMutableArray* _pendingOperations;
	NSMutableSet* _downloadedLanguages;
	NSObject*<OS_dispatch_queue> _queue;
	_HKMobileAssetDownloadManager* _retainedSelf;
	BOOL _shouldQueryLocalAssetsFirst;
	/*^block*/id _downloadCompletionHandler;
	NSDictionary* _downloadOptions;

}

@property (assign,nonatomic) BOOL shouldQueryLocalAssetsFirst;              //@synthesize shouldQueryLocalAssetsFirst=_shouldQueryLocalAssetsFirst - In the implementation block
@property (nonatomic,copy) id downloadCompletionHandler;                    //@synthesize downloadCompletionHandler=_downloadCompletionHandler - In the implementation block
@property (nonatomic,retain) NSDictionary * downloadOptions;                //@synthesize downloadOptions=_downloadOptions - In the implementation block
-(void)dealloc;
-(id)init;
-(NSDictionary *)downloadOptions;
-(void)_localeChanged:(id)arg1 ;
-(void)removeAssets:(id)arg1 ;
-(void)downloadAssetsForLocale:(id)arg1 forceDownload:(BOOL)arg2 ;
-(void)_queue_fetchAssetsWithLocalInformation:(BOOL)arg1 shouldRequery:(BOOL)arg2 locale:(id)arg3 ;
-(id)_predicateForAppsInHealthAssetForLocale:(id)arg1 ;
-(void)_queue_handleAssets:(id)arg1 ;
-(void)_callDownloadCompletionHandlerWithAssets:(id)arg1 ;
-(void)downloadAssetsForCurrentLocale;
-(BOOL)shouldQueryLocalAssetsFirst;
-(void)setShouldQueryLocalAssetsFirst:(BOOL)arg1 ;
-(id)downloadCompletionHandler;
-(void)setDownloadCompletionHandler:(id)arg1 ;
-(void)setDownloadOptions:(NSDictionary *)arg1 ;
@end

