/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <libobjc.A.dylib/VKPuckAnimatorTarget.h>

@class VKAnnotationMarker, CALayer, MKUserLocationHeadingLayer, CLLocation, NSString;

@interface MKUserLocationView : MKAnnotationView <VKPuckAnimatorTarget> {

	VKAnnotationMarker* _marker;
	long long _zoomDirection;
	CALayer* _pulseLayer;
	CALayer* _accuracyLayer;
	BOOL _allowsPulse;
	BOOL _shouldPulse;
	BOOL _allowsHeadingIndicator;
	BOOL _shouldDisplayHeading;
	BOOL _shouldDisplayInaccurateHeading;
	double _heading;
	double _headingAccuracy;
	MKUserLocationHeadingLayer* _headingLayer;
	BOOL _allowsAccuracyRing;
	BOOL _stale;
	BOOL _effectsEnabled;
	double _maxRadiusToShowAccuracyRing;
	double _presentationCourse;
	double _locationAccuracy;
	CLLocation* _lastLocation;

}

@property (assign,getter=isStale,nonatomic) BOOL stale;                                //@synthesize stale=_stale - In the implementation block
@property (nonatomic,readonly) CLLocation * lastLocation;                              //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,nonatomic) BOOL allowsPulse;                                         //@synthesize allowsPulse=_allowsPulse - In the implementation block
@property (assign,nonatomic) BOOL allowsAccuracyRing;                                  //@synthesize allowsAccuracyRing=_allowsAccuracyRing - In the implementation block
@property (assign,nonatomic) BOOL allowsHeadingIndicator;                              //@synthesize allowsHeadingIndicator=_allowsHeadingIndicator - In the implementation block
@property (assign,nonatomic) double maxRadiusToShowAccuracyRing;                       //@synthesize maxRadiusToShowAccuracyRing=_maxRadiusToShowAccuracyRing - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayHeading;                                //@synthesize shouldDisplayHeading=_shouldDisplayHeading - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayInaccurateHeading;                      //@synthesize shouldDisplayInaccurateHeading=_shouldDisplayInaccurateHeading - In the implementation block
@property (assign,nonatomic) double heading;                                           //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double headingAccuracy;                                   //@synthesize headingAccuracy=_headingAccuracy - In the implementation block
@property (nonatomic,readonly) double locationAccuracy;                                //@synthesize locationAccuracy=_locationAccuracy - In the implementation block
@property (assign,nonatomic) float opacity; 
@property (assign,getter=isEffectsEnabled,nonatomic) BOOL effectsEnabled;              //@synthesize effectsEnabled=_effectsEnabled - In the implementation block
@property (assign,nonatomic) long long zoomDirection;                                  //@synthesize zoomDirection=_zoomDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double presentationCourse;                                //@synthesize presentationCourse=_presentationCourse - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(unsigned long long)_selectedZIndex;
+(unsigned long long)_zIndex;
+(double)accuracyDiameter:(double)arg1 ;
-(void)didMoveToWindow;
-(id)init;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setHeading:(double)arg1 ;
-(double)heading;
-(double)headingAccuracy;
-(void)_setMapPitchRadians:(double)arg1 ;
-(void)_setPresentationCoordinate:(SCD_Struct_MK7)arg1 ;
-(void)_updateFromMap;
-(id)_vkMarker;
-(void)_setAnimatingToCoordinate:(BOOL)arg1 ;
-(BOOL)_tracking;
-(CGRect)_mapkit_visibleRect;
-(BOOL)shouldDisplayInaccurateHeading;
-(BOOL)isEffectsEnabled;
-(BOOL)_shouldPulseForLocation:(id)arg1 ;
-(void)setHeadingAccuracy:(double)arg1 ;
-(BOOL)shouldDisplayHeading;
-(void)setShouldDisplayInaccurateHeading:(BOOL)arg1 ;
-(BOOL)allowsHeadingIndicator;
-(void)_pausePulse;
-(void)setAllowsHeadingIndicator:(BOOL)arg1 ;
-(void)setShouldDisplayHeading:(BOOL)arg1 ;
-(BOOL)allowsPulse;
-(double)presentationCourse;
-(void)_resetLayerToMatchAccuracyRing;
-(void)_resumePulse;
-(double)locationAccuracy;
-(void)setZoomDirection:(long long)arg1 ;
-(void)setStale:(BOOL)arg1 ;
-(double)maxRadiusToShowAccuracyRing;
-(id)_accuracyAnimation:(double)arg1 ;
-(void)setPresentationCourse:(double)arg1 ;
-(BOOL)allowsAccuracyRing;
-(void)_updatePulse;
-(void)_updateShowHeadingLayer;
-(void)setEffectsEnabled:(BOOL)arg1 ;
-(id)_layerToMatchAccuracyRing;
-(BOOL)_isLocationStale:(id)arg1 ;
-(void)_updateHideLargeAccuracyRing;
-(void)setAllowsPulse:(BOOL)arg1 ;
-(id)_pulseLayer;
-(void)setMaxRadiusToShowAccuracyRing:(double)arg1 ;
-(void)locationManagerFailedToUpdateLocation;
-(void)updateStateFromLocation:(id)arg1 duration:(double)arg2 ;
-(BOOL)_shouldShowAccuracyRing;
-(id)_animationToSynchronizePulse:(id*)arg1 ;
-(long long)zoomDirection;
-(BOOL)_hideLargeAccuracyRing;
-(UIImage*)_headingImageForAccuracy:(double)arg1 anchorPoint:(CGPoint*)arg2 ;
-(void)_updateLayers;
-(id)_baseLayer;
-(void)_removePulse;
-(BOOL)isStale;
-(void)setAllowsAccuracyRing:(BOOL)arg1 ;
-(void)setPresentationCoordinate:(SCD_Struct_MK7)arg1 ;
-(id)_pulseAnimation;
-(void)setLocationAccuracy:(double)arg1 duration:(double)arg2 ;
-(void)setZoomDirection:(long long)arg1 deltaScale:(double)arg2 ;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(CLLocation *)lastLocation;
@end

