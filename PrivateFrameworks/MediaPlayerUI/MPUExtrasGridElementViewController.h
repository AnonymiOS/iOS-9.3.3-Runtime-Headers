/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayerUI/MPUExtrasViewElementViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UIView, NSArray, UICollectionView, _MPUExtrasShelfCollectionViewLayout, _MPUExtrasGridHeaderView, MPUExtrasGridViewControllerStyle, IKGridElement, NSString;

@interface MPUExtrasGridElementViewController : MPUExtrasViewElementViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	UIView* _titleRule;
	NSArray* _titleRuleConstraints;
	NSArray* _headerViewConstraints;
	UICollectionView* _collectionView;
	_MPUExtrasShelfCollectionViewLayout* _flowLayout;
	_MPUExtrasGridHeaderView* _headerView;
	BOOL _shelfStyle;
	MPUExtrasGridViewControllerStyle* _smallStyle;
	MPUExtrasGridViewControllerStyle* _mediumStyle;
	MPUExtrasGridViewControllerStyle* _largeStyle;
	MPUExtrasGridViewControllerStyle* _extraLargeStyle;
	MPUExtrasGridViewControllerStyle* _wideStyle;

}

@property (nonatomic,readonly) UICollectionView * collectionView; 
@property (nonatomic,retain) MPUExtrasGridViewControllerStyle * smallStyle;                   //@synthesize smallStyle=_smallStyle - In the implementation block
@property (nonatomic,retain) MPUExtrasGridViewControllerStyle * mediumStyle;                  //@synthesize mediumStyle=_mediumStyle - In the implementation block
@property (nonatomic,retain) MPUExtrasGridViewControllerStyle * largeStyle;                   //@synthesize largeStyle=_largeStyle - In the implementation block
@property (nonatomic,retain) MPUExtrasGridViewControllerStyle * extraLargeStyle;              //@synthesize extraLargeStyle=_extraLargeStyle - In the implementation block
@property (nonatomic,retain) MPUExtrasGridViewControllerStyle * wideStyle;                    //@synthesize wideStyle=_wideStyle - In the implementation block
@property (assign,getter=isShelfStyle,nonatomic) BOOL shelfStyle;                             //@synthesize shelfStyle=_shelfStyle - In the implementation block
@property (readonly) IKGridElement * viewElement; 
@property (nonatomic,readonly) MPUExtrasGridViewControllerStyle * currentStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wideDetailStyle;
+(id)smallDetailStyle;
+(id)mediumDetailStyle;
+(id)largeDetailStyle;
+(id)extraLargeDetailStyle;
+(id)wideStackGridStyle;
+(id)extraLargeStackGridStyle;
+(id)largeStackGridStyle;
+(id)mediumStackGridStyle;
+(id)smallStackGridStyle;
+(id)_fontAttributesForTextStyle:(id)arg1 ;
+(id)_defaultCellStyle;
+(id)smallGalleryStyle;
+(id)keyPathsForValuesAffectingContentScrollView;
+(id)wideGalleryStyle;
+(id)mediumGalleryStyle;
+(id)largeGalleryStyle;
+(id)extraLargeGalleryStyle;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(MPUExtrasGridViewControllerStyle *)currentStyle;
-(void)loadView;
-(CGSize)preferredContentSize;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(id)initWithViewElement:(id)arg1 ;
-(void)setViewElement:(IKGridElement *)arg1 ;
-(id)preferredLayoutGuide;
-(long long)preferredLayoutAttribute;
-(void)_prepareLayout;
-(void)_dynamicTypeDidChange;
-(void)setWideStyle:(MPUExtrasGridViewControllerStyle *)arg1 ;
-(void)setSmallStyle:(MPUExtrasGridViewControllerStyle *)arg1 ;
-(void)setMediumStyle:(MPUExtrasGridViewControllerStyle *)arg1 ;
-(void)setLargeStyle:(MPUExtrasGridViewControllerStyle *)arg1 ;
-(void)setExtraLargeStyle:(MPUExtrasGridViewControllerStyle *)arg1 ;
-(void)setShelfStyle:(BOOL)arg1 ;
-(BOOL)isShelfStyle;
-(BOOL)_hasDescriptionText;
-(BOOL)_sectionIndexIsDescriptionSection:(long long)arg1 ;
-(id)_sectionElementForIndex:(unsigned long long)arg1 ;
-(id)_cellStyleForSection:(id)arg1 ;
-(id)_lockupForIndexPath:(id)arg1 ;
-(UIEdgeInsets)_sectionInsetsForSection:(id)arg1 ;
-(double)_cellSpacingForSection:(id)arg1 ;
-(id)_narrowStyle;
-(MPUExtrasGridViewControllerStyle *)smallStyle;
-(MPUExtrasGridViewControllerStyle *)mediumStyle;
-(MPUExtrasGridViewControllerStyle *)largeStyle;
-(MPUExtrasGridViewControllerStyle *)extraLargeStyle;
-(MPUExtrasGridViewControllerStyle *)wideStyle;
@end

