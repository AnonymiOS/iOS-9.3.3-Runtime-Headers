/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCFileProvider.h>
#import <libobjc.A.dylib/BRItemNotificationReceiving.h>
#import <libobjc.A.dylib/BRCReachabilityDelegate.h>

@class NSMutableDictionary, NSString;

@interface BRCCloudFileProvider : BRCFileProvider <BRItemNotificationReceiving, BRCReachabilityDelegate> {

	NSMutableDictionary* _pipeByKey;
	NSMutableDictionary* _readersURLAndIDToDocID;
	NSMutableDictionary* _downloadTrackersByDocID;
	NSMutableDictionary* _recursiveReadsByURLAndID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_fileReactorID;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(id)_physicalURLForURL:(id)arg1 ;
-(oneway void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(void)dumpToContext:(id)arg1 ;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)cancelAllCoordinationProviders;
-(BOOL)_hasPendingReaderForDocumentID:(id)arg1 ;
-(void)documentWasMadeLive:(id)arg1 ;
-(void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2 ;
-(void)_waitForDownloadOfDocument:(id)arg1 key:(id)arg2 requireCurrent:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_waitForDownloadOfDirectory:(id)arg1 key:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)__provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 session:(id)arg3 recursively:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_cancelCallBackForDocID:(id)arg1 key:(id)arg2 ;
-(void)_unregisterPresenterForKey:(id)arg1 ;
-(void)_triggerImmediateReadOfDocumentAtPath:(id)arg1 ;
-(unsigned long long)_spaceRequiredForReaders;
-(BOOL)_hasFilePresenterForURL:(id)arg1 ;
-(void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 session:(id)arg3 ;
@end

