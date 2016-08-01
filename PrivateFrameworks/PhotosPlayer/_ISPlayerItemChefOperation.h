/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <Foundation/NSOperation.h>

@class AVAsset;

@interface _ISPlayerItemChefOperation : NSOperation {

	BOOL _includeVideo;
	BOOL _includeAudio;
	AVAsset* _asset;
	/*^block*/id _resultHandler;
	SCD_Struct_IS5 _trimmedTimeRange;

}

@property (nonatomic,readonly) AVAsset * asset;                              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS5 trimmedTimeRange;              //@synthesize trimmedTimeRange=_trimmedTimeRange - In the implementation block
@property (nonatomic,readonly) BOOL includeVideo;                            //@synthesize includeVideo=_includeVideo - In the implementation block
@property (nonatomic,readonly) BOOL includeAudio;                            //@synthesize includeAudio=_includeAudio - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                        //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)main;
-(AVAsset *)asset;
-(id)resultHandler;
-(id)initWithAsset:(id)arg1 trimmedTimeRange:(SCD_Struct_IS5)arg2 includeAudio:(BOOL)arg3 includeVideo:(BOOL)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)_handleValuesDidLoad;
-(BOOL)includeAudio;
-(BOOL)includeVideo;
-(SCD_Struct_IS5)trimmedTimeRange;
@end

