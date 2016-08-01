/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SUClientInterface, UIImage, NSMutableDictionary, NSNumber, NSArray, SSItemImageCollection, NSString, NSDictionary;

@interface SUSectionsResponse : NSObject {

	BOOL _cacheable;
	SUClientInterface* _clientInterface;
	UIImage* _moreListImage;
	UIImage* _moreListSelectedImage;
	NSMutableDictionary* _rawResponseDictionary;
	long long _responseType;
	NSMutableDictionary* _sectionsCache;
	NSNumber* _shouldResetUserOrdering;

}

@property (nonatomic,readonly) NSArray * allSections; 
@property (assign,getter=isCacheable,nonatomic) BOOL cacheable;                              //@synthesize cacheable=_cacheable - In the implementation block
@property (assign,nonatomic) BOOL shouldResetUserOrdering; 
@property (nonatomic,retain) UIImage * moreListImage;                                        //@synthesize moreListImage=_moreListImage - In the implementation block
@property (nonatomic,readonly) SSItemImageCollection * moreListImageCollection; 
@property (nonatomic,retain) UIImage * moreListSelectedImage;                                //@synthesize moreListSelectedImage=_moreListSelectedImage - In the implementation block
@property (nonatomic,readonly) NSString * moreListTitle; 
@property (nonatomic,copy,readonly) NSDictionary * rawResponseDictionary;                    //@synthesize rawResponseDictionary=_rawResponseDictionary - In the implementation block
@property (nonatomic,readonly) long long responseType;                                       //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSDictionary * sectionsDictionary; 
@property (nonatomic,copy) NSString * storeFrontIdentifier; 
@property (nonatomic,readonly) NSString * versionString; 
+(id)sectionsCacheDirectory;
+(void)setLastCachedVersionIdentifier:(id)arg1 ;
+(id)lastCachedVersionIdentifier;
-(void)dealloc;
-(id)init;
-(UIImage *)moreListImage;
-(UIImage *)moreListSelectedImage;
-(NSArray *)sections;
-(BOOL)isCacheable;
-(void)setMoreListImage:(UIImage *)arg1 ;
-(id)initWithClientInterface:(id)arg1 cacheDirectory:(id)arg2 ;
-(void)setShouldResetUserOrdering:(BOOL)arg1 ;
-(BOOL)shouldResetUserOrdering;
-(NSArray *)allSections;
-(BOOL)writeToCacheDirectory:(id)arg1 error:(id*)arg2 ;
-(id)initWithClientInterface:(id)arg1 sectionsDictionary:(id)arg2 responseType:(long long)arg3 ;
-(void)dropEmbeddedImages;
-(void)setCacheable:(BOOL)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(SSItemImageCollection *)moreListImageCollection;
-(void)setMoreListSelectedImage:(UIImage *)arg1 ;
-(BOOL)_loadArtworkFromCacheDirectory:(id)arg1 ;
-(id)_newSectionsFromDictionary:(id)arg1 ;
-(void)_dropImageKeysFromDictionary:(id)arg1 ;
-(NSDictionary *)sectionsDictionary;
-(void)_writeImage:(id)arg1 toCachePath:(id)arg2 forIdentifier:(id)arg3 variant:(id)arg4 ;
-(void)_writeButtonImagesForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3 ;
-(void)_dropImageKeysFromArray:(id)arg1 ;
-(id)_newImageForIdentifier:(id)arg1 variant:(id)arg2 cacheDirectory:(id)arg3 ;
-(void)_loadButtonArtworkForSection:(id)arg1 buttons:(id)arg2 cachePath:(id)arg3 ;
-(id)_newVariantStringForButton:(id)arg1 ;
-(void)_applyDefaultSearchFieldConfigurationsToSections:(id)arg1 ;
-(NSDictionary *)rawResponseDictionary;
-(NSString *)versionString;
-(NSString *)storeFrontIdentifier;
-(NSString *)moreListTitle;
-(long long)responseType;
@end

