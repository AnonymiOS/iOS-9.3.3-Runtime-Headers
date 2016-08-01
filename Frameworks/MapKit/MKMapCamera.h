/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying> {

	SCD_Struct_MK7 _centerCoordinate;
	double _heading;
	double _pitch;
	double _altitude;
	MKMapView* _mapView;

}

@property (assign,nonatomic) SCD_Struct_MK7 centerCoordinate;                                                //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
@property (assign,nonatomic) double heading;                                                                 //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) double altitude;                                                                //@synthesize altitude=_altitude - In the implementation block
@property (assign,setter=_setPrecisePitch:,getter=_precisePitch,nonatomic) double precisePitch;              //@synthesize pitch=_pitch - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_cameraLookingAtGEOMapRect:(const SCD_Struct_MK10*)arg1 aspectRatio:(float)arg2 ;
+(id)_cameraLookingAtMapRect:(SCD_Struct_MK10)arg1 forViewSize:(CGSize)arg2 ;
+(id)cameraLookingAtCenterCoordinate:(SCD_Struct_MK7)arg1 fromEyeCoordinate:(SCD_Struct_MK7)arg2 eyeAltitude:(double)arg3 ;
+(id)cameraLookingAtCenterCoordinate:(SCD_Struct_MK7)arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4 ;
+(id)camera;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_updateState;
-(BOOL)_validate;
-(void)setHeading:(double)arg1 ;
-(double)altitude;
-(double)heading;
-(void)setAltitude:(double)arg1 ;
-(SCD_Struct_MK7)centerCoordinate;
-(void)setCenterCoordinate:(SCD_Struct_MK7)arg1 ;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(void)_setPrecisePitch:(double)arg1 ;
-(SCD_Struct_MK10)_enclosingGEOMapRectForAspectRatio:(float)arg1 ;
-(double)_precisePitch;
-(void)_setMapView:(id)arg1 ;
-(id)_mapView;
@end

