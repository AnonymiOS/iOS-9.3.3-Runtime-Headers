/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/MPUExtrasMainMenuSectionMetricsDataSource.h>

@protocol UICollectionViewDelegate;
@class MPUExtrasMainMenuSectionMetrics, UICollectionViewFlowLayout, NSLayoutConstraint, UICollectionView, UIView, NSIndexPath, NSString;

@interface MPUExtrasMainTemplateViewController : MPUExtrasTemplateViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, MPUExtrasMainMenuSectionMetricsDataSource> {

	MPUExtrasMainMenuSectionMetrics* _mainMenuMetrics;
	UICollectionViewFlowLayout* _collectionViewLayout;
	NSLayoutConstraint* _collectionViewHeightConstraint;
	UICollectionView* _menuBarCollectionView;
	BOOL _hasHadMenuSelection;
	UIView* _menuBarView;
	id<UICollectionViewDelegate> _didSelectDelegate;

}

@property (nonatomic,readonly) double collectionViewHeight; 
@property (nonatomic,readonly) NSIndexPath * indexPathOfFeaturedItem; 
@property (nonatomic,readonly) UIView * menuBarView;                                             //@synthesize menuBarView=_menuBarView - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> didSelectDelegate;              //@synthesize didSelectDelegate=_didSelectDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)showsPlaceholder;
-(id)templateElement;
-(void)_startBackgroundAudio;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)_prepareLayout;
-(UIView *)menuBarView;
-(void)setDidSelectDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(NSIndexPath *)indexPathOfFeaturedItem;
-(double)collectionViewHeight;
-(void)_dynamicTypeChanged;
-(void)_prepareCollectionView;
-(void)_recalculateSizes;
-(long long)numberOfItemsForSectionMetrics:(id)arg1 ;
-(id)_textElementAtIndex:(long long)arg1 ;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)_isFeatureItemAtIndexPath:(id)arg1 ;
-(BOOL)_collectionView:(id)arg1 indexPathShouldDisplayAsSelected:(id)arg2 ;
-(id<UICollectionViewDelegate>)didSelectDelegate;
-(void)setCollectionViewHeight:(double)arg1 ;
-(CGSize)sectionMetrics:(id)arg1 sizeForItemAtIndex:(long long)arg2 withFontDescriptor:(id)arg3 ;
-(id)_menuItems;
@end

