/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEORouteHypothesisMonitor, GEORouteHypothesis, NSMutableDictionary, GEOComposedWaypoint, NSDate, GEOMapServiceTraits;

@interface GEORouteHypothesisValue : NSObject <NSSecureCoding> {

	GEORouteHypothesisMonitor* _monitor;
	GEORouteHypothesis* _currentHypothesis;
	NSMutableDictionary* _handlers;
	double _updatedTimeStamp;
	BOOL _prediction;
	GEOComposedWaypoint* _origin;
	GEOComposedWaypoint* _destination;
	int _transportType;
	NSDate* _arrivalDate;
	NSDate* _expirationDate;
	GEOMapServiceTraits* _traits;
	double _valueRefreshTimeStamp;
	long long _rowId;

}

@property (readonly) BOOL isStaleToRefresh; 
@property (readonly) BOOL isStaleToPurgeFromDisk; 
@property (nonatomic,retain,readonly) GEORouteHypothesisMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain) GEORouteHypothesis * currentHypothesis;                    //@synthesize currentHypothesis=_currentHypothesis - In the implementation block
@property (assign,nonatomic) BOOL prediction;                                           //@synthesize prediction=_prediction - In the implementation block
@property (assign,nonatomic) int transportType;                                         //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) double updatedTimeStamp;                                   //@synthesize updatedTimeStamp=_updatedTimeStamp - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * origin;                            //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destination;                       //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                                    //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain,readonly) GEOMapServiceTraits * traits;                     //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) double valueRefreshTimeStamp;                              //@synthesize valueRefreshTimeStamp=_valueRefreshTimeStamp - In the implementation block
@property (assign,nonatomic) long long rowId;                                           //@synthesize rowId=_rowId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(GEOComposedWaypoint *)origin;
-(GEOMapServiceTraits *)traits;
-(GEOComposedWaypoint *)destination;
-(void)commonInit;
-(BOOL)prediction;
-(long long)rowId;
-(NSDate *)arrivalDate;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(NSDate *)expirationDate;
-(void)setUpdatedTimeStamp:(double)arg1 ;
-(double)updatedTimeStamp;
-(BOOL)isStaleToRefresh;
-(void)setCurrentHypothesis:(GEORouteHypothesis *)arg1 ;
-(BOOL)aggresiveArrivalIsAfterExpiration;
-(void)setPrediction:(BOOL)arg1 ;
-(BOOL)shouldBeRemovedFromCache;
-(void)setRowId:(long long)arg1 ;
-(BOOL)canBePersistedToDisk;
-(GEORouteHypothesisMonitor *)monitor;
-(BOOL)isStaleToPurgeFromDisk;
-(GEORouteHypothesis *)currentHypothesis;
-(void)removeHandlerForClient:(id)arg1 ;
-(void)enumerateHandlersUsingBlock:(/*^block*/id)arg1 ;
-(void)setValueRefreshTimeStamp:(double)arg1 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 expirationDate:(id)arg5 traits:(id)arg6 ;
-(double)valueRefreshTimeStamp;
-(void)setHandler:(/*^block*/id)arg1 forClient:(id)arg2 ;
@end

