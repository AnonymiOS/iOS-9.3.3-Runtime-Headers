/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderAudioMixOutputInternal, NSArray, NSDictionary, AVAudioMix, NSString;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {

	AVAssetReaderAudioMixOutputInternal* _audioMixOutputInternal;

}

@property (nonatomic,readonly) NSArray * audioTracks; 
@property (nonatomic,readonly) NSDictionary * audioSettings; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(AVAudioMix *)audioMix;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(NSArray *)audioTracks;
-(id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2 ;
-(NSDictionary *)audioSettings;
-(void)_setAudioVolumeCurve:(id)arg1 forTrack:(id)arg2 ;
-(void)_setAudioTimePitchAlgorithm:(id)arg1 forTrack:(id)arg2 ;
-(void)_setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 forTrack:(id)arg2 ;
-(id)_audioVolumeCurveForTrack:(id)arg1 ;
-(id)_audioTimePitchAlgorithmForTrack:(id)arg1 ;
-(opaqueMTAudioProcessingTapRef)_audioTapProcessorForTrack:(id)arg1 ;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(id)mediaType;
-(id)_asset;
-(void)finalize;
@end

