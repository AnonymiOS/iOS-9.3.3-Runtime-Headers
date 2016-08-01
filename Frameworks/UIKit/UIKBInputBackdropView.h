/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKBBackdropView;

@interface UIKBInputBackdropView : UIView {

	UIKBBackdropView* _inputBackdropFullView;
	UIKBBackdropView* _inputBackdropLeftView;
	UIKBBackdropView* _inputBackdropRightView;
	unsigned long long _innerCorners;
	BOOL _isTransitioning;
	double _transitionGap;
	double _transitionLeftOffset;
	long long _style;
	BOOL _hasStartRect;
	BOOL _hasEndRect;
	CGRect _savedStartRect;
	CGRect _savedEndRect;

}

@property (nonatomic,retain) UIKBBackdropView * inputBackdropFullView;               //@synthesize inputBackdropFullView=_inputBackdropFullView - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * inputBackdropLeftView;               //@synthesize inputBackdropLeftView=_inputBackdropLeftView - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * inputBackdropRightView;              //@synthesize inputBackdropRightView=_inputBackdropRightView - In the implementation block
+(BOOL)_retroactivelyRequiresConstraintBasedLayout;
-(void)dealloc;
-(BOOL)_isTransitioning;
-(void)_setRenderConfig:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)layoutInputBackdropToFullWithRect:(CGRect)arg1 ;
-(UIKBBackdropView *)inputBackdropFullView;
-(void)setTintOpacity:(double)arg1 ;
-(UIKBBackdropView *)inputBackdropLeftView;
-(UIKBBackdropView *)inputBackdropRightView;
-(void)transitionToStyle:(long long)arg1 isSplit:(BOOL)arg2 ;
-(void)_setFrame:(CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 innerCorners:(unsigned long long)arg5 ;
-(void)_setInitialProgressWithFrame:(CGRect)arg1 ;
-(void)layoutInputBackdropToSplitWithLeftViewRect:(CGRect)arg1 andRightViewRect:(CGRect)arg2 innerCorners:(int)arg3 ;
-(void)_setFrame:(CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 ;
-(id)initWithFrame:(CGRect)arg1 primaryBackdrop:(BOOL)arg2 ;
-(void)_setProgress:(double)arg1 withFrame:(CGRect)arg2 ;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(void)setInputBackdropFullView:(UIKBBackdropView *)arg1 ;
-(void)setInputBackdropLeftView:(UIKBBackdropView *)arg1 ;
-(void)setInputBackdropRightView:(UIKBBackdropView *)arg1 ;
@end

