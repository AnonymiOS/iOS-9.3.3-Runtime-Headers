/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMFUI/FMFUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FMFMapOptionsViewControllerDelegate;
@class UIButton, UIView, UISegmentedControl, MKMapAttribution;

@interface FMFMapOptionsViewController : UIViewController {

	id<FMFMapOptionsViewControllerDelegate> _delegate;
	UIButton* _mapAttributionButton;
	UIView* _topTapView;
	UISegmentedControl* _segmentedControl;
	UIView* _bottomWhitePane;
	MKMapAttribution* _mapAttribution;

}

@property (assign,nonatomic,__weak) id<FMFMapOptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * mapAttributionButton;                                      //@synthesize mapAttributionButton=_mapAttributionButton - In the implementation block
@property (nonatomic,retain) UIView * topTapView;                                                  //@synthesize topTapView=_topTapView - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                                //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) UIView * bottomWhitePane;                                             //@synthesize bottomWhitePane=_bottomWhitePane - In the implementation block
@property (nonatomic,retain) MKMapAttribution * mapAttribution;                                    //@synthesize mapAttribution=_mapAttribution - In the implementation block
-(void)setDelegate:(id<FMFMapOptionsViewControllerDelegate>)arg1 ;
-(id)init;
-(id<FMFMapOptionsViewControllerDelegate>)delegate;
-(void)awakeFromNib;
-(void)viewDidLoad;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(CGSize)paneSize;
-(void)_dismiss:(id)arg1 ;
-(UIView *)topTapView;
-(UIButton *)mapAttributionButton;
-(MKMapAttribution *)mapAttribution;
-(void)setMapAttribution:(MKMapAttribution *)arg1 ;
-(void)openInMaps:(id)arg1 ;
-(void)attributionButtonPressed:(id)arg1 ;
-(void)segmentedControlChanged:(id)arg1 ;
-(void)setMapAttributionButton:(UIButton *)arg1 ;
-(void)setTopTapView:(UIView *)arg1 ;
-(UIView *)bottomWhitePane;
-(void)setBottomWhitePane:(UIView *)arg1 ;
@end

