/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol PRSMovieListSection <PRSSection>
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) NSArray * movies; 
@optional
-(NSString *)subtitle;
-(void)setSubtitle:(id)arg1;

@required
-(void)setTitle:(id)arg1;
-(NSString *)title;
-(NSArray *)movies;
-(void)setMovies:(id)arg1;

@end

