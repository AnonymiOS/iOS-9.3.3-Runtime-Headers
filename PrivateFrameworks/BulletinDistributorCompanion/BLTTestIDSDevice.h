/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTAbstractIDSDevice.h>

@class NSString;

@interface BLTTestIDSDevice : NSObject <BLTAbstractIDSDevice> {

	BOOL _isDefaultPairedDevice;
	BOOL _isNearby;
	BOOL _isConnected;
	BOOL _isCloudReachable;

}

@property (assign,nonatomic) BOOL isDefaultPairedDevice;              //@synthesize isDefaultPairedDevice=_isDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL isNearby;                           //@synthesize isNearby=_isNearby - In the implementation block
@property (assign,nonatomic) BOOL isConnected;                        //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) BOOL isCloudReachable;                   //@synthesize isCloudReachable=_isCloudReachable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCloudReachable;
-(void)setIsDefaultPairedDevice:(BOOL)arg1 ;
-(void)setIsNearby:(BOOL)arg1 ;
-(void)setIsConnected:(BOOL)arg1 ;
-(void)setIsCloudReachable:(BOOL)arg1 ;
-(BOOL)isConnected;
-(BOOL)isDefaultPairedDevice;
-(BOOL)isNearby;
@end

