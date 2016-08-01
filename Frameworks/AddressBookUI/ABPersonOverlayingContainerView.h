/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIScrollView.h>
#import <libobjc.A.dylib/ABPersonTabsScrollView.h>

@protocol ABPersonTabsLayoutManager;
@class UIView, NSString;

@interface ABPersonOverlayingContainerView : UIScrollView <ABPersonTabsScrollView> {

	double _minimumBottomInset;
	UIEdgeInsets _savedContentInset;
	UIView* _backgroundView;
	UIView* _abContentView;
	id<ABPersonTabsLayoutManager> _tabsLayoutManager;

}

@property (nonatomic,retain) UIView * contentView;                                         //@synthesize abContentView=_abContentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double minimumBottomInset; 
@property (nonatomic,retain) UIView * backgroundView;                                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) id<ABPersonTabsLayoutManager> tabsLayoutManager;              //@synthesize tabsLayoutManager=_tabsLayoutManager - In the implementation block
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(double)minimumBottomInset;
-(void)setMinimumBottomInset:(double)arg1 ;
-(id<ABPersonTabsLayoutManager>)tabsLayoutManager;
-(void)setTabsLayoutManager:(id<ABPersonTabsLayoutManager>)arg1 ;
-(void)_updateContentFrameAndSize;
@end

