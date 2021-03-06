/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class HLPURLSession, NSLayoutConstraint, HLPHelpItem, UILabel, UIImageView;

@interface HLPHelpTableOfContentCell : UITableViewCell {

	HLPURLSession* _sectionImageURLSession;
	NSLayoutConstraint* _arrowImageViewLeadingConstraint;
	NSLayoutConstraint* _arrowImageViewWidthConstraint;
	NSLayoutConstraint* _sectionImageWidthConstraint;
	NSLayoutConstraint* _sectionImageLeadingConstraint;
	NSLayoutConstraint* _nameLabelMinHeightConstraint;
	BOOL _showFirstLevelIcon;
	BOOL _closed;
	BOOL _RTL;
	double _minNameLabelHeight;
	HLPHelpItem* _helpItem;
	UILabel* _nameLabel;
	UIImageView* _arrowImageView;
	UIImageView* _sectionImageView;

}

@property (assign,nonatomic) BOOL showFirstLevelIcon;                     //@synthesize showFirstLevelIcon=_showFirstLevelIcon - In the implementation block
@property (assign,nonatomic) BOOL closed;                                 //@synthesize closed=_closed - In the implementation block
@property (assign,nonatomic) double minNameLabelHeight;                   //@synthesize minNameLabelHeight=_minNameLabelHeight - In the implementation block
@property (nonatomic,retain) HLPHelpItem * helpItem;                      //@synthesize helpItem=_helpItem - In the implementation block
@property (assign,nonatomic) BOOL RTL;                                    //@synthesize RTL=_RTL - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * arrowImageView;                //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (nonatomic,retain) UIImageView * sectionImageView;              //@synthesize sectionImageView=_sectionImageView - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)accessibilityLabel;
-(void)prepareForReuse;
-(void)updateConstraints;
-(BOOL)closed;
-(void)setClosed:(BOOL)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)toggle;
-(void)setShowFirstLevelIcon:(BOOL)arg1 ;
-(void)setHelpItem:(HLPHelpItem *)arg1 ;
-(void)setMinNameLabelHeight:(double)arg1 ;
-(void)updateToggleImageAnimated:(BOOL)arg1 ;
-(UIImageView *)arrowImageView;
-(BOOL)showFirstLevelIcon;
-(double)minNameLabelHeight;
-(HLPHelpItem *)helpItem;
-(BOOL)RTL;
-(void)setRTL:(BOOL)arg1 ;
-(void)setArrowImageView:(UIImageView *)arg1 ;
-(UIImageView *)sectionImageView;
-(void)setSectionImageView:(UIImageView *)arg1 ;
-(void)updateFonts;
@end

