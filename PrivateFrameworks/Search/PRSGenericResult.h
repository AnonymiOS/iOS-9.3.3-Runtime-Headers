/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, PRSImage, NSString, NSURL;


@protocol PRSGenericResult <PRSBaseResult>
@property (nonatomic,retain) NSArray * descriptions; 
@property (nonatomic,retain) PRSImage * thumbnail; 
@property (assign,nonatomic) BOOL thumbnail_crop_circle; 
@property (assign,nonatomic) long long title_maxlines; 
@property (nonatomic,retain) NSString * secondary_title; 
@property (assign,nonatomic) BOOL secondary_title_detached; 
@property (assign,nonatomic) BOOL thumbnail_align_right; 
@property (nonatomic,retain) PRSImage * secondary_image; 
@property (nonatomic,retain) NSString * footnote; 
@property (nonatomic,retain) id<PRSAuxiliaryInfo> auxiliary_info; 
@property (nonatomic,retain) id<PRSActionButton> action_button; 
@property (nonatomic,retain) NSString * card_title; 
@property (nonatomic,retain) NSURL * card_url; 
@property (nonatomic,retain) NSArray * card_sections; 
@property (nonatomic,retain) NSArray * row_sections; 
@optional
-(PRSImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(void)setFootnote:(id)arg1;
-(NSArray *)descriptions;
-(void)setDescriptions:(id)arg1;
-(NSString *)footnote;
-(void)setThumbnail_crop_circle:(BOOL)arg1;
-(void)setTitle_maxlines:(long long)arg1;
-(void)setSecondary_title:(id)arg1;
-(void)setSecondary_title_detached:(BOOL)arg1;
-(void)setThumbnail_align_right:(BOOL)arg1;
-(void)setSecondary_image:(id)arg1;
-(void)setAuxiliary_info:(id)arg1;
-(void)setAction_button:(id)arg1;
-(void)setCard_title:(id)arg1;
-(void)setCard_url:(id)arg1;
-(void)setCard_sections:(id)arg1;
-(void)setRow_sections:(id)arg1;
-(NSString *)card_title;
-(NSArray *)card_sections;
-(id<PRSActionButton>)action_button;
-(NSURL *)card_url;
-(NSArray *)row_sections;
-(NSString *)secondary_title;
-(BOOL)secondary_title_detached;
-(PRSImage *)secondary_image;
-(long long)title_maxlines;
-(BOOL)thumbnail_crop_circle;
-(BOOL)thumbnail_align_right;
-(id<PRSAuxiliaryInfo>)auxiliary_info;

@end

