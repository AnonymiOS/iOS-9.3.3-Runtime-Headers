/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOComposedRouteStep, NSString, MKRouteStepPolyline, MKPolyline;

@interface MKRouteStep : NSObject {

	GEOComposedRouteStep* _geoComposedRouteStep;
	NSString* _instructions;
	unsigned long long _transportType;
	MKRouteStepPolyline* _polyline;

}

@property (nonatomic,readonly) NSString * instructions;                                                               //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSString * notice; 
@property (nonatomic,readonly) MKPolyline * polyline;                                                                 //@synthesize polyline=_polyline - In the implementation block
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) unsigned long long transportType;                                                      //@synthesize transportType=_transportType - In the implementation block
@property (getter=_geoComposedRouteStep,nonatomic,readonly) GEOComposedRouteStep * geoComposedRouteStep;              //@synthesize geoComposedRouteStep=_geoComposedRouteStep - In the implementation block
-(unsigned long long)transportType;
-(double)distance;
-(NSString *)instructions;
-(NSString *)notice;
-(id)_geoComposedRouteStep;
-(MKPolyline *)polyline;
-(id)_initWithGEOComposedRouteStep:(id)arg1 instructions:(id)arg2 transportType:(unsigned long long)arg3 polyline:(id)arg4 ;
@end

