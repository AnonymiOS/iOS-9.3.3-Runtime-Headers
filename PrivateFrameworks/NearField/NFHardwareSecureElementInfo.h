/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NFHardwareSecureElementInfo : NSObject <NSSecureCoding> {

	BOOL _restrictedMode;
	NSString* _identifier;
	unsigned long long _OSVersion;
	unsigned long long _firmwareVersion;
	unsigned long long _compiledFWVersion;
	unsigned long long _hardwareVersion;
	unsigned long long _deviceType;
	unsigned long long _sequenceCounter;
	unsigned long long _referenceCounter;
	unsigned long long _osid;
	unsigned long long _otherOSValid;
	unsigned long long _OSMode;
	unsigned long long _signingKeyType;
	unsigned long long _migrationState;
	unsigned long long _migrationContext;
	unsigned long long _migrationPackages;
	unsigned long long _migrationInstances;
	NSString* _platformIdentifier;
	NSString* _serialNumber;
	NSString* _rsaCertificate;
	NSString* _eccCertificate;
	unsigned long long _appletMap;
	unsigned long long _persistentConfigID;
	unsigned long long _transientConfigID;

}

@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long OSVersion;                       //@synthesize OSVersion=_OSVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long firmwareVersion;                 //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long compiledFWVersion;               //@synthesize compiledFWVersion=_compiledFWVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long hardwareVersion;                 //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceType;                      //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceCounter;                 //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,readonly) unsigned long long referenceCounter;                //@synthesize referenceCounter=_referenceCounter - In the implementation block
@property (nonatomic,readonly) unsigned long long osid;                            //@synthesize osid=_osid - In the implementation block
@property (nonatomic,readonly) unsigned long long otherOSValid;                    //@synthesize otherOSValid=_otherOSValid - In the implementation block
@property (nonatomic,readonly) BOOL restrictedMode;                                //@synthesize restrictedMode=_restrictedMode - In the implementation block
@property (nonatomic,readonly) unsigned long long OSMode;                          //@synthesize OSMode=_OSMode - In the implementation block
@property (nonatomic,readonly) unsigned long long signingKeyType;                  //@synthesize signingKeyType=_signingKeyType - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationState;                  //@synthesize migrationState=_migrationState - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationContext;                //@synthesize migrationContext=_migrationContext - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationPackages;               //@synthesize migrationPackages=_migrationPackages - In the implementation block
@property (nonatomic,readonly) unsigned long long migrationInstances;              //@synthesize migrationInstances=_migrationInstances - In the implementation block
@property (nonatomic,readonly) NSString * platformIdentifier;                      //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                            //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSString * rsaCertificate;                          //@synthesize rsaCertificate=_rsaCertificate - In the implementation block
@property (nonatomic,readonly) NSString * eccCertificate;                          //@synthesize eccCertificate=_eccCertificate - In the implementation block
@property (nonatomic,readonly) unsigned long long appletMap;                       //@synthesize appletMap=_appletMap - In the implementation block
@property (nonatomic,readonly) unsigned long long persistentConfigID;              //@synthesize persistentConfigID=_persistentConfigID - In the implementation block
@property (nonatomic,readonly) unsigned long long transientConfigID;               //@synthesize transientConfigID=_transientConfigID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)OSVersion;
-(unsigned long long)deviceType;
-(unsigned long long)hardwareVersion;
-(NSString *)serialNumber;
-(NSString *)eccCertificate;
-(NSString *)rsaCertificate;
-(unsigned long long)sequenceCounter;
-(unsigned long long)firmwareVersion;
-(void)_setIsInRestrictedMode:(BOOL)arg1 ;
-(unsigned long long)compiledFWVersion;
-(unsigned long long)referenceCounter;
-(unsigned long long)osid;
-(unsigned long long)otherOSValid;
-(BOOL)restrictedMode;
-(unsigned long long)OSMode;
-(unsigned long long)signingKeyType;
-(unsigned long long)migrationState;
-(unsigned long long)migrationContext;
-(unsigned long long)migrationPackages;
-(unsigned long long)migrationInstances;
-(NSString *)platformIdentifier;
-(unsigned long long)appletMap;
-(unsigned long long)persistentConfigID;
-(unsigned long long)transientConfigID;
@end

