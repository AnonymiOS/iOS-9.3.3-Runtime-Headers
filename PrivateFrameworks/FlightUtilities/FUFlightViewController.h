/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:35 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/FUFlightViewDelegate.h>

@class NSDate, FUFlightView, NSArray, NSNumber, NSString;

@interface FUFlightViewController : UIViewController <MKMapViewDelegate, FUFlightViewDelegate> {

	BOOL _loadingFlight;
	NSDate* _startLoadingDate;
	BOOL _highlightCurrentFlightLeg;
	BOOL _showInfoPanel;
	FUFlightView* _flightView;
	NSArray* _flights;
	NSNumber* _flightCode;
	NSString* _airlineCode;

}

@property (nonatomic,retain) FUFlightView * flightView;                   //@synthesize flightView=_flightView - In the implementation block
@property (nonatomic,retain) NSArray * flights;                           //@synthesize flights=_flights - In the implementation block
@property (assign,nonatomic) BOOL highlightCurrentFlightLeg;              //@synthesize highlightCurrentFlightLeg=_highlightCurrentFlightLeg - In the implementation block
@property (assign,nonatomic) BOOL showInfoPanel;                          //@synthesize showInfoPanel=_showInfoPanel - In the implementation block
@property (retain) NSNumber * flightCode;                                 //@synthesize flightCode=_flightCode - In the implementation block
@property (retain) NSString * airlineCode;                                //@synthesize airlineCode=_airlineCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)commonInit;
-(NSNumber *)flightCode;
-(void)setFlights:(NSArray *)arg1 ;
-(void)setFlightCode:(NSNumber *)arg1 ;
-(void)setAirlineCode:(NSString *)arg1 ;
-(void)setHighlightCurrentFlightLeg:(BOOL)arg1 ;
-(void)setShowInfoPanel:(BOOL)arg1 ;
-(NSString *)airlineCode;
-(FUFlightView *)flightView;
-(void)showFlightView;
-(BOOL)highlightCurrentFlightLeg;
-(BOOL)showInfoPanel;
-(void)loadFlightWithFlightCode:(id)arg1 airlineCode:(id)arg2 date:(id)arg3 ;
-(void)showView:(id)arg1 ;
-(void)addFittingView:(id)arg1 ;
-(void)fadeLayer:(id)arg1 visible:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSArray *)flights;
-(void)flightView:(id)arg1 willShowingFlightWithIndex:(unsigned long long)arg2 ;
-(id)initWithFlights:(id)arg1 ;
-(void)hideView:(id)arg1 ;
-(void)setFlightView:(FUFlightView *)arg1 ;
-(void)showLoadingView;
-(void)showErrorView;
-(id)initWithFlightCode:(unsigned long long)arg1 airlineCode:(id)arg2 ;
@end

