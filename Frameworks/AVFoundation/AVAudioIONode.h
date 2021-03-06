/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/AVAudioNode.h>

@interface AVAudioIONode : AVAudioNode

@property (nonatomic,readonly) double presentationLatency; 
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef audioUnit; 
-(double)presentationLatency;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(void)didAttachToEngine:(id)arg1 ;
-(void)didDetachFromEngine:(id)arg1 ;
@end

