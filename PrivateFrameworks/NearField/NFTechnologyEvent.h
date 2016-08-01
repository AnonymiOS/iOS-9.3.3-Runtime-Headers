/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NFTechnologyEvent : NSObject <NSSecureCoding> {

	unsigned char _valueAddedServiceMode;
	unsigned _technology;

}

@property (nonatomic,readonly) unsigned technology;                              //@synthesize technology=_technology - In the implementation block
@property (nonatomic,readonly) unsigned char valueAddedServiceMode;              //@synthesize valueAddedServiceMode=_valueAddedServiceMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)technology;
-(unsigned char)valueAddedServiceMode;
-(id)initWithTechnology:(unsigned)arg1 andValueAddedServiceMode:(unsigned)arg2 ;
@end

