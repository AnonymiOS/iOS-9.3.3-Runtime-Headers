/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol PRSActionButton <NSObject>
@property (nonatomic,retain) NSString * provider; 
@property (assign,nonatomic) BOOL is_overlay; 
@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSString * label; 
@property (nonatomic,retain) NSString * label_itunes; 
@property (nonatomic,retain) NSArray * adam_ids; 
@property (assign,nonatomic) BOOL streaming; 
@property (nonatomic,retain) id<PRSApp> punchout; 
@optional
-(void)setType:(id)arg1;
-(NSString *)type;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(NSString *)provider;
-(void)setProvider:(id)arg1;
-(id<PRSApp>)punchout;
-(void)setPunchout:(id)arg1;
-(BOOL)streaming;
-(void)setIs_overlay:(BOOL)arg1;
-(void)setLabel_itunes:(id)arg1;
-(void)setAdam_ids:(id)arg1;
-(void)setStreaming:(BOOL)arg1;
-(NSArray *)adam_ids;
-(BOOL)is_overlay;
-(NSString *)label_itunes;

@end

