/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@class UIBezierPath, UIFont, NSString;

@interface SCNText : SCNGeometry {

	float _flatness;
	float _chamferRadius;
	float _extrusionDepth;
	float _discretizedStraightLineMaxLength;
	UIBezierPath* _chamferProfile;
	long long _primitiveType;
	id _string;
	UIFont* _font;
	BOOL _wrapped;
	int _alignmentMode;
	int _truncationMode;
	BOOL _useCustomContainerFrame;
	CGRect _customContainerFrame;
	BOOL __wantsSeparateGeometryElements;

}

@property (assign,nonatomic) double extrusionDepth; 
@property (nonatomic,copy) id string; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,getter=isWrapped,nonatomic) BOOL wrapped; 
@property (assign,nonatomic) CGRect containerFrame; 
@property (nonatomic,copy) NSString * truncationMode; 
@property (nonatomic,copy) NSString * alignmentMode; 
@property (assign,nonatomic) double chamferRadius; 
@property (nonatomic,copy) UIBezierPath * chamferProfile; 
@property (assign,nonatomic) double flatness; 
+(id)text;
+(BOOL)supportsSecureCoding;
+(id)textWithString:(id)arg1 extrusionDepth:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)flatness;
-(void)setFlatness:(double)arg1 ;
-(id)string;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setString:(id)arg1 ;
-(void)setAlignmentMode:(NSString *)arg1 ;
-(void)setTruncationMode:(NSString *)arg1 ;
-(long long)primitiveType;
-(void)setPrimitiveType:(long long)arg1 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(_C3DGeometry*)__createCFObject;
-(void)_syncObjCModel:(_C3DTextGeometry*)arg1 ;
-(UIBezierPath *)chamferProfile;
-(void)setChamferProfile:(UIBezierPath *)arg1 ;
-(id)initPresentationTextGeometryWithTextGeometryRef:(_C3DTextGeometry*)arg1 ;
-(id)initWithTextGeometryRef:(_C3DTextGeometry*)arg1 ;
-(SCD_Struct_SC90*)params;
-(void)_customEncodingOfSCNText:(id)arg1 ;
-(void)_customDecodingOfSCNText:(id)arg1 ;
-(void)setDiscretizedStraightLineMaxLength:(double)arg1 ;
-(void)set_wantsSeparateGeometryElements:(BOOL)arg1 ;
-(BOOL)_wantsSeparateGeometryElements;
-(double)discretizedStraightLineMaxLength;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(BOOL)isWrapped;
-(void)setWrapped:(BOOL)arg1 ;
-(NSString *)truncationMode;
-(CGRect)containerFrame;
-(void)setContainerFrame:(CGRect)arg1 ;
-(NSString *)alignmentMode;
-(double)extrusionDepth;
-(void)setExtrusionDepth:(double)arg1 ;
-(double)chamferRadius;
-(void)setChamferRadius:(double)arg1 ;
@end

