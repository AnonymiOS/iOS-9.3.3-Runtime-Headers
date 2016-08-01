/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol UINamedLayerStack;
@class NSString, NSArray, CALayer, CATransformLayer, _UIStackedImageLayerDelegate, UIView, _UIStackedImageConfiguration;

@interface _UIStackedImageContainerLayer : CALayer {

	BOOL _animatingToNormalState;
	double _selectionStartTime;
	double _selectionDuration;
	long long _selectionStyle;
	double _idleModeFocusSizeOffset;
	CGSize _radiosityImageScale;
	BOOL _radiosityNeedsLayout;
	double _scale;
	NSString* _imageStackContentsGravity;
	double _radiosityRequestTime;
	double _animationDelay;
	double _rotationAmount;
	CGPoint _translationOffset;
	double _maximumParallaxDepth;
	id _flatImage;
	NSArray* _parallaxImages;
	NSArray* _parallaxLayerDepths;
	CALayer* _imageLayersContainer;
	NSArray* _imageLayers;
	CALayer* _flatLayer;
	CALayer* _flatShadowLayer;
	CALayer* _maskLayer;
	CALayer* _radiosityLayer;
	CALayer* _selectedPlaceholderLayer;
	CALayer* _shadowLayer;
	CALayer* _specularLayer;
	CALayer* _cursorLayer;
	CALayer* _cursorLayerContainer;
	CALayer* _focusKeylineStrokeLayer;
	CALayer* _overlayLayer;
	CALayer* _overlayContainerLayer;
	CALayer* _unmaskedOverlayLayer;
	CALayer* _unmaskedOverlayContainerLayer;
	CATransformLayer* _imagePerspectiveTransformLayer;
	CATransformLayer* _imageRotationTransformLayer;
	CATransformLayer* _maskPerspectiveTransformLayer;
	CATransformLayer* _maskRotationTransformLayer;
	CATransformLayer* _cursorRotationTransformLayer;
	CALayer* _frontmostPerspectiveTransformLayer;
	CATransformLayer* _frontmostRotationTransformLayer;
	_UIStackedImageLayerDelegate* _layoutDelegate;
	UIView* _animationView;
	_UIStackedImageConfiguration* _configuration;
	id<UINamedLayerStack> _layerStack;
	unsigned long long _controlState;
	CGPoint _focusDirection;

}

@property (nonatomic,retain) _UIStackedImageConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<UINamedLayerStack> layerStack;                          //@synthesize layerStack=_layerStack - In the implementation block
@property (assign,nonatomic) unsigned long long controlState;                           //@synthesize controlState=_controlState - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) CGPoint focusDirection;                                    //@synthesize focusDirection=_focusDirection - In the implementation block
+(id)_layerStackObservingKeys;
+(CGSize)_scaledSizeForSize:(CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3 ;
-(void)dealloc;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isHighlighted;
-(BOOL)_isSelected;
-(void)setConfiguration:(_UIStackedImageConfiguration *)arg1 ;
-(unsigned long long)controlState;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)_selectionStyle;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)layoutSublayers;
-(void)_setDefaultParallaxLayerDepths;
-(CGRect)_displayFrameForModelFrame:(CGRect)arg1 ;
-(id)_preferredLayoutDelegateForLayer:(id)arg1 ;
-(CGRect)_positionAndSizeForLayerImage:(id)arg1 ;
-(CGRect)_cursorBounds;
-(void)_updateShadowBounds;
-(void)_updateShadowPositionWithOffset:(CGPoint)arg1 ;
-(void)_updateShadowHighQualityGraphicsWithAnimationCoordinator:(id)arg1 ;
-(BOOL)_isFocusedOrFocusedIdle;
-(void)_updateLayerForSelection;
-(BOOL)_radiosityEnabled;
-(void)_layoutRadiosityLayer;
-(void)_updateCornerRadiusFromConfig;
-(void)_updateRadiosityFromLayerStack;
-(void)_setFlatImage:(id)arg1 ;
-(void)_setImageStackContentsGravity:(id)arg1 ;
-(void)_setupFrontmostTransformLayers;
-(id)_TVTraitCollection;
-(void)_resetAnimatingToNormalState;
-(void)_setParallaxImages:(id)arg1 ;
-(void)_setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_primaryControlStateForState:(unsigned long long)arg1 ;
-(CGSize)_focusCursorInsetSizeForSize:(CGSize)arg1 ;
-(void)_applyFocusDirectionTransform;
-(void)_deselect;
-(void)_showImageLayers;
-(double)_focusedScaleFactorForCurrentBounds;
-(void)_updateImageLayerFilterChains;
-(BOOL)_isNormal;
-(void)_updateLayerForSelectionWithAnimationCoordinator:(id)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)_setFocusDirection:(CGPoint)arg1 duration:(double)arg2 ;
-(BOOL)_isFocusedIdle;
-(double)_idleModeFocusSizeOffset;
-(void)_applyFocusDirectionTransformHighQualityGraphicsWithAnimationCoordinator:(id)arg1 ;
-(CGSize)_scaledSizeForCurrentState;
-(CGPoint)_layerStackToDisplayScaleFactor;
-(id)_imageStackContentsGravity;
-(void)_applyFocusDirectionTransformWithAnimationCoordinator:(id)arg1 ;
-(void)_applyFocusDirectionTransformLowQualityGraphicsWithAnimationCoordinator:(id)arg1 ;
-(CATransform3D)_scaleTransformForCurrentState;
-(void)_updatePerspective;
-(void)_updateRotationAndTranslation:(id)arg1 ;
-(void)_updateFullBleedImageLayers;
-(void)_updateNormalImageLayers;
-(void)_updateFocusKeylineStroke:(CGPoint)arg1 ;
-(BOOL)_isFocused;
-(id)_randomImage;
-(CATransform3D)_perspectiveTransformForCurrentState;
-(CATransform3D)_rotationTransformForCurrentFocusDirection;
-(void)_updateSpecularLayerContentsRect;
-(void)_updateLayerForSelectionHighQualityGraphicsWithAnimationCoordinator:(id)arg1 ;
-(void)_updateLayerForSelectionLowQualityGraphicsWithAnimationCoordinator:(id)arg1 ;
-(double)_focusedShadowRadius;
-(double)_unfocusedShadowRadius;
-(double)_getShadowOpacity;
-(void)setLayerStack:(id<UINamedLayerStack>)arg1 ;
-(void)setControlState:(unsigned long long)arg1 ;
-(BOOL)isPressed;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(id)_layerBelowTitles;
-(id)_flatLayer;
-(id)_shadowLayer;
-(void)_setSelectionStyle:(long long)arg1 ;
-(void)_setOverlayLayer:(id)arg1 ;
-(void)_setUnmaskedOverlayLayer:(id)arg1 ;
-(id)_parallaxLayerDepths;
-(void)_setParallaxLayerDepths:(id)arg1 ;
-(void)_setIdleModeFocusSizeOffset:(double)arg1 ;
-(_UIStackedImageConfiguration *)configuration;
-(id<UINamedLayerStack>)layerStack;
-(CGPoint)focusDirection;
@end

