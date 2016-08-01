/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:28 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIMissingItemDelegate.h>

@class NSMapTable, SKUIProductPageTableSeparatorView, SKUIProductPageTableHeaderView, NSArray, SKUIMissingItemLoader, UIImage, SKUIStyledImageDataConsumer, SKUIResourceLoader, NSString;

@interface SKUIProductPageTableLockupsSection : SKUIProductPageTableSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate> {

	NSMapTable* _artworkRequests;
	SKUIProductPageTableSeparatorView* _footerView;
	SKUIProductPageTableHeaderView* _headerView;
	NSArray* _lockups;
	SKUIMissingItemLoader* _missingItemLoader;
	UIImage* _placeholderImage;
	SKUIStyledImageDataConsumer* _productImageDataConsumer;
	SKUIResourceLoader* _resourceLoader;

}

@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;              //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(SKUIResourceLoader *)resourceLoader;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(id)headerViewForTableView:(id)arg1 ;
-(id)footerViewForTableView:(id)arg1 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(id)initWithLockups:(id)arg1 title:(id)arg2 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_productImageForItem:(id)arg1 ;
@end

