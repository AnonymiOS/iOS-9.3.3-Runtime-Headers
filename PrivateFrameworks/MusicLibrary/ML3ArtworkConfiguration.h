/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ML3ArtworkConfiguration : NSObject {

	NSMutableDictionary* _artworkConfigurationDictionary;
	NSMutableDictionary* _supportedSizesCache;
	double _mainScreenScale;

}

@property (nonatomic,retain) NSMutableDictionary * artworkConfigurationDictionary;              //@synthesize artworkConfigurationDictionary=_artworkConfigurationDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * supportedSizesCache;                         //@synthesize supportedSizesCache=_supportedSizesCache - In the implementation block
@property (assign,nonatomic) double mainScreenScale;                                            //@synthesize mainScreenScale=_mainScreenScale - In the implementation block
+(id)systemConfiguration;
-(id)description;
-(NSMutableDictionary *)supportedSizesCache;
-(id)_supportedSizeKeysForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(NSMutableDictionary *)artworkConfigurationDictionary;
-(void)setArtworkConfigurationDictionary:(NSMutableDictionary *)arg1 ;
-(void)setSupportedSizesCache:(NSMutableDictionary *)arg1 ;
-(void)setMainScreenScale:(double)arg1 ;
-(id)supportedSizesForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(id)initWithConfigurationDictionaries:(id)arg1 ;
-(id)sizesToAutogenerateForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(double)mainScreenScale;
@end

