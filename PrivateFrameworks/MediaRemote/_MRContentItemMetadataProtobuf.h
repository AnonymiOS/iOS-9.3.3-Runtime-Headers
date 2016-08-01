/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying> {

	double _duration;
	double _releaseDate;
	NSString* _albumArtistName;
	NSString* _albumName;
	NSData* _artworkData;
	NSString* _directorName;
	int _episodeNumber;
	NSString* _localizedContentRating;
	int _playCount;
	float _playbackProgress;
	int _playlistType;
	int _radioStationType;
	int _seasonNumber;
	NSString* _subtitle;
	NSString* _title;
	NSString* _trackArtistName;
	BOOL _isContainer;
	BOOL _isExplicitItem;
	BOOL _isPlayable;
	SCD_Struct_MR26 _has;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                            //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL hasIsContainer; 
@property (assign,nonatomic) BOOL isContainer;                               //@synthesize isContainer=_isContainer - In the implementation block
@property (assign,nonatomic) BOOL hasIsPlayable; 
@property (assign,nonatomic) BOOL isPlayable;                                //@synthesize isPlayable=_isPlayable - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackProgress; 
@property (assign,nonatomic) float playbackProgress;                         //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbumName; 
@property (nonatomic,retain) NSString * albumName;                           //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,readonly) BOOL hasTrackArtistName; 
@property (nonatomic,retain) NSString * trackArtistName;                     //@synthesize trackArtistName=_trackArtistName - In the implementation block
@property (nonatomic,readonly) BOOL hasAlbumArtistName; 
@property (nonatomic,retain) NSString * albumArtistName;                     //@synthesize albumArtistName=_albumArtistName - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectorName; 
@property (nonatomic,retain) NSString * directorName;                        //@synthesize directorName=_directorName - In the implementation block
@property (assign,nonatomic) BOOL hasSeasonNumber; 
@property (assign,nonatomic) int seasonNumber;                               //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (assign,nonatomic) BOOL hasEpisodeNumber; 
@property (assign,nonatomic) int episodeNumber;                              //@synthesize episodeNumber=_episodeNumber - In the implementation block
@property (assign,nonatomic) BOOL hasReleaseDate; 
@property (assign,nonatomic) double releaseDate;                             //@synthesize releaseDate=_releaseDate - In the implementation block
@property (assign,nonatomic) BOOL hasPlayCount; 
@property (assign,nonatomic) int playCount;                                  //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedContentRating; 
@property (nonatomic,retain) NSString * localizedContentRating;              //@synthesize localizedContentRating=_localizedContentRating - In the implementation block
@property (assign,nonatomic) BOOL hasIsExplicitItem; 
@property (assign,nonatomic) BOOL isExplicitItem;                            //@synthesize isExplicitItem=_isExplicitItem - In the implementation block
@property (assign,nonatomic) BOOL hasPlaylistType; 
@property (assign,nonatomic) int playlistType;                               //@synthesize playlistType=_playlistType - In the implementation block
@property (assign,nonatomic) BOOL hasRadioStationType; 
@property (assign,nonatomic) int radioStationType;                           //@synthesize radioStationType=_radioStationType - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkData; 
@property (nonatomic,retain) NSData * artworkData;                           //@synthesize artworkData=_artworkData - In the implementation block
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setIsContainer:(BOOL)arg1 ;
-(void)setHasIsContainer:(BOOL)arg1 ;
-(BOOL)hasIsContainer;
-(void)setIsPlayable:(BOOL)arg1 ;
-(void)setHasIsPlayable:(BOOL)arg1 ;
-(BOOL)hasIsPlayable;
-(void)setHasPlaybackProgress:(BOOL)arg1 ;
-(BOOL)hasPlaybackProgress;
-(BOOL)hasAlbumName;
-(BOOL)hasTrackArtistName;
-(BOOL)hasAlbumArtistName;
-(BOOL)hasDirectorName;
-(void)setHasEpisodeNumber:(BOOL)arg1 ;
-(BOOL)hasEpisodeNumber;
-(void)setHasReleaseDate:(BOOL)arg1 ;
-(BOOL)hasReleaseDate;
-(BOOL)hasLocalizedContentRating;
-(void)setIsExplicitItem:(BOOL)arg1 ;
-(void)setHasIsExplicitItem:(BOOL)arg1 ;
-(BOOL)hasIsExplicitItem;
-(void)setHasPlaylistType:(BOOL)arg1 ;
-(BOOL)hasPlaylistType;
-(void)setHasRadioStationType:(BOOL)arg1 ;
-(BOOL)hasRadioStationType;
-(BOOL)hasArtworkData;
-(void)setHasSeasonNumber:(BOOL)arg1 ;
-(BOOL)hasSeasonNumber;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(void)setHasPlayCount:(BOOL)arg1 ;
-(BOOL)hasPlayCount;
-(int)playCount;
-(void)setPlayCount:(int)arg1 ;
-(float)playbackProgress;
-(void)setPlaybackProgress:(float)arg1 ;
-(NSString *)trackArtistName;
-(NSString *)directorName;
-(int)seasonNumber;
-(int)episodeNumber;
-(int)playlistType;
-(int)radioStationType;
-(NSString *)localizedContentRating;
-(BOOL)isExplicitItem;
-(void)setTrackArtistName:(NSString *)arg1 ;
-(void)setDirectorName:(NSString *)arg1 ;
-(void)setSeasonNumber:(int)arg1 ;
-(void)setEpisodeNumber:(int)arg1 ;
-(void)setPlaylistType:(int)arg1 ;
-(void)setRadioStationType:(int)arg1 ;
-(void)setLocalizedContentRating:(NSString *)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(BOOL)isPlayable;
-(NSString *)albumArtistName;
-(BOOL)isContainer;
-(double)releaseDate;
-(void)setReleaseDate:(double)arg1 ;
-(void)setAlbumArtistName:(NSString *)arg1 ;
-(BOOL)hasSubtitle;
@end

