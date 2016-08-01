/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CLLocation;

@interface PKPaymentDeviceProvisioningData : NSObject <NSSecureCoding> {

	NSString* _deviceName;
	NSString* _phoneNumber;
	CLLocation* _location;
	NSString* _signedPhoneNumber;
	NSString* _signedPhoneNumberVersion;

}

@property (nonatomic,copy) NSString * deviceName;                            //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                           //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * signedPhoneNumber;                     //@synthesize signedPhoneNumber=_signedPhoneNumber - In the implementation block
@property (nonatomic,copy) NSString * signedPhoneNumberVersion;              //@synthesize signedPhoneNumberVersion=_signedPhoneNumberVersion - In the implementation block
@property (nonatomic,readonly) NSString * extensiveLatitude; 
@property (nonatomic,readonly) NSString * extensiveLongitude; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocation *)location;
-(NSString *)phoneNumber;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setSignedPhoneNumber:(NSString *)arg1 ;
-(void)setSignedPhoneNumberVersion:(NSString *)arg1 ;
-(NSString *)signedPhoneNumber;
-(NSString *)signedPhoneNumberVersion;
-(NSString *)extensiveLongitude;
-(NSString *)extensiveLatitude;
-(NSString *)deviceName;
@end

