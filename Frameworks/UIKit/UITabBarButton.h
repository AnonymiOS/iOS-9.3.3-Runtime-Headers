/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UIVisualEffectView, UITabBarButtonLabel, _UIBadgeView, UITabBarSelectionIndicatorView, UIImage, NSValue, NSMutableDictionary, UIColor;

@interface UITabBarButton : UIControl {

	CGRect _hitRect;
	UIView* _info;
	UIVisualEffectView* _vibrancyEffectView;
	UITabBarButtonLabel* _label;
	_UIBadgeView* _badge;
	UITabBarSelectionIndicatorView* _selectedIndicator;
	BOOL _selected;
	BOOL _barHeight;
	BOOL _badgeAnimated;
	UIEdgeInsets _infoInsets;
	UIOffset _selectedInfoOffset;
	UIOffset _infoOffset;
	UIImage* _customSelectedIndicatorImage;
	NSValue* _labelOffsetValue;
	NSMutableDictionary* _buttonTintColorsForState;
	NSMutableDictionary* _contentTintColorsForState;
	BOOL _showsHighlightedState;
	BOOL _centerAllContents;
	Class _appearanceGuideClass;
	UIColor* _unselectedTintColor;

}

@property (assign,setter=_setAppearanceGuideClass:,nonatomic) Class _appearanceGuideClass;                                           //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (nonatomic,retain) NSValue * labelOffsetValue;                                                                             //@synthesize labelOffsetValue=_labelOffsetValue - In the implementation block
@property (nonatomic,readonly) UITabBarButtonLabel * tabBarButtonLabel;                                                              //@synthesize label=_label - In the implementation block
@property (assign,setter=_setCenterAllContents:,nonatomic) BOOL _centerAllContents;                                                  //@synthesize centerAllContents=_centerAllContents - In the implementation block
@property (setter=_setUnselectedTintColor:,getter=_unselectedTintColor,nonatomic,retain) UIColor * unselectedTintColor;              //@synthesize unselectedTintColor=_unselectedTintColor - In the implementation block
@property (assign,setter=_setShowsHighlightedState:,nonatomic) BOOL _showsHighlightedState;                                          //@synthesize showsHighlightedState=_showsHighlightedState - In the implementation block
@property (assign,setter=_setSelected:,getter=_isSelected,nonatomic) BOOL _selected; 
+(id)_defaultLabelColor;
-(id)_scriptingInfo;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(CGRect)_responderSelectionRectForWindow:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)_sensitivitySize;
-(BOOL)canBecomeFocused;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(Class)_appearanceGuideClass;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(id)_tabBar;
-(void)_sendFocusAction;
-(BOOL)_isSelected;
-(BOOL)_useBarHeight;
-(void)_setBarHeight:(float)arg1 ;
-(id)_contentTintColorForState:(unsigned long long)arg1 ;
-(void)_setUnselectedTintColor:(id)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(id)_unselectedTintColor;
-(void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setUpSelectedIndicatorViewIfNeeded;
-(void)_updateSelectedIndicatorView;
-(void)_setSelected:(BOOL)arg1 ;
-(void)_updateToMatchCurrentState;
-(BOOL)_showsHighlightedState;
-(BOOL)_shouldBeVibrant;
-(id)_buttonTintColorForState:(unsigned long long)arg1 ;
-(void)_setUnselectedTintColor:(id)arg1 forceLabelToConform:(BOOL)arg2 ;
-(void)_positionBadge;
-(void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_updateInfoFrame;
-(CGRect)_frameForSelectedIndicator;
-(CGSize)_appleTV_sizeThatFits:(CGSize)arg1 ;
-(void)_appleTV_layoutSubviews;
-(void)_showSelectedIndicator:(BOOL)arg1 changeSelection:(BOOL)arg2 ;
-(void)_setShowsHighlightedState:(BOOL)arg1 ;
-(UITabBarButtonLabel *)tabBarButtonLabel;
-(id)_selectedIndicatorView;
-(id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(UIEdgeInsets)arg4 ;
-(void)_setTabBarHitRect:(CGRect)arg1 ;
-(CGRect)_tabBarHitRect;
-(id)_swappableImageView;
-(void)_setSelectedInfoOffset:(UIOffset)arg1 ;
-(void)_setInfoOffset:(UIOffset)arg1 ;
-(void)_setBadgeValue:(id)arg1 ;
-(void)_setBadgeAnimated:(BOOL)arg1 ;
-(void)_setCustomSelectedIndicatorImage:(id)arg1 ;
-(void)_setLabelHidden:(BOOL)arg1 ;
-(UIOffset)_titlePositionAdjustment;
-(void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSValue *)labelOffsetValue;
-(void)setLabelOffsetValue:(NSValue *)arg1 ;
-(BOOL)_centerAllContents;
-(void)_setCenterAllContents:(BOOL)arg1 ;
@end

