/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSArray, PLPhotoLibrary, PLManagedObjectContext;

@interface PLWallpaperImporter : NSObject {

	NSData* _wallpaperFileHash;
	NSArray* _allWallpaperURLs;
	PLPhotoLibrary* photoLibrary;

}

@property (nonatomic,retain,readonly) NSArray * allWallpaperURLs; 
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain,readonly) PLManagedObjectContext * managedObjectContext; 
+(id)posterImageURL;
+(void)importWallpaperAssetsIntoPhotoLibrary:(id)arg1 ;
-(void)updateAsNeeded;
-(NSArray *)allWallpaperURLs;
-(id)wallpaperFileHash;
-(void)deleteAll;
-(void)importAll;
-(id)allExistingWallpaperAssets;
-(void)addWallpaperURLsForModel:(id)arg1 toURLs:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(PLManagedObjectContext *)managedObjectContext;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
@end

