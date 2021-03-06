/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, SKUIClientContext, SKUIColorScheme, UILabel, NSMutableDictionary, UISegmentedControl, SKUIStarRatingControl, UIImageView, NSString, UIView, NSArray, UIControl;

@interface SKUIReviewsHistogramView : UIView {

	UIButton* _appSupportButton;
	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	UILabel* _countLabel;
	long long _numberOfUserRatings;
	NSMutableDictionary* _ratings;
	UISegmentedControl* _segmentedControl;
	SKUIStarRatingControl* _starRatingControl;
	UILabel* _starRatingControlLabel;
	UILabel* _titleLabel;
	double _userRating;
	UIImageView* _userRatingStarsView;
	NSString* _versionString;
	UIButton* _writeAReviewButton;
	UIView* _bottomSeparatorView;
	UIImageView* _histogramImageView;
	NSArray* _histogramValues;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;                 //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) long long numberOfUserRatings;                 //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) double userRating; 
@property (nonatomic,copy) NSString * versionString;                        //@synthesize versionString=_versionString - In the implementation block
@property (nonatomic,retain) NSArray * histogramValues;                     //@synthesize histogramValues=_histogramValues - In the implementation block
@property (nonatomic,readonly) UIControl * segmentedControl; 
@property (nonatomic,copy) NSArray * segmentedControlTitles; 
@property (assign,nonatomic) long long selectedSegmentIndex; 
@property (nonatomic,readonly) UIControl * starRatingControl;               //@synthesize starRatingControl=_starRatingControl - In the implementation block
@property (assign,nonatomic) long long personalStarRating; 
@property (nonatomic,readonly) UIControl * appSupportButton;                //@synthesize appSupportButton=_appSupportButton - In the implementation block
@property (nonatomic,readonly) UIControl * writeAReviewButton;              //@synthesize writeAReviewButton=_writeAReviewButton - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(long long)selectedSegmentIndex;
-(UIControl *)segmentedControl;
-(id)initWithClientContext:(id)arg1 ;
-(NSString *)versionString;
-(long long)numberOfUserRatings;
-(double)userRating;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(void)setUserRating:(double)arg1 ;
-(UIControl *)appSupportButton;
-(UIControl *)starRatingControl;
-(UIControl *)writeAReviewButton;
-(long long)personalStarRating;
-(void)setSegmentedControlTitles:(NSArray *)arg1 ;
-(void)setVersionString:(NSString *)arg1 ;
-(void)setPersonalStarRating:(long long)arg1 ;
-(id)_histogramImageForValues:(id)arg1 ;
-(id)_countLabelString;
-(NSArray *)segmentedControlTitles;
-(void)setHistogramValues:(NSArray *)arg1 ;
-(NSArray *)histogramValues;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
@end

