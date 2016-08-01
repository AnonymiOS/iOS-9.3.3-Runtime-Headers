/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MusicEntityPlaybackStatus : NSObject <NSCopying, NSMutableCopying> {

	double _playbackCurrentTime;
	double _playbackCurrentTimeOriginatingTime;
	long long _playbackDisplayState;
	double _playbackDuration;
	float _playbackRate;

}

@property (nonatomic,readonly) double playbackCurrentTime; 
@property (nonatomic,readonly) long long playbackDisplayState;              //@synthesize playbackDisplayState=_playbackDisplayState - In the implementation block
@property (nonatomic,readonly) double playbackDuration;                     //@synthesize playbackDuration=_playbackDuration - In the implementation block
@property (nonatomic,readonly) float playbackRate;                          //@synthesize playbackRate=_playbackRate - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayPlaying; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)playbackDuration;
-(double)playbackCurrentTime;
-(BOOL)shouldDisplayPlaying;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(long long)playbackDisplayState;
-(float)playbackRate;
@end

