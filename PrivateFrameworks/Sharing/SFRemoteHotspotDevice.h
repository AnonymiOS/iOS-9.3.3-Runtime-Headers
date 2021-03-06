/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSData;

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding> {

	unsigned char _networkType;
	BOOL _hasDuplicates;
	NSString* _deviceName;
	NSString* _deviceIdentifier;
	NSNumber* _batteryLife;
	NSNumber* _signalStrength;
	NSData* _advertisementData;

}

@property (copy) NSString * deviceName;                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSString * deviceIdentifier;                                //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (retain) NSNumber * batteryLife;                                   //@synthesize batteryLife=_batteryLife - In the implementation block
@property (assign) unsigned char networkType;                                //@synthesize networkType=_networkType - In the implementation block
@property (retain) NSNumber * signalStrength;                                //@synthesize signalStrength=_signalStrength - In the implementation block
@property (assign) BOOL hasDuplicates;                                       //@synthesize hasDuplicates=_hasDuplicates - In the implementation block
@property (nonatomic,copy,readonly) NSData * advertisementData;              //@synthesize advertisementData=_advertisementData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setNetworkType:(unsigned char)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(unsigned char)networkType;
-(unsigned char)networkTypeForIncomingType:(unsigned char)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 advertisement:(SCD_Struct_SF6)arg3 ;
-(NSNumber *)batteryLife;
-(void)setBatteryLife:(NSNumber *)arg1 ;
-(BOOL)hasDuplicates;
-(void)setHasDuplicates:(BOOL)arg1 ;
-(NSData *)advertisementData;
-(NSNumber *)signalStrength;
-(void)setSignalStrength:(NSNumber *)arg1 ;
-(NSString *)deviceName;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
@end

