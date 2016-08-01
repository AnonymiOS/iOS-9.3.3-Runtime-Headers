/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSArray;

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue {

	NSArray* _trackIdentifiers;
	unsigned long long _shuffleType;

}

@property (nonatomic,readonly) NSArray * trackIdentifiers;                  //@synthesize trackIdentifiers=_trackIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long shuffleType;              //@synthesize shuffleType=_shuffleType - In the implementation block
-(id)description;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(unsigned long long)shuffleType;
-(NSArray *)trackIdentifiers;
-(BOOL)verifyWithError:(id*)arg1 ;
@end

