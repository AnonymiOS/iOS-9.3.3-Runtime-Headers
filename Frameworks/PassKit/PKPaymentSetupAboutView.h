/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIButton, UIScrollView;

@interface PKPaymentSetupAboutView : UIView {

	UILabel* _aboutTextLabel;
	UIButton* _actionButton;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(UIScrollView *)scrollView;
-(void)setButtonAction:(SEL)arg1 ;
-(id)initWithBodyText:(id)arg1 detailButtonText:(id)arg2 ;
-(id)initWithBodyText:(id)arg1 ;
@end

