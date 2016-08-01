/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol PRSSportsSummaryScoreSection <PRSSection>
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * sub_title; 
@property (nonatomic,retain) NSArray * images; 
@optional
-(NSArray *)images;
-(void)setImages:(id)arg1;
-(void)setSub_title:(id)arg1;
-(NSString *)sub_title;

@required
-(void)setTitle:(id)arg1;
-(NSString *)title;

@end

