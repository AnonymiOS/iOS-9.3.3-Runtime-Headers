/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, PHAssetCreationRequest, PHExternalAssetResource;

@interface PHAssetResourceBag : NSObject {

	NSArray* _assetResourceContexts;
	BOOL _didValidateForInsertion;
	BOOL _valid;
	BOOL _hasAdjustments;
	PHAssetCreationRequest* _assetCreationRequest;
	NSArray* _assetResources;
	long long _mediaType;
	unsigned long long _mediaSubtype;
	PHExternalAssetResource* _primaryResource;

}

@property (nonatomic,__weak,readonly) PHAssetCreationRequest * assetCreationRequest;              //@synthesize assetCreationRequest=_assetCreationRequest - In the implementation block
@property (nonatomic,readonly) NSArray * assetResources;                                          //@synthesize assetResources=_assetResources - In the implementation block
@property (nonatomic,readonly) BOOL didValidateForInsertion;                                      //@synthesize didValidateForInsertion=_didValidateForInsertion - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                         //@synthesize valid=_valid - In the implementation block
@property (nonatomic,readonly) BOOL hasAdjustments;                                               //@synthesize hasAdjustments=_hasAdjustments - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                               //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaSubtype;                                   //@synthesize mediaSubtype=_mediaSubtype - In the implementation block
@property (nonatomic,readonly) PHExternalAssetResource * primaryResource;                         //@synthesize primaryResource=_primaryResource - In the implementation block
+(BOOL)supportsAssetResourceTypes:(id)arg1 mediaType:(long long*)arg2 ;
+(BOOL)_supportsAssetResourceTypes:(id)arg1 mediaType:(long long*)arg2 mediaSubtype:(unsigned long long*)arg3 ;
+(id)_primaryAssetResource:(id)arg1 ;
-(BOOL)isValid;
-(id)assetResourceWithType:(long long)arg1 ;
-(id)validatedURLForAssetResource:(id)arg1 ;
-(id)validatedDataForAssetResource:(id)arg1 ;
-(unsigned long long)mediaSubtype;
-(PHExternalAssetResource *)primaryResource;
-(id)initWithAssetResources:(id)arg1 assetCreationRequest:(id)arg2 ;
-(BOOL)validateForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)didValidateForInsertion;
-(PHAssetCreationRequest *)assetCreationRequest;
-(BOOL)_extractValidatedImageURL:(id*)arg1 imageData:(id*)arg2 fromResource:(id)arg3 photoLibrary:(id)arg4 error:(id*)arg5 ;
-(BOOL)_extractValidatedVideoURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(BOOL)_extractValidatedAudioURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(BOOL)_extractValidatedAdjustmentsURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4 ;
-(id)_validateAssetResourceForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(BOOL)_validateAssetResourcesForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)_validatedContextForResource:(id)arg1 ;
-(NSArray *)assetResources;
-(long long)mediaType;
-(BOOL)hasAdjustments;
@end

