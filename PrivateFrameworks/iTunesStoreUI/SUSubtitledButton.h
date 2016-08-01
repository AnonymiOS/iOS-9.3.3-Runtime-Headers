/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, NSString, UIColor;

@interface SUSubtitledButton : UIButton {

	CFDictionaryRef _subtitleContentLookup;
	UILabel* _subtitleView;

}

@property (nonatomic,retain,readonly) NSString * currentSubtitle; 
@property (nonatomic,retain,readonly) UIColor * currentSubtitleColor; 
@property (nonatomic,retain,readonly) UIColor * currentSubtitleShadowColor; 
@property (nonatomic,retain,readonly) UILabel * subtitleLabel; 
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)subtitleLabel;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setSubtitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setSubtitleShadowColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setSubtitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSString *)currentSubtitle;
-(void)_setupSubtitleView;
-(UIColor *)currentSubtitleShadowColor;
-(UIColor *)currentSubtitleColor;
-(CGRect)subtitleRectForContentRect:(CGRect)arg1 ;
-(id)_subtitleFont;
-(long long)_subtitleLineBreakMode;
-(void)configureFromScriptButton:(id)arg1 ;
-(id)subtitleForState:(unsigned long long)arg1 ;
-(id)subtitleColorForState:(unsigned long long)arg1 ;
-(id)subtitleShadowColorForState:(unsigned long long)arg1 ;
-(id)_subtitledContentForState:(unsigned long long)arg1 ;
@end

