/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBCDomainSyncServiceProtocol <NSObject>
@required
-(oneway void)deletePlaybackPositionEntity:(id)arg1;
-(oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1;
-(oneway void)savePlaybackPositionEntity:(id)arg1 isCheckpoint:(BOOL)arg2;
-(oneway void)beginAccessingPlaybackPositionEntities;
-(oneway void)endAccessingPlaybackPositionEntities;
-(oneway void)deletePlaybackPositionEntities;

@end

