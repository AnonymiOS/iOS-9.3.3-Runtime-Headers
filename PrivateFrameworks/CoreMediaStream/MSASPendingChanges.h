/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface MSASPendingChanges : NSObject {

	NSMutableSet* _pendingAlbumGUIDsWithKeyValueChanges;
	NSMutableSet* _pendingAlbumChanges;
	NSMutableSet* _pendingAlbumGUIDsWithSharingInfoChanges;
	NSMutableDictionary* _pendingAlbumGUIDToAssetCollections;

}

@property (nonatomic,retain) NSMutableSet * pendingAlbumGUIDsWithKeyValueChanges;                   //@synthesize pendingAlbumGUIDsWithKeyValueChanges=_pendingAlbumGUIDsWithKeyValueChanges - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingAlbumChanges;                                    //@synthesize pendingAlbumChanges=_pendingAlbumChanges - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingAlbumGUIDsWithSharingInfoChanges;                //@synthesize pendingAlbumGUIDsWithSharingInfoChanges=_pendingAlbumGUIDsWithSharingInfoChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingAlbumGUIDToAssetCollections;              //@synthesize pendingAlbumGUIDToAssetCollections=_pendingAlbumGUIDToAssetCollections - In the implementation block
-(id)initWithSyncedKeyValueChangesForAlbumGUIDS:(id)arg1 albumChanges:(id)arg2 accessControlChangesForAlbumGUIDS:(id)arg3 ;
-(void)removePendingKeyValueChangesForAlbumGUID:(id)arg1 ;
-(void)addPendingChangesForAlbumGUID:(id)arg1 ;
-(void)removePendingChangesForAlbumGUID:(id)arg1 ;
-(void)addPendingAssetCollectionChanges:(id)arg1 forAlbumGUID:(id)arg2 ;
-(void)removePendingAssetCollection:(id)arg1 forAlbumGUID:(id)arg2 ;
-(void)removePendingSharingInfoChangesForAlbumGUID:(id)arg1 ;
-(NSMutableSet *)pendingAlbumGUIDsWithKeyValueChanges;
-(void)setPendingAlbumGUIDsWithKeyValueChanges:(NSMutableSet *)arg1 ;
-(NSMutableSet *)pendingAlbumChanges;
-(void)setPendingAlbumChanges:(NSMutableSet *)arg1 ;
-(NSMutableSet *)pendingAlbumGUIDsWithSharingInfoChanges;
-(void)setPendingAlbumGUIDsWithSharingInfoChanges:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)pendingAlbumGUIDToAssetCollections;
-(void)setPendingAlbumGUIDToAssetCollections:(NSMutableDictionary *)arg1 ;
-(BOOL)hasPendingChanges;
@end

