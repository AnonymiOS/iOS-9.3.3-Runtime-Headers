/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKCameraRollSpec.h>

@class CMKCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredCMKCameraRollSpec : CMKCameraRollSpec {

	BOOL _isPad;
	CMKCameraRollSpec* _spec;
	DeferredFrameworkLoader* _loader;

}

@property (nonatomic,retain) CMKCameraRollSpec * spec;                      //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) DeferredFrameworkLoader * loader;              //@synthesize loader=_loader - In the implementation block
@property (assign,nonatomic) BOOL isPad;                                    //@synthesize isPad=_isPad - In the implementation block
-(void)dealloc;
-(id)initWithDeferredLoader:(id)arg1 isPad:(BOOL)arg2 ;
-(void)setLoader:(DeferredFrameworkLoader *)arg1 ;
-(void)ensureCMKCameraRollSpec;
-(void)setIsPad:(BOOL)arg1 ;
-(BOOL)isPad;
-(id)newAlbumNavigationControllerForAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 inApplicationViewController:(id)arg3 ;
-(void)prepareAlbumViewControllerForReuse:(id)arg1 withAssetCollection:(id)arg2 inApplicationViewController:(id)arg3 ;
-(void)reloadAlbumViewController:(id)arg1 withAssetCollection:(id)arg2 fetchResultContainingAssetCollection:(id)arg3 ;
-(CMKCameraRollSpec *)spec;
-(void)setSpec:(CMKCameraRollSpec *)arg1 ;
-(DeferredFrameworkLoader *)loader;
@end

