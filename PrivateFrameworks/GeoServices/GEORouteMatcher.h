/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute;

@interface GEORouteMatcher : NSObject {

	GEOComposedRoute* _route;

}
-(void)dealloc;
-(id)initWithRoute:(id)arg1 ;
-(void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3 ;
-(id)_candidateForSegment:(const SCD_Struct_GE135*)arg1 location:(id)arg2 ;
-(BOOL)_shouldConsiderCourseForLocation:(id)arg1 ;
-(id)matchToRouteWithLocation:(id)arg1 ;
-(id)matchToRouteWithLocation:(id)arg1 previousRouteMatch:(id)arg2 ;
-(void)_considerCandidateMatch:(id)arg1 ;
-(id)matchToClosestPointOnRouteWithLocation:(id)arg1 ;
-(void)_startRouteMatch;
-(double)_scoreModifierForStep:(id)arg1 previousStep:(id)arg2 ;
-(void)_forEachSegmentNearLocation:(id)arg1 previousRouteMatch:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

