/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIPopoverBackgroundView.h>

@class UIView, _MKCalloutBackgroundMaskView, NSMutableArray, UIImageView, UIMotionEffect, UIColor;

@interface MKCalloutBackgroundView : UIPopoverBackgroundView {

	double _arrowOffset;
	unsigned long long _arrowDirection;
	UIView* _containerView;
	UIView* _baseBorderView;
	_MKCalloutBackgroundMaskView* _mainMaskView;
	NSMutableArray* _vendedMaskViews;
	SCD_Struct_MK15 _mapDisplayStyle;
	UIImageView* _currentArrowShadow;
	UIMotionEffect* _arrowMotionEffect;
	UIMotionEffect* _arrowShadowMotionEffect;

}

@property (assign,nonatomic) SCD_Struct_MK15 mapDisplayStyle;                 //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (nonatomic,readonly) UIColor * calloutBackgroundColor; 
+(BOOL)wantsDefaultContentAppearance;
+(double)arrowHeight;
+(double)arrowBase;
+(UIEdgeInsets)contentViewInsets;
+(double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1 ;
+(void)setBeingCreatedForSmallCalloutController:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(id)_shadowPath;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(UIEdgeInsets)_contentViewInsets;
-(void)_showArrow;
-(void)_hideArrow;
-(SCD_Struct_MK15)mapDisplayStyle;
-(void)setMapDisplayStyle:(SCD_Struct_MK15)arg1 ;
-(void)setArrowMotionEffect:(id)arg1 ;
-(void)_setupViews;
-(void)_extendLeftRightArrow;
-(id)newMaskLayer;
-(UIColor *)calloutBackgroundColor;
-(void)_layoutMaskView:(id)arg1 withArrowShadow:(BOOL)arg2 ;
-(void)_retractUpDownArrow;
@end

