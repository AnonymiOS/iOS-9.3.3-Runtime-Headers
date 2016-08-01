/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, NSNumber, NSURL, SAMovieV2ReviewListSnippet, SAUIAppPunchOut, SAMovieV2ShowtimeSnippet, SAMovieV2TheaterShowtimeListSnippet, NSDate;

@interface SAMovieV2MovieDetailSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * actors; 
@property (nonatomic,copy) NSString * adamId; 
@property (nonatomic,copy) NSArray * alternateProviderPunchouts; 
@property (nonatomic,copy) NSNumber * availableOnItunesForPurchase; 
@property (nonatomic,copy) NSNumber * availableOnItunesForRent; 
@property (nonatomic,copy) NSArray * directors; 
@property (nonatomic,copy) NSArray * genres; 
@property (nonatomic,copy) NSURL * hiresTrailerUri; 
@property (nonatomic,copy) NSURL * iTunesUri; 
@property (assign,nonatomic) BOOL is3d; 
@property (nonatomic,copy) NSURL * lowresTrailerUri; 
@property (nonatomic,copy) NSURL * movieIdentifier; 
@property (nonatomic,retain) SAMovieV2ReviewListSnippet * movieReviewListSnippet; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * playOnItunesPunchout; 
@property (nonatomic,copy) NSNumber * playTrailer; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (assign,nonatomic) long long runtimeInMinutes; 
@property (nonatomic,retain) SAMovieV2ShowtimeSnippet * showtimeSnippet; 
@property (nonatomic,copy) NSArray * studios; 
@property (nonatomic,copy) NSString * synopsis; 
@property (nonatomic,retain) SAMovieV2TheaterShowtimeListSnippet * theaterShowtimeListSnippet; 
@property (nonatomic,copy) NSString * theaterShowtimeSearchRegionDescription; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
+(id)movieDetailSnippet;
+(id)movieDetailSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)rating;
-(void)setRating:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)posterImages;
-(void)setPosterImages:(NSArray *)arg1 ;
-(NSNumber *)qualityRating;
-(void)setQualityRating:(NSNumber *)arg1 ;
-(NSDate *)theatricalReleaseDate;
-(void)setTheatricalReleaseDate:(NSDate *)arg1 ;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(NSURL *)iTunesUri;
-(void)setITunesUri:(NSURL *)arg1 ;
-(SAMovieV2TheaterShowtimeListSnippet *)theaterShowtimeListSnippet;
-(NSArray *)actors;
-(void)setActors:(NSArray *)arg1 ;
-(NSArray *)directors;
-(void)setDirectors:(NSArray *)arg1 ;
-(NSArray *)genres;
-(void)setGenres:(NSArray *)arg1 ;
-(BOOL)is3d;
-(void)setIs3d:(BOOL)arg1 ;
-(long long)runtimeInMinutes;
-(void)setRuntimeInMinutes:(long long)arg1 ;
-(NSArray *)studios;
-(void)setStudios:(NSArray *)arg1 ;
-(NSString *)theaterShowtimeSearchRegionDescription;
-(void)setTheaterShowtimeSearchRegionDescription:(NSString *)arg1 ;
-(NSNumber *)playTrailer;
-(void)setPlayTrailer:(NSNumber *)arg1 ;
-(SAMovieV2ShowtimeSnippet *)showtimeSnippet;
-(void)setShowtimeSnippet:(SAMovieV2ShowtimeSnippet *)arg1 ;
-(void)setTheaterShowtimeListSnippet:(SAMovieV2TheaterShowtimeListSnippet *)arg1 ;
-(NSArray *)alternateProviderPunchouts;
-(void)setAlternateProviderPunchouts:(NSArray *)arg1 ;
-(NSNumber *)availableOnItunesForPurchase;
-(void)setAvailableOnItunesForPurchase:(NSNumber *)arg1 ;
-(NSNumber *)availableOnItunesForRent;
-(void)setAvailableOnItunesForRent:(NSNumber *)arg1 ;
-(NSURL *)hiresTrailerUri;
-(void)setHiresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)lowresTrailerUri;
-(void)setLowresTrailerUri:(NSURL *)arg1 ;
-(NSURL *)movieIdentifier;
-(void)setMovieIdentifier:(NSURL *)arg1 ;
-(SAMovieV2ReviewListSnippet *)movieReviewListSnippet;
-(void)setMovieReviewListSnippet:(SAMovieV2ReviewListSnippet *)arg1 ;
-(SAUIAppPunchOut *)playOnItunesPunchout;
-(void)setPlayOnItunesPunchout:(SAUIAppPunchOut *)arg1 ;
-(void)setSynopsis:(NSString *)arg1 ;
-(NSString *)synopsis;
-(id)encodedClassName;
@end

