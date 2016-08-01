/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _PLImageLoadingAsset <NSObject>
@required
-(double)duration;
-(int)orientation;
-(CGSize*)imageSize;
-(short)kind;
-(id)uuid;
-(BOOL)isVideo;
-(BOOL)complete;
-(BOOL)hasLegacyAdjustments;
-(id)pathForFullsizeRenderImageFile;
-(id)pathForOriginalFile;
-(short)savedAssetType;
-(id)pathForVideoPreviewFile;
-(id)pathForLargeThumbnailFile;
-(unsigned long long)effectiveThumbnailIndex;
-(void)generateLargeThumbnailFileIfNecessary;
-(BOOL)isInFlight;
-(id)thumbnailIdentifier;
-(id)pl_photoLibrary;
-(BOOL)isOriginalSRGB;
-(id)pathForAdjustmentFile;
-(id)pathForSubstandardFullsizeRenderImageFile;
-(id)pathForSRGBLargeThumbnailFile;
-(id)pathForMediumThumbnailFile;
-(id)pathForPenultimateFullsizeRenderImageFile;
-(id)fileURLForFullsizeRenderVideo;
-(id)pathForNonAdjustedFullsizeImageFile;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(id)debugFilename;
-(BOOL)isPartOfBurst;
-(id)pathForAdjustmentDataFile;
-(id)fileURLForFullsizeRenderImage;
-(long long)cloudSharedAssetPlaceholderKind;
-(BOOL)isCloudPhotoLibraryAsset;
-(id)managedAssetForPhotoLibrary:(id)arg1;
-(BOOL)isStreamedVideo;
-(BOOL)isCloudSharedAsset;
-(long long)cloudPlaceholderKind;
-(BOOL)isRAW;
-(BOOL)isCloudPlaceholder;
-(BOOL)hasAdjustments;
-(double)aspectRatio;
-(id)objectID;
-(short)kindSubtype;
-(BOOL)isTimelapsePlaceholder;
-(BOOL)isJPEG;
-(id)uniformTypeIdentifier;

@end

