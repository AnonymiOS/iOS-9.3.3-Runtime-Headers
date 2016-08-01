/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTAbstractIDSDevice <NSObject>
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL isNearby; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isCloudReachable; 
@required
-(BOOL)isCloudReachable;
-(BOOL)isConnected;
-(BOOL)isDefaultPairedDevice;
-(BOOL)isNearby;

@end

