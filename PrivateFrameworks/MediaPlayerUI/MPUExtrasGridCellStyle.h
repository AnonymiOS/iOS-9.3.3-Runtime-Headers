/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, UIColor;

@interface MPUExtrasGridCellStyle : NSObject <NSCopying> {

	double _titleFirstBaselineHeight;
	double _subtitleFirstBaselineHeight;
	NSString* _titleTextStyle;
	NSString* _subtitleTextStyle;
	NSDictionary* _titleDefaultFontAttributes;
	NSDictionary* _subtitleDefaultFontAttributes;
	UIColor* _titleTextColor;
	UIColor* _subtitleTextColor;
	double _textFirstBaselineToBottom;
	double _textLastBaselineToBottom;
	long long _defaultTextAlignment;
	CGSize _imageSize;

}

@property (assign,nonatomic) CGSize imageSize;                                        //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) double titleFirstBaselineHeight;                         //@synthesize titleFirstBaselineHeight=_titleFirstBaselineHeight - In the implementation block
@property (assign,nonatomic) double subtitleFirstBaselineHeight;                      //@synthesize subtitleFirstBaselineHeight=_subtitleFirstBaselineHeight - In the implementation block
@property (nonatomic,copy) NSString * titleTextStyle;                                 //@synthesize titleTextStyle=_titleTextStyle - In the implementation block
@property (nonatomic,copy) NSString * subtitleTextStyle;                              //@synthesize subtitleTextStyle=_subtitleTextStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * titleDefaultFontAttributes;                 //@synthesize titleDefaultFontAttributes=_titleDefaultFontAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * subtitleDefaultFontAttributes;              //@synthesize subtitleDefaultFontAttributes=_subtitleDefaultFontAttributes - In the implementation block
@property (nonatomic,copy) UIColor * titleTextColor;                                  //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,copy) UIColor * subtitleTextColor;                               //@synthesize subtitleTextColor=_subtitleTextColor - In the implementation block
@property (assign,nonatomic) double textFirstBaselineToBottom;                        //@synthesize textFirstBaselineToBottom=_textFirstBaselineToBottom - In the implementation block
@property (assign,nonatomic) double textLastBaselineToBottom;                         //@synthesize textLastBaselineToBottom=_textLastBaselineToBottom - In the implementation block
@property (assign,nonatomic) long long defaultTextAlignment;                          //@synthesize defaultTextAlignment=_defaultTextAlignment - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)imageSize;
-(void)setImageSize:(CGSize)arg1 ;
-(NSString *)subtitleTextStyle;
-(NSDictionary *)titleDefaultFontAttributes;
-(long long)defaultTextAlignment;
-(UIColor *)subtitleTextColor;
-(NSDictionary *)subtitleDefaultFontAttributes;
-(double)titleFirstBaselineHeight;
-(double)subtitleFirstBaselineHeight;
-(double)textFirstBaselineToBottom;
-(void)setTitleFirstBaselineHeight:(double)arg1 ;
-(void)setTitleDefaultFontAttributes:(NSDictionary *)arg1 ;
-(void)setTextFirstBaselineToBottom:(double)arg1 ;
-(void)setTextLastBaselineToBottom:(double)arg1 ;
-(void)setSubtitleDefaultFontAttributes:(NSDictionary *)arg1 ;
-(void)setSubtitleTextColor:(UIColor *)arg1 ;
-(void)setSubtitleTextStyle:(NSString *)arg1 ;
-(void)setSubtitleFirstBaselineHeight:(double)arg1 ;
-(void)setDefaultTextAlignment:(long long)arg1 ;
-(double)textLastBaselineToBottom;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(UIColor *)titleTextColor;
-(void)setTitleTextStyle:(NSString *)arg1 ;
-(NSString *)titleTextStyle;
@end

