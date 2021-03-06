/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libobjc.A.dylib/AVAudioMixing.h>

@class AVAudioConnectionPoint, NSString;

@interface AVAudioMixingDestination : NSObject <AVAudioMixing> {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioConnectionPoint * connectionPoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(AVAudioMixingImpl*)implementation;
-(void)dealloc;
-(id)init;
-(void)setPosition:(AVAudio3DPoint)arg1 ;
-(AVAudio3DPoint)position;
-(id)initWithImpl:(AVAudioMixingImpl*)arg1 ;
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2 ;
-(AVAudioConnectionPoint *)connectionPoint;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)setVolume:(float)arg1 ;
-(void)setPan:(float)arg1 ;
-(float)pan;
-(long long)renderingAlgorithm;
-(void)setRenderingAlgorithm:(long long)arg1 ;
-(float)reverbBlend;
-(void)setReverbBlend:(float)arg1 ;
-(float)obstruction;
-(void)setObstruction:(float)arg1 ;
-(float)occlusion;
-(void)setOcclusion:(float)arg1 ;
-(float)volume;
@end

