/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface MPPlaybackContext : NSObject <NSCoding> {

	BOOL _shouldStartPlayback;
	BOOL _shouldRestartPlayback;
	long long _startIndex;
	unsigned long long _shuffleType;
	unsigned long long _repeatType;

}

@property (assign,nonatomic) long long startIndex;                        //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) BOOL shouldStartPlayback;                    //@synthesize shouldStartPlayback=_shouldStartPlayback - In the implementation block
@property (assign,nonatomic) BOOL shouldRestartPlayback;                  //@synthesize shouldRestartPlayback=_shouldRestartPlayback - In the implementation block
@property (assign,nonatomic) unsigned long long shuffleType;              //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) unsigned long long repeatType;               //@synthesize repeatType=_repeatType - In the implementation block
+(Class)queueFeederClass;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(long long)startIndex;
-(BOOL)shouldRestartPlayback;
-(void)setStartIndex:(long long)arg1 ;
-(unsigned long long)shuffleType;
-(void)setShuffleType:(unsigned long long)arg1 ;
-(void)setShouldStartPlayback:(BOOL)arg1 ;
-(void)setShouldRestartPlayback:(BOOL)arg1 ;
-(unsigned long long)repeatType;
-(void)setRepeatType:(unsigned long long)arg1 ;
-(BOOL)shouldStartPlayback;
-(id)descriptionComponents;
@end

