/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface STCity : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _unlocalizedName;
	NSString* _countryName;
	NSString* _unlocalizedCountryName;
	NSString* _timeZone;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _alCityID;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithName:(id)arg1 unlocalizedName:(id)arg2 countryName:(id)arg3 unlocalizedCountryName:(id)arg4 timeZone:(id)arg5 latitude:(id)arg6 longitude:(id)arg7 alCityID:(id)arg8 ;
-(id)alCityValue;
@end
