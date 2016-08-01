/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNAnimatable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SCNOrderedDictionary, UIColor, NSArray;

@interface SCNMaterialProperty : NSObject <SCNAnimatable, NSSecureCoding> {

	unsigned _isPresentationInstance : 1;
	unsigned _isCommonProfileProperty : 1;
	id _parent;
	int _propertyType;
	NSString* _customSlotName;
	SCNOrderedDictionary* _animations;
	UIColor* _borderColor;
	unsigned char _contentType;
	id _contents;
	long long _mappingChannel;
	float _intensity;
	float _maxAnisotropy;
	long long _minificationFilter;
	long long _magnificationFilter;
	long long _mipFilter;
	long long _wrapS;
	long long _wrapT;
	_C3DEffectSlot* _customSlot;
	C3DImageRef _c3dImage;
	C3DTextureProxyRef _textureProxy;
	SCNMatrix4* _contentTransform;

}

@property (nonatomic,retain) id contents; 
@property (assign,nonatomic) double intensity; 
@property (assign,nonatomic) long long minificationFilter; 
@property (assign,nonatomic) long long magnificationFilter; 
@property (assign,nonatomic) long long mipFilter; 
@property (assign,nonatomic) SCNMatrix4 contentsTransform; 
@property (assign,nonatomic) long long wrapS; 
@property (assign,nonatomic) long long wrapT; 
@property (nonatomic,retain) id borderColor; 
@property (assign,nonatomic) long long mappingChannel; 
@property (assign,nonatomic) double maxAnisotropy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * animationKeys; 
+(BOOL)supportsSecureCoding;
+(C3DImageRef)copyC3DImageFromImage:(id)arg1 ;
+(id)copyImageFromC3DImage:(C3DImageRef)arg1 ;
+(C3DImageRef)copyC3DImageFromImage:(id)arg1 autoCubemap:(BOOL)arg2 ;
+(C3DImageRef)_copyC3DImageFromImageData:(id)arg1 typeID:(unsigned long long)arg2 ;
+(id)_copyImageFromC3DImage:(C3DImageRef)arg1 ;
+(id)materialPropertyWithContents:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)layer;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)_setParent:(id)arg1 ;
-(id)image;
-(void)setLayer:(id)arg1 ;
-(NSArray *)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)contents;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setMagnificationFilter:(long long)arg1 ;
-(void)removeAllAnimations;
-(void)setContents:(id)arg1 ;
-(void)setContentsTransform:(SCNMatrix4)arg1 ;
-(void)setBorderColor:(id)arg1 ;
-(id)color;
-(void)_clearContents;
-(void)_setColor:(id)arg1 ;
-(void)setColor:(id)arg1 ;
-(id)borderColor;
-(id)content;
-(void)addAnimation:(id)arg1 ;
-(void)setAttachment:(id)arg1 ;
-(id)attachment;
-(void)setMinificationFilter:(long long)arg1 ;
-(void)setContent:(id)arg1 ;
-(void*)__CFObject;
-(void)setMaxAnisotropy:(double)arg1 ;
-(C3DSceneRef)sceneRef;
-(void)_syncObjCAnimations;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(void)_syncObjCModel;
-(void)parentWillDie:(id)arg1 ;
-(id)initWithParent:(id)arg1 propertyType:(int)arg2 ;
-(_C3DEffectCommonProfile*)commonProfile;
-(void)_setC3DImageRef:(C3DImageRef)arg1 ;
-(id)presentationMaterialProperty;
-(id)slotName;
-(void)unlinkCustomPropertyWithParent:(id)arg1 ;
-(void)linkCustomPropertyWithParent:(id)arg1 andCustomName:(id)arg2 ;
-(_C3DEffectSlot*)effectSlot;
-(C3DImageRef)getC3DImageRef;
-(id)_animationPathForKey:(id)arg1 ;
-(void)_updateMaterialColor:(id)arg1 ;
-(_C3DTextureSampler*)textureSampler;
-(void)_updateMaterialFilters;
-(long long)_presentationMappingChannel;
-(void)_updateMaterialBorderColor:(id)arg1 ;
-(void)_updateMaterialAttachment:(id)arg1 ;
-(BOOL)_supportsCubeMaps;
-(void)_updateMaterialImage:(id)arg1 ;
-(void)_updateMaterialSKScene:(id)arg1 ;
-(void)_updateMaterialSKTexture:(id)arg1 ;
-(void)_updateMaterialLayer:(id)arg1 ;
-(void)_layerDidChange:(id)arg1 ;
-(void)_updateMaterialUIComponent:(id)arg1 ;
-(void)setSkScene:(id)arg1 ;
-(void)setSkTexture:(id)arg1 ;
-(void)setMtlTexture:(id)arg1 ;
-(void)setUIView:(id)arg1 ;
-(void)setUIWindow:(id)arg1 ;
-(_C3DEffectSlot*)effectSlotCreateIfNeeded:(BOOL)arg1 ;
-(void)_updateMaterialProceduralContents:(id)arg1 ;
-(void)_updateMaterialMTLTexture:(id)arg1 ;
-(void)__allocateContentTransformIfNeeded;
-(void)_updateMaterialPropertyTransform:(C3DMatrix4x4)arg1 ;
-(id)initPresentationMaterialPropertyWithModelProperty:(id)arg1 ;
-(C3DColor4)borderColor4;
-(void)_customEncodingOfSCNMaterialProperty:(id)arg1 ;
-(void)_customDecodingOfSCNMaterialProperty:(id)arg1 ;
-(void)_didDecodeSCNMaterialProperty:(id)arg1 ;
-(id)initWithParent:(id)arg1 andCustomName:(id)arg2 ;
-(C3DColor4)color4;
-(id)pvrtcData;
-(id)skScene;
-(id)skTexture;
-(id)UIView;
-(double)maxAnisotropy;
-(void)setProceduralContents:(id)arg1 ;
-(id)proceduralContents;
-(id)mtlTexture;
-(int)propertyType;
-(SCNMatrix4)contentsTransform;
-(long long)magnificationFilter;
-(long long)minificationFilter;
-(long long)mappingChannel;
-(void)setMappingChannel:(long long)arg1 ;
-(long long)mipFilter;
-(void)setMipFilter:(long long)arg1 ;
-(long long)wrapS;
-(void)setWrapS:(long long)arg1 ;
-(long long)wrapT;
-(void)setWrapT:(long long)arg1 ;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(id)parent;
-(void)copyPropertiesFrom:(id)arg1 ;
@end

