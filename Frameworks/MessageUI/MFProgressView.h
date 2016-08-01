/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MFProgressViewDelegate;
@class CADisplayLink, UIColor, NSTimer;

@interface MFProgressView : UIView {

	double _stroke;
	double _diameter;
	CADisplayLink* _displayLink;
	double _displayedProgress;
	double _targetProgress;
	UIColor* _tintColor;
	NSTimer* _simulateActivityTimer;
	id<MFProgressViewDelegate> _delegate;

}

@property (assign,nonatomic) id<MFProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
+(id)progressViewWithDefaultStyleStrokeAndRect;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<MFProgressViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MFProgressViewDelegate>)delegate;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setProgress:(double)arg1 ;
-(id)initWithProgressViewStyle:(int)arg1 stroke:(double)arg2 frame:(CGRect)arg3 ;
-(void)_invalidateDisplayLink;
-(void)_invalidateSimulationTimer;
-(void)_onDisplayLink:(id)arg1 ;
-(void)simulateActivity;
-(void)_adjustProgress;
-(void)_drawProgressInRect:(CGRect)arg1 ;
-(BOOL)_isValidCenter:(CGPoint)arg1 radius:(double)arg2 rect:(CGRect)arg3 ;
-(void)_drawCircleWithCenter:(CGPoint)arg1 radius:(double)arg2 ;
-(void)_drawWedgeWithCenter:(CGPoint)arg1 radius:(double)arg2 ;
-(CGRect)scaleBaselineBoundsToScale:(CGSize)arg1 ;
-(void)progressDidFinish;
-(void)_stopSimulationIfCompleted;
@end

