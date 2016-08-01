/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableView.h>

@protocol SKUITrendingSearchPageViewDelegate;
@class SKUIClientContext, SKUILoadTrendingSearchPageOperation, NSOperationQueue, SKUITrendingSearchPage, SKUITrendingSearchPageView;

@interface SKUISearchFieldTableView : UITableView {

	SKUIClientContext* _clientContext;
	SKUILoadTrendingSearchPageOperation* _loadOperation;
	NSOperationQueue* _operationQueue;
	SKUITrendingSearchPage* _page;
	SKUITrendingSearchPageView* _pageView;
	id<SKUITrendingSearchPageViewDelegate> _trendingSearchDelegate;
	BOOL _trendingSearchesVisible;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUITrendingSearchPageViewDelegate> trendingSearchDelegate;              //@synthesize trendingSearchDelegate=_trendingSearchDelegate - In the implementation block
@property (assign,nonatomic) BOOL trendingSearchesVisible;                                                      //@synthesize trendingSearchesVisible=_trendingSearchesVisible - In the implementation block
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_reloadData;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_reloadView;
-(void)_setTrendingResponse:(id)arg1 error:(id)arg2 ;
-(void)setTrendingSearchDelegate:(id<SKUITrendingSearchPageViewDelegate>)arg1 ;
-(void)setTrendingSearchesVisible:(BOOL)arg1 ;
-(id<SKUITrendingSearchPageViewDelegate>)trendingSearchDelegate;
-(BOOL)trendingSearchesVisible;
@end

