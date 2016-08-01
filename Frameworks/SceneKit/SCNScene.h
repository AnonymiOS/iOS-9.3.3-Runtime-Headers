/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNSceneSource, SCNPhysicsWorld, SCNNode, SCNMaterialProperty, NSMutableDictionary, SCNAuthoringEnvironment;

@interface SCNScene : NSObject <NSSecureCoding> {

	C3DSceneRef _scene;
	SCNSceneSource* _sceneSource;
	double _lastEvalTime;
	SCNPhysicsWorld* _physicsWorld;
	SCNNode* _rootNode;
	SCNMaterialProperty* _background;
	NSMutableDictionary* _userAttributes;
	double _fogStartDistance;
	double _fogEndDistance;
	double _fogDensityExponent;
	id _fogColor;
	BOOL _paused;
	BOOL _pausedForEditing;
	SCNAuthoringEnvironment* _authoringEnvironment;

}

@property (nonatomic,readonly) SCNNode * rootNode; 
@property (nonatomic,readonly) SCNPhysicsWorld * physicsWorld; 
@property (nonatomic,readonly) SCNMaterialProperty * background; 
@property (assign,nonatomic) double fogStartDistance; 
@property (assign,nonatomic) double fogEndDistance; 
@property (assign,nonatomic) double fogDensityExponent; 
@property (nonatomic,retain) id fogColor; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
+(id)sceneWithMDLAsset:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)sceneNamed:(id)arg1 inDirectory:(id)arg2 options:(id)arg3 ;
+(id)sceneWithData:(id)arg1 options:(id)arg2 ;
+(id)sceneNamed:(id)arg1 ;
+(id)sceneNamed:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 ;
+(id)sceneWithURL:(id)arg1 atIndex:(long long)arg2 options:(id)arg3 ;
+(id)sceneWithData:(id)arg1 atIndex:(long long)arg2 options:(id)arg3 ;
+(id)sceneWithSceneRef:(C3DSceneRef)arg1 ;
+(BOOL)canImportFileUTI:(id)arg1 ;
+(BOOL)canImportFileExtension:(id)arg1 ;
+(id)supportedFileUTIsForImport;
+(id)supportedFileUTIsForExport;
+(SEL)jsConstructor;
+(id)scene;
+(id)sceneWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)debugQuickLookObject;
-(id)debugQuickLookObjectWithPointOfView:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 options:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(void)lock;
-(void)unlock;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(SCNMaterialProperty *)background;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(BOOL)isPaused;
-(void*)__CFObject;
-(SCNPhysicsWorld *)physicsWorld;
-(C3DSceneRef)sceneRef;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)_physicsWorldCreateIfNeeded:(BOOL)arg1 ;
-(void)_syncObjCModel;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2 ;
-(id)particleSystems;
-(void)removeAllParticleSystems;
-(void)removeParticleSystem:(id)arg1 ;
-(void)_setRootNode:(id)arg1 ;
-(id)initWithSceneRef:(C3DSceneRef)arg1 ;
-(double)frameRate;
-(void)setFrameRate:(double)arg1 ;
-(void)setUpAxis:(SCNVector3)arg1 ;
-(SCNVector3)upAxis;
-(id)initForJavascript:(id)arg1 ;
-(void)_customEncodingOfSCNScene:(id)arg1 ;
-(void)_didEncodeSCNScene:(id)arg1 ;
-(void)_customDecodingOfSCNScene:(id)arg1 ;
-(void)setRootNode:(SCNNode *)arg1 ;
-(void)setFogStartDistance:(double)arg1 ;
-(void)setFogEndDistance:(double)arg1 ;
-(void)setFogDensityExponent:(double)arg1 ;
-(void)setFogColor:(id)arg1 ;
-(void)_didDecodeSCNScene:(id)arg1 ;
-(double)lastEvalTime;
-(void)setLastEvalTime:(double)arg1 ;
-(id)_scenes;
-(void)setSceneSource:(id)arg1 ;
-(id)sceneSource;
-(void)_scaleSceneBy:(double)arg1 ;
-(id)fogColor;
-(double)fogEndDistance;
-(double)fogDensityExponent;
-(double)fogStartDistance;
-(BOOL)writeToURL:(id)arg1 options:(id)arg2 delegate:(id)arg3 progressHandler:(/*^block*/id)arg4 ;
-(void)addSceneAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 ;
-(void)addParticleSystem:(id)arg1 withTransform:(SCNMatrix4)arg2 ;
-(void)setPausedForEditing:(BOOL)arg1 ;
-(BOOL)isPausedForEditing;
-(float)playbackSpeed;
-(void)setPlaybackSpeed:(float)arg1 ;
-(id)scene;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)root;
-(SCNNode *)rootNode;
@end
