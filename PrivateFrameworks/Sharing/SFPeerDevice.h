/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFPeerDevice : NSObject <NSSecureCoding> {

	BOOL _defaultPairedDevice;
	NSString* _uniqueID;
	NSString* _modelIdentifier;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _name;
	NSString* _deviceColor;
	NSString* _enclosureColor;

}

@property (copy) NSString * uniqueID;                                           //@synthesize uniqueID=_uniqueID - In the implementation block
@property (copy) NSString * modelIdentifier;                                    //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (copy) NSString * productName;                                        //@synthesize productName=_productName - In the implementation block
@property (copy) NSString * productVersion;                                     //@synthesize productVersion=_productVersion - In the implementation block
@property (copy) NSString * productBuildVersion;                                //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (copy) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (copy) NSString * deviceColor;                                        //@synthesize deviceColor=_deviceColor - In the implementation block
@property (copy) NSString * enclosureColor;                                     //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (getter=isDefaultPairedDevice) BOOL defaultPairedDevice;              //@synthesize defaultPairedDevice=_defaultPairedDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)enclosureColor;
-(NSString *)deviceColor;
-(void)setDeviceColor:(NSString *)arg1 ;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(void)setDefaultPairedDevice:(BOOL)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(NSString *)productVersion;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(BOOL)isDefaultPairedDevice;
-(NSString *)productBuildVersion;
-(NSString *)modelIdentifier;
@end

