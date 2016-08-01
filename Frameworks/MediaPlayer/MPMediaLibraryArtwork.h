/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSArray, MPMediaLibraryArtworkRequest, ML3Artwork, NSURL, NSDictionary;

@interface MPMediaLibraryArtwork : NSObject {

	NSArray* _validSizes;
	MPMediaLibraryArtworkRequest* _artworkRequest;
	ML3Artwork* _artwork;

}

@property (nonatomic,readonly) NSArray * validSizes;                                            //@synthesize validSizes=_validSizes - In the implementation block
@property (nonatomic,copy,readonly) NSURL * originalFileURL; 
@property (nonatomic,copy) NSDictionary * effectsMetadata; 
@property (assign,nonatomic,__weak) MPMediaLibraryArtworkRequest * artworkRequest;              //@synthesize artworkRequest=_artworkRequest - In the implementation block
@property (nonatomic,retain) ML3Artwork * artwork;                                              //@synthesize artwork=_artwork - In the implementation block
+(id)availableArtworkWithRequest:(id)arg1 ;
+(BOOL)artworkExistsForRequest:(id)arg1 ;
+(BOOL)needsToFetchArtworkForRequest:(id)arg1 ;
+(void)fetchArtworkForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)cancelFetchingArtworkForRequest:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setArtwork:(ML3Artwork *)arg1 ;
-(ML3Artwork *)artwork;
-(void)setArtworkRequest:(MPMediaLibraryArtworkRequest *)arg1 ;
-(MPMediaLibraryArtworkRequest *)artworkRequest;
-(id)imageFileURLForSize:(CGSize)arg1 ;
-(NSURL *)originalFileURL;
-(NSArray *)validSizes;
-(NSDictionary *)effectsMetadata;
-(void)setEffectsMetadata:(NSDictionary *)arg1 ;
@end

