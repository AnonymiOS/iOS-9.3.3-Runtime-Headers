/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyTexGen : GLKEffectProperty {

	int _mode;
	float* _plane;
	int _coord;
	int _modeLoc;
	int _planeLoc;
	int _eyePlaneByInvModelviewLoc;
	unsigned _textureIndex;
	float* _eyePlaneByInvModelview;
	char* _modeNameString;
	char* _planeNameString;

}

@property (assign,nonatomic) int mode;                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) int coord;                                //@synthesize coord=_coord - In the implementation block
@property (assign,nonatomic) float* plane;                               //@synthesize plane=_plane - In the implementation block
@property (assign,nonatomic) float* eyePlaneByInvModelview;              //@synthesize eyePlaneByInvModelview=_eyePlaneByInvModelview - In the implementation block
@property (assign,nonatomic) int modeLoc;                                //@synthesize modeLoc=_modeLoc - In the implementation block
@property (assign,nonatomic) int planeLoc;                               //@synthesize planeLoc=_planeLoc - In the implementation block
@property (assign,nonatomic) int eyePlaneByInvModelviewLoc;              //@synthesize eyePlaneByInvModelviewLoc=_eyePlaneByInvModelviewLoc - In the implementation block
@property (assign,nonatomic) char* modeNameString;                       //@synthesize modeNameString=_modeNameString - In the implementation block
@property (assign,nonatomic) char* planeNameString;                      //@synthesize planeNameString=_planeNameString - In the implementation block
@property (assign,nonatomic) unsigned textureIndex;                      //@synthesize textureIndex=_textureIndex - In the implementation block
-(void)bind;
-(void)dealloc;
-(id)init;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)dirtyAllUniforms;
-(void)setTextureIndex:(unsigned)arg1 ;
-(void)initializeMasks;
-(void)setShaderBindings;
-(int)modeLoc;
-(void)setModeLoc:(int)arg1 ;
-(void)setModeNameString:(char*)arg1 ;
-(void)setPlaneNameString:(char*)arg1 ;
-(char*)modeNameString;
-(char*)planeNameString;
-(id)initWithMode:(int)arg1 coord:(int)arg2 ;
-(void)setPlane:(float*)arg1 ;
-(float*)plane;
-(int)coord;
-(float*)eyePlaneByInvModelview;
-(void)setEyePlaneByInvModelview:(float*)arg1 ;
-(int)planeLoc;
-(void)setPlaneLoc:(int)arg1 ;
-(int)eyePlaneByInvModelviewLoc;
-(void)setEyePlaneByInvModelviewLoc:(int)arg1 ;
-(unsigned)textureIndex;
@end

