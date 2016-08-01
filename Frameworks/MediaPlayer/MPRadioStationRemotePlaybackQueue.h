/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSString;

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue {

	long long _stationID;
	NSString* _stationStringID;

}

@property (nonatomic,readonly) long long stationID;                     //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) NSString * stationStringID;              //@synthesize stationStringID=_stationStringID - In the implementation block
-(id)description;
-(long long)stationID;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(NSString *)stationStringID;
-(BOOL)verifyWithError:(id*)arg1 ;
@end
