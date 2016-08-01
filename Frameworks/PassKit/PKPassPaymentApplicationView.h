/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@protocol PKPassPaymentApplicationViewDelegate;
@class NSArray, PKPassPaymentSummaryHeaderView, UIView, PKPaymentService, PKPaymentPass, PKPaymentApplication;

@interface PKPassPaymentApplicationView : UIView {

	NSArray* _paymentButtons;
	PKPassPaymentSummaryHeaderView* _headerView;
	UIView* _horizontalSeparator;
	PKPaymentService* _paymentService;
	BOOL _showHeader;
	PKPaymentPass* _pass;
	PKPaymentApplication* _selectedApplication;
	id<PKPassPaymentApplicationViewDelegate> _delegate;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                           //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * selectedApplication;                     //@synthesize selectedApplication=_selectedApplication - In the implementation block
@property (assign,nonatomic) id<PKPassPaymentApplicationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showHeader;                                                //@synthesize showHeader=_showHeader - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PKPassPaymentApplicationViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<PKPassPaymentApplicationViewDelegate>)delegate;
-(void)buttonPressed:(id)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)enableBlendedColors:(BOOL)arg1 ;
-(void)setSelectedApplication:(PKPaymentApplication *)arg1 ;
-(PKPaymentApplication *)selectedApplication;
-(void)setShowHeader:(BOOL)arg1 ;
-(BOOL)showHeader;
@end

