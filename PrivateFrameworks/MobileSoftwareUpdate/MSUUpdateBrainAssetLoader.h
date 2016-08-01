/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/MobileSoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASAsset;

@interface MSUUpdateBrainAssetLoader : NSObject {

	ASAsset* _updateAsset;

}

@property (nonatomic,retain) ASAsset * updateAsset;              //@synthesize updateAsset=_updateAsset - In the implementation block
-(void)dealloc;
-(BOOL)cancel:(id*)arg1 ;
-(ASAsset *)updateAsset;
-(void)loadUpdateBrainWithOptions:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(void)adjustOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)purgeUpdateBrains:(id*)arg1 ;
-(long long)requiredDiskSpace:(id*)arg1 ;
-(void)setUpdateAsset:(ASAsset *)arg1 ;
-(id)initWithUpdateAsset:(id)arg1 ;
@end

