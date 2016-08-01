/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLLibraryManagerImplementation <CPLPlatformImplementation>
@optional
-(void)barrier;
-(void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)compactFileCacheWithCompletionHandler:(/*^block*/id)arg1;
-(void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)getListOfComponentsWithCompletionHandler:(/*^block*/id)arg1;
-(void)getStatusArrayForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getCloudCacheForRecordWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)deleteResourcesIfSafe:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)addInfoToLog:(id)arg1;
-(void)getStatusForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2;

@required
-(void)openWithCompletionHandler:(/*^block*/id)arg1;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1;
-(void)disableSynchronizationWithReason:(id)arg1;
-(void)enableSynchronizationWithReason:(id)arg1;
-(void)getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)resetStatus;
-(void)noteClientReceivedNotificationOfServerChanges;
-(BOOL)diagnosticsEnabled;
-(void)setDiagnosticsEnabled:(BOOL)arg1;
-(void)deactivateWithCompletionHandler:(/*^block*/id)arg1;
-(void)startSyncSession;
-(void)publishResource:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)noteClientIsInForeground;
-(void)noteClientIsInBackground;
-(void)removeCloudLibraryWithCompletionHandler:(/*^block*/id)arg1;

@end

