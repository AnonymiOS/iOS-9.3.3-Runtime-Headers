/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrack.h>

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack {

	AVCompositionTrackInternal* _priv;

}

@property (nonatomic,copy,readonly) NSArray * segments; 
-(void)dealloc;
-(id)description;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(NSArray *)segments;
-(void)finalize;
@end

