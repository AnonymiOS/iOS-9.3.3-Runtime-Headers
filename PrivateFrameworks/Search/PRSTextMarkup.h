/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, PRSImage;


@protocol PRSTextMarkup
@property (nonatomic,retain) NSString * text; 
@property (assign) BOOL emphasized; 
@property (assign) BOOL bold; 
@property (nonatomic,retain) PRSImage * inlineGlyph; 
@required
-(NSString *)text;
-(void)setText:(id)arg1;
-(BOOL)emphasized;
-(void)setEmphasized:(BOOL)arg1;
-(void)setInlineGlyph:(id)arg1;
-(BOOL)bold;
-(void)setBold:(BOOL)arg1;
-(PRSImage *)inlineGlyph;

@end

