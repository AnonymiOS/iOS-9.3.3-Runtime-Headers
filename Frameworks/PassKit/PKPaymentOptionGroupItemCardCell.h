/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKPaymentOptionGroupItemCell.h>

@class UILabel, UIImageView, PKPassSnapshotter, UIColor;

@interface PKPaymentOptionGroupItemCardCell : PKPaymentOptionGroupItemCell {

	BOOL _isRightToLeft;
	UILabel* _displayLabel;
	UILabel* _censoredPANLabel;
	UIImageView* _cardArtView;
	BOOL _showBillingAddress;
	BOOL _dimCardArt;
	PKPassSnapshotter* _passSnapshotter;
	UIColor* _mainLabelColor;
	UIColor* _subTextLabelColor;
	UIColor* _disabledMainLabelColor;
	UIColor* _disabledSubTextLabelColor;

}

@property (nonatomic,retain) PKPassSnapshotter * passSnapshotter;              //@synthesize passSnapshotter=_passSnapshotter - In the implementation block
@property (nonatomic,retain) UIColor * mainLabelColor;                         //@synthesize mainLabelColor=_mainLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * subTextLabelColor;                      //@synthesize subTextLabelColor=_subTextLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledMainLabelColor;                 //@synthesize disabledMainLabelColor=_disabledMainLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledSubTextLabelColor;              //@synthesize disabledSubTextLabelColor=_disabledSubTextLabelColor - In the implementation block
@property (assign,nonatomic) BOOL showBillingAddress;                          //@synthesize showBillingAddress=_showBillingAddress - In the implementation block
@property (assign,nonatomic) BOOL dimCardArt;                                  //@synthesize dimCardArt=_dimCardArt - In the implementation block
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_updateCellContent;
-(void)setShowBillingAddress:(BOOL)arg1 ;
-(void)setPassSnapshotter:(PKPassSnapshotter *)arg1 ;
-(UIColor *)subTextLabelColor;
-(UIColor *)mainLabelColor;
-(void)setMainLabelColor:(UIColor *)arg1 ;
-(void)setSubTextLabelColor:(UIColor *)arg1 ;
-(void)setDisabledMainLabelColor:(UIColor *)arg1 ;
-(void)setDisabledSubTextLabelColor:(UIColor *)arg1 ;
-(CGRect)_cardArtFrame;
-(CGRect)_displayLabelFrame;
-(CGRect)_censoredPANLabelFrame;
-(void)setDimCardArt:(BOOL)arg1 ;
-(PKPassSnapshotter *)passSnapshotter;
-(UIColor *)disabledMainLabelColor;
-(UIColor *)disabledSubTextLabelColor;
-(BOOL)showBillingAddress;
-(BOOL)dimCardArt;
@end

