/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <MapKit/MKAnnotationView.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, NSMutableArray;

@interface FUPlaneTrackerAnnotationView : MKAnnotationView <MKAnnotation> {

	BOOL _showsPlane;
	NSMutableArray* _viewAddedBlock;
	SCD_Struct_FU1 _coordinate;

}

@property (assign,nonatomic) double currentProgress; 
@property (assign,nonatomic) SCD_Struct_FU1 startLocation; 
@property (assign,nonatomic) SCD_Struct_FU1 endLocation; 
@property (readonly) SCD_Struct_FU1 currentLocation; 
@property (assign,nonatomic) SCD_Struct_FU1 coordinate;                 //@synthesize coordinate=_coordinate - In the implementation block
@property (retain) NSMutableArray * viewAddedBlock;                     //@synthesize viewAddedBlock=_viewAddedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(Class)layerClass;
+(id)defaultAnotation;
-(id)init;
-(void)didMoveToSuperview;
-(void)setStartLocation:(SCD_Struct_FU1)arg1 ;
-(SCD_Struct_FU1)currentLocation;
-(SCD_Struct_FU1)endLocation;
-(void)setEndLocation:(SCD_Struct_FU1)arg1 ;
-(void)setCurrentProgress:(double)arg1 ;
-(void)setCoordinate:(SCD_Struct_FU1)arg1 ;
-(SCD_Struct_FU1)coordinate;
-(double)currentProgress;
-(id)planeLayer;
-(void)setPlaneImage:(id)arg1 ;
-(NSMutableArray *)viewAddedBlock;
-(void)setViewAddedBlock:(NSMutableArray *)arg1 ;
-(void)setStartLatitude:(double)arg1 startLongitude:(double)arg2 endLatitude:(double)arg3 endLongitude:(double)arg4 ;
-(void)setShowsPlane:(BOOL)arg1 ;
-(void)notifyWhenIsVisibleWithBlock:(/*^block*/id)arg1 ;
-(SCD_Struct_FU1)startLocation;
@end

