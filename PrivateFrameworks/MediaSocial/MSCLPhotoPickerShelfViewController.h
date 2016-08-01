/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol MSCLPhotoPickerDelegate;
@class PHFetchResult, UICollectionView, PHCachingImageManager, NSMutableDictionary, NSArray, NSString;

@interface MSCLPhotoPickerShelfViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	PHFetchResult* _assets;
	UICollectionView* _collectionView;
	id<MSCLPhotoPickerDelegate> _delegate;
	PHCachingImageManager* _imageManager;
	NSMutableDictionary* _imageRequestsByAssetIDs;
	BOOL _isZoomed;
	NSMutableDictionary* _selectedAttachmentsByAssetID;

}

@property (assign,nonatomic,__weak) id<MSCLPhotoPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectedAttachments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MSCLPhotoPickerDelegate>)arg1 ;
-(void)dealloc;
-(id<MSCLPhotoPickerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSArray *)selectedAttachments;
-(void)_reloadPreferredContentSize;
-(CGSize)_desiredPixelSizeForAsset:(id)arg1 ;
-(id)_thumbnailImageRequestOptions;
-(void)_sendDelegateSelectedAttachmentsDidChange;
-(void)_loadFullImageForAsset:(id)arg1 ;
-(void)_finishImageRequestForAssetIdentifier:(id)arg1 withImageData:(id)arg2 typeIdentifier:(id)arg3 ;
@end

