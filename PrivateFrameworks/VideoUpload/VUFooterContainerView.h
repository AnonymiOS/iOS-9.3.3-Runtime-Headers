/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoUpload/VideoUpload-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface VUFooterContainerView : UIView {

	id _delegate;
	UIButton* _termsButton;

}

@property (assign,nonatomic,__weak) id delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * termsButton;              //@synthesize termsButton=_termsButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(UIButton *)termsButton;
-(void)setFrame:(CGRect)arg1 bypassDelegate:(BOOL)arg2 ;
-(void)setTermsButton:(UIButton *)arg1 ;
@end

