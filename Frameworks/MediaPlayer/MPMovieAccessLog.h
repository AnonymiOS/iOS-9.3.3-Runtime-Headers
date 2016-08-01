/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLog, NSData, NSArray;

@interface MPMovieAccessLog : NSObject <NSCopying> {

	AVPlayerItemAccessLog* _accessLog;

}

@property (nonatomic,readonly) NSData * extendedLogData; 
@property (nonatomic,readonly) unsigned long long extendedLogDataStringEncoding; 
@property (nonatomic,readonly) NSArray * events; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithAVItemAccessLog:(id)arg1 ;
-(NSData *)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(NSArray *)events;
@end
