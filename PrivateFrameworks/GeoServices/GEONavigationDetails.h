/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, GEOComposedRoute, GEOLocation, GEORouteMatch, GEONavigationRouteSummary, GEONavigationRouteTransitSummary, GEOCompanionRouteDetails, GEOCompanionRouteStatus;

@interface GEONavigationDetails : NSObject {

	NSString* _destinationName;
	GEOComposedRoute* _route;
	GEOLocation* _location;
	GEORouteMatch* _routeMatch;
	double _distanceToManeuverStart;
	double _distanceToManeuverEnd;
	double _distanceToRoute;
	double _distanceRemainingOnRoute;
	double _remainingTime;
	BOOL _locationUnreliable;
	unsigned long long _annoucementStage;
	unsigned long long _nextAnnoucementStage;
	double _timeUntilNextAnnouncement;
	int _navigationState;
	long long _displayStep;
	GEONavigationRouteSummary* _routeSummary;
	GEONavigationRouteTransitSummary* _transitSummary;
	GEOCompanionRouteDetails* _companionRoute;
	GEOCompanionRouteStatus* _companionStatus;
	BOOL _guidancePromptsEnabled;
	/*^block*/id _companionRouteFilterBlock;

}

@property (nonatomic,readonly) NSString * destinationName;                                     //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,retain) GEOComposedRoute * route;                                         //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEOLocation * location;                                           //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) GEORouteMatch * routeMatch;                                       //@synthesize routeMatch=_routeMatch - In the implementation block
@property (assign,nonatomic) double distanceToManeuverStart;                                   //@synthesize distanceToManeuverStart=_distanceToManeuverStart - In the implementation block
@property (assign,nonatomic) double distanceToManeuverEnd;                                     //@synthesize distanceToManeuverEnd=_distanceToManeuverEnd - In the implementation block
@property (assign,nonatomic) double distanceToRoute;                                           //@synthesize distanceToRoute=_distanceToRoute - In the implementation block
@property (assign,nonatomic) double distanceRemainingOnRoute;                                  //@synthesize distanceRemainingOnRoute=_distanceRemainingOnRoute - In the implementation block
@property (assign,nonatomic) double remainingTime;                                             //@synthesize remainingTime=_remainingTime - In the implementation block
@property (assign,nonatomic) BOOL locationUnreliable;                                          //@synthesize locationUnreliable=_locationUnreliable - In the implementation block
@property (assign,nonatomic) int navigationState;                                              //@synthesize navigationState=_navigationState - In the implementation block
@property (assign,nonatomic) unsigned long long announcementStage;                             //@synthesize annoucementStage=_annoucementStage - In the implementation block
@property (nonatomic,readonly) unsigned long long nextAnnouncementStage;                       //@synthesize nextAnnoucementStage=_nextAnnoucementStage - In the implementation block
@property (nonatomic,readonly) double timeUntilNextAnnouncement;                               //@synthesize timeUntilNextAnnouncement=_timeUntilNextAnnouncement - In the implementation block
@property (nonatomic,readonly) GEONavigationRouteSummary * routeSummary;                       //@synthesize routeSummary=_routeSummary - In the implementation block
@property (nonatomic,readonly) GEONavigationRouteTransitSummary * transitSummary;              //@synthesize transitSummary=_transitSummary - In the implementation block
@property (assign,nonatomic) long long displayStep;                                            //@synthesize displayStep=_displayStep - In the implementation block
@property (assign,nonatomic) BOOL guidancePromptsEnabled;                                      //@synthesize guidancePromptsEnabled=_guidancePromptsEnabled - In the implementation block
@property (nonatomic,readonly) GEOCompanionRouteDetails * companionRoute;                      //@synthesize companionRoute=_companionRoute - In the implementation block
@property (nonatomic,readonly) GEOCompanionRouteStatus * companionStatus;                      //@synthesize companionStatus=_companionStatus - In the implementation block
@property (nonatomic,copy) id companionRouteFilterBlock;                                       //@synthesize companionRouteFilterBlock=_companionRouteFilterBlock - In the implementation block
-(void)dealloc;
-(GEOLocation *)location;
-(void)setLocation:(GEOLocation *)arg1 ;
-(void)setNavigationState:(int)arg1 ;
-(unsigned long long)nextAnnouncementStage;
-(NSString *)destinationName;
-(void)setRoute:(GEOComposedRoute *)arg1 ;
-(double)remainingTime;
-(double)timeUntilNextAnnouncement;
-(double)distanceToManeuverEnd;
-(void)setDisplayStep:(long long)arg1 ;
-(void)setAnnouncementStage:(unsigned long long)arg1 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(id)companionRouteFilterBlock;
-(GEOComposedRoute *)route;
-(int)navigationState;
-(double)distanceToRoute;
-(void)setNextAnnouncementStage:(unsigned long long)arg1 andTime:(double)arg2 ;
-(GEORouteMatch *)routeMatch;
-(unsigned long long)announcementStage;
-(BOOL)locationUnreliable;
-(void)setCompanionRouteFilterBlock:(id)arg1 ;
-(long long)displayStep;
-(BOOL)guidancePromptsEnabled;
-(double)distanceRemainingOnRoute;
-(double)distanceToManeuverStart;
-(GEOCompanionRouteStatus *)companionStatus;
-(void)setDistanceRemainingOnRoute:(double)arg1 ;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(void)setDistanceToManeuverStart:(double)arg1 ;
-(void)setDistanceToRoute:(double)arg1 ;
-(id)initWithDestinationName:(id)arg1 ;
-(void)setRemainingTime:(double)arg1 ;
-(void)setLocationUnreliable:(BOOL)arg1 ;
-(GEOCompanionRouteDetails *)companionRoute;
-(void)setDistanceToManeuverEnd:(double)arg1 ;
-(GEONavigationRouteSummary *)routeSummary;
-(GEONavigationRouteTransitSummary *)transitSummary;
@end

