/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIItemCollectionDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol SKUIItemGridDelegate;
@class SKUIClientContext, UICollectionView, NSMutableIndexSet, SKUIItemCollectionController, NSMutableArray, NSOperationQueue, UIImage, SKUIUber, SKUIItemArtworkContext, SKUIStyledImageDataConsumer, NSArray, NSString;

@interface SKUIItemGridViewController : UIViewController <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	SKUIClientContext* _clientContext;
	UICollectionView* _collectionView;
	id<SKUIItemGridDelegate> _delegate;
	NSMutableIndexSet* _hiddenIconIndexSet;
	SKUIItemCollectionController* _itemCollectionController;
	NSMutableArray* _items;
	CGSize _imageBoundingSize;
	NSOperationQueue* _operationQueue;
	UIImage* _placeholderImage;
	double _rowHeight;
	NSMutableIndexSet* _selectedItemIndexSet;
	SKUIUber* _uber;
	SKUIItemArtworkContext* _artworkContext;

}

@property (nonatomic,readonly) double rowHeight;                                          //@synthesize rowHeight=_rowHeight - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                           //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic,__weak) id<SKUIItemGridDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIStyledImageDataConsumer * iconDataConsumer; 
@property (nonatomic,retain) SKUIItemArtworkContext * artworkContext;                     //@synthesize artworkContext=_artworkContext - In the implementation block
@property (assign,nonatomic) CGSize imageBoundingSize;                                    //@synthesize imageBoundingSize=_imageBoundingSize - In the implementation block
@property (nonatomic,copy) NSArray * items;                                               //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) SKUIUber * uber;                                             //@synthesize uber=_uber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIItemGridDelegate>)arg1 ;
-(void)dealloc;
-(double)rowHeight;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<SKUIItemGridDelegate>)delegate;
-(CGPoint)contentOffset;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)_collectionView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(SKUIItemArtworkContext *)artworkContext;
-(void)setUber:(SKUIUber *)arg1 ;
-(SKUIUber *)uber;
-(void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2 ;
-(void)setImageBoundingSize:(CGSize)arg1 ;
-(CGSize)imageBoundingSize;
-(void)_reloadLayout;
-(void)removeItemsAtIndexes:(id)arg1 ;
-(SKUIStyledImageDataConsumer *)iconDataConsumer;
-(id)_itemCollectionController;
-(void)loadNextPageOfArtworkWithReason:(long long)arg1 ;
-(void)setArtworkContext:(SKUIItemArtworkContext *)arg1 ;
-(void)setIconDataConsumer:(SKUIStyledImageDataConsumer *)arg1 ;
-(id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2 ;
-(NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(CGPoint)arg2 ;
-(NSRange)visibleItemRangeForItemCollectionController:(id)arg1 ;
-(BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1 ;
-(id)initWithRowHeight:(double)arg1 ;
-(id)popIconImageViewForItemAtIndex:(long long)arg1 ;
-(void)setItemCellClass:(Class)arg1 ;
-(void)unhideIcons;
-(void)itemCollectionView:(id)arg1 didPerformEditActionForCell:(id)arg2 ;
-(long long)_numberOfColumnsForOrientation:(long long)arg1 ;
@end

