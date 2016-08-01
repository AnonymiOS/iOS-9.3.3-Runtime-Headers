/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNNode, SCNGeometry, NSArray, SCNGeometrySource;

@interface SCNSkinner : NSObject <NSSecureCoding> {

	C3DSkinnerRef _skinner;

}

@property (nonatomic,retain) SCNNode * skeleton; 
@property (nonatomic,retain) SCNGeometry * baseGeometry; 
@property (assign,nonatomic) SCNMatrix4 baseGeometryBindTransform; 
@property (nonatomic,readonly) NSArray * boneInverseBindTransforms; 
@property (nonatomic,readonly) NSArray * bones; 
@property (nonatomic,readonly) SCNGeometrySource * boneWeights; 
@property (nonatomic,readonly) SCNGeometrySource * boneIndices; 
+(BOOL)supportsSecureCoding;
+(id)skinnerWithSkinnerRef:(C3DSkinnerRef)arg1 ;
+(C3DSkinnerRef)createSkinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneWeights:(id)arg3 boneIndices:(id)arg4 ;
+(id)skinnerWithBaseGeometry:(id)arg1 bones:(id)arg2 boneInverseBindTransforms:(id)arg3 boneWeights:(id)arg4 boneIndices:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)joints;
-(void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(C3DSkinnerRef)skinnerRef;
-(SCNNode *)skeleton;
-(void)setSkeleton:(SCNNode *)arg1 ;
-(id)initWithSkinnerRef:(C3DSkinnerRef)arg1 ;
-(void)setBones:(NSArray *)arg1 ;
-(void)setBoneInverseBindTransforms:(NSArray *)arg1 ;
-(NSArray *)bones;
-(SCNGeometry *)baseGeometry;
-(SCNMatrix4)baseGeometryBindTransform;
-(SCNGeometrySource *)boneWeights;
-(SCNGeometrySource *)boneIndices;
-(NSArray *)boneInverseBindTransforms;
-(void)setBaseGeometryBindTransform:(SCNMatrix4)arg1 ;
-(void)setBaseGeometry:(SCNGeometry *)arg1 ;
-(id)scene;
-(void)finalize;
@end

