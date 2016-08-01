/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <libobjc.A.dylib/TKVibrationRecorderStyleProvider.h>

@class UIColor, UIScreen, UIFont, UIImage, NSBundle, NSMutableDictionary, NSString;

@interface TKStyleProvider : NSObject <TKVibrationRecorderStyleProvider> {

	UIScreen* _screen;
	NSBundle* _bundle;
	NSMutableDictionary* _cachedStyleProperties;

}

@property (nonatomic,readonly) double defaultAnimationDuration; 
@property (setter=_setBundle:,nonatomic,retain) NSBundle * _bundle;                                                       //@synthesize bundle=_bundle - In the implementation block
@property (setter=_setCachedStyleProperties:,nonatomic,retain) NSMutableDictionary * _cachedStyleProperties;              //@synthesize cachedStyleProperties=_cachedStyleProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIColor * vibrationRecorderBarsBackgroundColor; 
@property (nonatomic,retain) UIScreen * screen;                                                                           //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) UIFont * vibrationRecorderInstructionsLabelFont; 
@property (nonatomic,readonly) UIColor * vibrationRecorderInstructionsLabelTextColor; 
@property (nonatomic,readonly) UIColor * vibrationRecorderInstructionsLabelBackgroundColor; 
@property (nonatomic,readonly) UIOffset vibrationRecorderInstructionsLabelPositionOffset; 
@property (nonatomic,readonly) UIEdgeInsets vibrationRecorderInstructionsLabelEdgeInsets; 
@property (nonatomic,readonly) double vibrationRecorderInstructionsLabelFadeAnimationDuration; 
@property (nonatomic,readonly) double vibrationRecorderControlsToolbarVerticalOffset; 
@property (nonatomic,readonly) double vibrationRecorderControlsToolbarAdditionalHeight; 
@property (nonatomic,readonly) double vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge; 
@property (nonatomic,readonly) double vibrationRecorderProgressToolbarVerticalOffset; 
@property (nonatomic,readonly) double vibrationRecorderProgressToolbarAdditionalHeight; 
@property (nonatomic,readonly) double vibrationRecorderProgressViewHorizontalOffsetFromEdge; 
@property (nonatomic,readonly) double vibrationRecorderProgressViewHeight; 
@property (nonatomic,readonly) UIColor * vibrationRecorderProgressViewTrackColor; 
@property (nonatomic,readonly) double vibrationRecorderProgressViewDotHorizontalInset; 
@property (nonatomic,readonly) UIImage * vibrationRecorderProgressViewResizableDotImage; 
@property (nonatomic,readonly) double vibrationRecorderProgressViewAccessibilityAdditionalHeight; 
@property (nonatomic,readonly) UIColor * vibrationRecorderRippleViewBackgroundColor; 
@property (nonatomic,readonly) double vibrationRecorderRippleRingLineWidth; 
@property (nonatomic,readonly) double vibrationRecorderRippleInitialRadius; 
@property (nonatomic,readonly) double vibrationRecorderRippleFinalRadius; 
@property (nonatomic,readonly) double vibrationRecorderRippleFingerStillSpeed; 
@property (nonatomic,readonly) double vibrationRecorderRippleFingerMovingSpeed; 
-(void)dealloc;
-(id)init;
-(UIScreen *)screen;
-(void)setScreen:(UIScreen *)arg1 ;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(double)defaultAnimationDuration;
-(NSBundle *)_bundle;
-(void)_setBundle:(id)arg1 ;
-(void)_setCachedStyleProperties:(id)arg1 ;
-(NSMutableDictionary *)_cachedStyleProperties;
-(id)_cachedStyleObjectForPropertyWithSelector:(SEL)arg1 ;
-(void)_setCachedStyleObject:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
-(id)_cachedResizableImageForPropertyWithSelector:(SEL)arg1 capInsets:(UIEdgeInsets)arg2 size:(CGSize)arg3 opaque:(BOOL)arg4 withDrawingBlock:(/*^block*/id)arg5 ;
-(UIImage *)vibrationRecorderProgressViewResizableDotImage;
-(UIColor *)vibrationRecorderBarsBackgroundColor;
-(UIFont *)vibrationRecorderInstructionsLabelFont;
-(UIColor *)vibrationRecorderInstructionsLabelTextColor;
-(UIColor *)vibrationRecorderInstructionsLabelBackgroundColor;
-(UIOffset)vibrationRecorderInstructionsLabelPositionOffset;
-(UIEdgeInsets)vibrationRecorderInstructionsLabelEdgeInsets;
-(double)vibrationRecorderInstructionsLabelFadeAnimationDuration;
-(double)vibrationRecorderControlsToolbarVerticalOffset;
-(double)vibrationRecorderControlsToolbarAdditionalHeight;
-(double)vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
-(double)vibrationRecorderProgressToolbarVerticalOffset;
-(double)vibrationRecorderProgressToolbarAdditionalHeight;
-(double)vibrationRecorderProgressViewHorizontalOffsetFromEdge;
-(double)vibrationRecorderProgressViewHeight;
-(UIColor *)vibrationRecorderProgressViewTrackColor;
-(double)vibrationRecorderProgressViewDotHorizontalInset;
-(double)vibrationRecorderProgressViewAccessibilityAdditionalHeight;
-(UIColor *)vibrationRecorderRippleViewBackgroundColor;
-(double)vibrationRecorderRippleRingLineWidth;
-(double)vibrationRecorderRippleInitialRadius;
-(double)vibrationRecorderRippleFinalRadius;
-(double)vibrationRecorderRippleFingerStillSpeed;
-(double)vibrationRecorderRippleFingerMovingSpeed;
-(id)_cachedImageWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2 ;
-(id)_cachedImageForPropertyWithSelector:(SEL)arg1 size:(CGSize)arg2 opaque:(BOOL)arg3 withDrawingBlock:(/*^block*/id)arg4 ;
@end

