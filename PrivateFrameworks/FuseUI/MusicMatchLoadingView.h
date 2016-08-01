/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIProgressView, NSString;

@interface MusicMatchLoadingView : UIView {

	UILabel* _titleLabel;
	UIProgressView* _progressView;

}

@property (nonatomic,readonly) UIProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIProgressView *)progressView;
@end

