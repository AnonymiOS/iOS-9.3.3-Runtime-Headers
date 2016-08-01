/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class _SKUIItemBrowseCellContentView, UIColor, NSString;

@interface SKUIItemBrowseCellLayout : SKUIItemCellLayout {

	_SKUIItemBrowseCellContentView* _cellContentView;
	CGSize _imageBoundingSize;
	BOOL _largeSpacing;
	long long _numberOfUserRatings;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;
	double _userRating;

}

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSString * indexNumberString; 
@property (assign,nonatomic) long long numberOfUserRatings;                        //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) double userRating;                                    //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isLargeSpacing,nonatomic) BOOL largeSpacing;              //@synthesize largeSpacing=_largeSpacing - In the implementation block
@property (assign,nonatomic) CGSize imageBoundingSize;                             //@synthesize imageBoundingSize=_imageBoundingSize - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(long long)numberOfUserRatings;
-(double)userRating;
-(void)_reloadUserRatingViews;
-(id)_decimalNumberFormatter;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(void)setUserRating:(double)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(void)setImageBoundingSize:(CGSize)arg1 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(void)layoutForItemOfferChange;
-(CGSize)imageBoundingSize;
-(void)_initSKUIItemBrowseCellLayout;
-(NSString *)indexNumberString;
-(void)setIndexNumberString:(NSString *)arg1 ;
-(void)setLargeSpacing:(BOOL)arg1 ;
-(BOOL)isLargeSpacing;
-(void)setIconImage:(id)arg1 ;
@end

