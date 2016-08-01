/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, UIGestureRecognizer, UIView, NSArray, NSMutableArray;

@interface MKPlaceSectionHeaderView : UIView {

	BOOL _showSeeMoreButton;
	BOOL _showSeparator;
	NSString* _providerName;
	UILabel* _sectionHeaderLabel;
	UILabel* _seeMoreButton;
	UIGestureRecognizer* _seeMoreGestureRecognizer;
	UIView* _separator;
	NSArray* _seeMoreButtonConstraints;
	NSArray* _marginConstraints;
	NSMutableArray* _scaledConstraints;
	SEL _action;
	id _target;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * providerName;                                     //@synthesize providerName=_providerName - In the implementation block
@property (assign,nonatomic) BOOL showSeeMoreButton;                                      //@synthesize showSeeMoreButton=_showSeeMoreButton - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;                                          //@synthesize showSeparator=_showSeparator - In the implementation block
@property (nonatomic,retain) UILabel * sectionHeaderLabel;                                //@synthesize sectionHeaderLabel=_sectionHeaderLabel - In the implementation block
@property (nonatomic,retain) UILabel * seeMoreButton;                                     //@synthesize seeMoreButton=_seeMoreButton - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * seeMoreGestureRecognizer;              //@synthesize seeMoreGestureRecognizer=_seeMoreGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * separator;                                          //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) NSArray * seeMoreButtonConstraints;                          //@synthesize seeMoreButtonConstraints=_seeMoreButtonConstraints - In the implementation block
@property (nonatomic,retain) NSArray * marginConstraints;                                 //@synthesize marginConstraints=_marginConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * scaledConstraints;                          //@synthesize scaledConstraints=_scaledConstraints - In the implementation block
@property (assign,nonatomic) SEL action;                                                  //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id target;                                            //@synthesize target=_target - In the implementation block
+(double)intrinsicContentHeightForFont:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(NSString *)title;
-(id)target;
-(void)layoutMarginsDidChange;
-(void)setAction:(SEL)arg1 ;
-(void)updateConstraints;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(NSString *)providerName;
-(NSArray *)marginConstraints;
-(NSMutableArray *)scaledConstraints;
-(void)contentSizeDidChange;
-(void)setScaledConstraints:(NSMutableArray *)arg1 ;
-(void)refreshMarginConstraints;
-(void)setMarginConstraints:(NSArray *)arg1 ;
-(UILabel *)seeMoreButton;
-(void)setShowSeparator:(BOOL)arg1 ;
-(void)setShowSeeMoreButton:(BOOL)arg1 ;
-(void)setSectionHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)sectionHeaderLabel;
-(void)setSeeMoreGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)setSeeMoreButton:(UILabel *)arg1 ;
-(BOOL)showSeparator;
-(void)setProviderName:(NSString *)arg1 ;
-(NSArray *)seeMoreButtonConstraints;
-(void)setSeeMoreButtonConstraints:(NSArray *)arg1 ;
-(BOOL)showSeeMoreButton;
-(void)setSeparator:(UIView *)arg1 ;
-(UIGestureRecognizer *)seeMoreGestureRecognizer;
-(UIView *)separator;
@end

