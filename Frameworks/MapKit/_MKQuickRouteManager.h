/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView;
#import <MapKit/MapKit-Structs.h>
@class NSMutableDictionary, _MKRouteETA, NSError, MKDirections, NSObject, MKMapItem, GEOTransitOptions;

@interface _MKQuickRouteManager : NSObject {

	double _maxDistanceToRequestETA;
	NSMutableDictionary* _etaResults;
	_MKRouteETA* _lastETA;
	unsigned long long _lastPreferredDirectionsType;
	NSError* _lastError;
	SCD_Struct_MK7 _lastUpdatedETAOriginCoordinate;
	double _lastUpdatedETATime;
	double _lastRequestTime;
	MKDirections* _inProgressETAUpdate;
	BOOL _lastETAUpdateHadError;
	double _staleDistance;
	double _staleTimeInterval;
	double _closeWalkTravelTime;
	double _maxWalkingDistance;
	BOOL _viewHasChangedSinceLastUpdate;
	BOOL _fetchAllTransportTypes;
	id<MKQuickRouteManagerDelegate> _delegate;
	NSObject*<MKQuickRouteConfigurableView> _view;
	MKMapItem* _mapItem;
	MKMapItem* _originMapItem;
	GEOTransitOptions* _transitOptions;
	SCD_Struct_MK7 _coordinate;

}

@property (assign,nonatomic,__weak) id<MKQuickRouteManagerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<MKQuickRouteConfigurableView> view;                                      //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) unsigned long long transportType; 
@property (nonatomic,copy) GEOTransitOptions * transitOptions;                                                         //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                                      //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK7 coordinate;                                                                //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,retain) MKMapItem * originMapItem;                                                                //@synthesize originMapItem=_originMapItem - In the implementation block
@property (getter=isUsingCurrentLocationForOrigin,nonatomic,readonly) BOOL usingCurrentLocationForOrigin; 
@property (assign,nonatomic) BOOL fetchAllTransportTypes;                                                              //@synthesize fetchAllTransportTypes=_fetchAllTransportTypes - In the implementation block
@property (getter=isOnlyDriving,nonatomic,readonly) BOOL onlyDriving; 
+(unsigned long long)counterpartForTransportType:(unsigned long long)arg1 ;
+(unsigned long long)directionsTypeForMapItem:(id)arg1 delegate:(id)arg2 mapType:(unsigned long long)arg3 ;
-(void)setDelegate:(id<MKQuickRouteManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<MKQuickRouteManagerDelegate>)delegate;
-(NSObject*<MKQuickRouteConfigurableView>)view;
-(void)setView:(NSObject*<MKQuickRouteConfigurableView>)arg1 ;
-(unsigned long long)transportType;
-(GEOTransitOptions *)transitOptions;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(BOOL)isOnlyDriving;
-(unsigned long long)directionsTypeForOriginCoordinate:(SCD_Struct_MK7)arg1 destinationCoordinate:(SCD_Struct_MK7)arg2 preferredDirectionsType:(unsigned long long)arg3 ;
-(BOOL)isValidETA:(id)arg1 ;
-(BOOL)shouldUpdateEstimatedTravelTimeForNewOrigin:(SCD_Struct_MK7)arg1 transportType:(unsigned long long)arg2 ;
-(unsigned long long)directionsTypeForMapType:(unsigned long long)arg1 ;
-(id)bestETAForPreferredDirectionsType:(unsigned long long)arg1 ;
-(MKMapItem *)originMapItem;
-(BOOL)isUsingCurrentLocationForOrigin;
-(unsigned long long)guessTransportTypeForDistance:(double)arg1 preferredDirectionsType:(unsigned long long)arg2 ;
-(BOOL)haveETAsForPreferredTransportType:(unsigned long long)arg1 ;
-(SCD_Struct_MK7)originCoordinate;
-(void)updateETA;
-(void)requestNewETAForPreferredTransportType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
-(void)expireETAsIfNoLongerValid;
-(void)invalidateETAForTransportType:(unsigned long long)arg1 ;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(void)loadETAsFromMapItemForTransportType:(unsigned long long)arg1 ;
-(void)setFetchAllTransportTypes:(BOOL)arg1 ;
-(BOOL)fetchAllTransportTypes;
-(void)_resetState;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setCoordinate:(SCD_Struct_MK7)arg1 ;
-(SCD_Struct_MK7)coordinate;
-(SCD_Struct_MK7)destinationCoordinate;
@end

