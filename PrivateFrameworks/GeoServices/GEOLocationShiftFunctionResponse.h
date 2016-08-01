/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding> {

	SCD_Struct_GE16 _originalCoordinate;
	double _params[9];
	double _radius;
	BOOL _shouldUsePolyShiftFunction;

}

@property (assign,nonatomic) SCD_Struct_GE16 originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE16)arg2 ;
-(void)setOriginalCoordinate:(SCD_Struct_GE16)arg1 ;
-(BOOL)isValidForCoordinate:(SCD_Struct_GE16)arg1 ;
-(SCD_Struct_GE16)shiftedCoordinateForCoordinate:(SCD_Struct_GE16)arg1 accuracy:(double*)arg2 ;
-(SCD_Struct_GE16)originalCoordinate;
@end

