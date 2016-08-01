/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicLibraryBrowseHeterogenousCollectionViewController.h>

@protocol MusicLibrarySearchResultsViewControllerDelegate;
@class MusicEntityCollectionViewDescriptor, MusicEntityValueContext, MusicLibrarySearchResultsEntityProviderConfiguration, NSMutableDictionary, NSString, MusicSectionEntityValueContext;

@interface MusicLibrarySearchResultsViewController : MusicLibraryBrowseHeterogenousCollectionViewController {

	MusicEntityCollectionViewDescriptor* _collectionViewDescriptor;
	BOOL _hasPreviousReceivedSearchTerm;
	MusicEntityValueContext* _itemEntityValueContext;
	MusicLibrarySearchResultsEntityProviderConfiguration* _searchResultsEntityProviderConfiguration;
	NSMutableDictionary* _layoutMetricsForSection;
	CGSize _sizeForLayoutMetrics;
	NSString* _searchTerm;
	MusicSectionEntityValueContext* _sectionEntityValueContext;
	BOOL _showsAllSectionResults;
	id<MusicLibrarySearchResultsViewControllerDelegate> _searchResultsDelegate;

}

@property (nonatomic,readonly) MusicLibrarySearchResultsEntityProviderConfiguration * libraryViewConfiguration; 
@property (assign,nonatomic,__weak) id<MusicLibrarySearchResultsViewControllerDelegate> searchResultsDelegate;               //@synthesize searchResultsDelegate=_searchResultsDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsAllSectionResults;                                                                    //@synthesize showsAllSectionResults=_showsAllSectionResults - In the implementation block
@property (nonatomic,readonly) BOOL hasResults; 
@property (getter=isResultsViewVisible,nonatomic,readonly) BOOL resultsViewVisible; 
@property (nonatomic,copy) NSString * searchTerm;                                                                            //@synthesize searchTerm=_searchTerm - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)setSearchResultsDelegate:(id<MusicLibrarySearchResultsViewControllerDelegate>)arg1 ;
-(id<MusicLibrarySearchResultsViewControllerDelegate>)searchResultsDelegate;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(id)initWithLibraryViewConfiguration:(id)arg1 ;
-(MusicLibrarySearchResultsEntityProviderConfiguration *)libraryViewConfiguration;
-(id)loadEntityViewDescriptor;
-(id)entityViewDescriptor;
-(id)_collectionViewDescriptorForSection:(unsigned long long)arg1 traitCollection:(id)arg2 ;
-(id)_layoutMetricsForCollectionViewDescriptor:(id)arg1 ;
-(void)_updateLayoutForSize:(CGSize)arg1 ;
-(void)_updateForResultsCount;
-(BOOL)showsAllSectionResults;
-(unsigned long long)_overrideMaximumNumberOfEntitesForSection:(unsigned long long)arg1 ;
-(void)_recordRecentForIndexPath:(id)arg1 ;
-(id)layoutMetricsForSection:(unsigned long long)arg1 ;
-(void)setShowsAllSectionResults:(BOOL)arg1 ;
-(void)handleEntityProviderDidInvalidate;
-(BOOL)hasResults;
-(void)didSelectActionButtonInBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2 ;
-(BOOL)isResultsViewVisible;
@end

