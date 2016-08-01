/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPSection.h>
#import <libobjc.A.dylib/PRSTableRowSection.h>

@class NSString, NSArray, NSURL;

@interface SPTableRowSection : SPSection <PRSTableRowSection>

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * attribution_url; 
@property (assign,nonatomic) BOOL hide_divider; 
@property (assign,nonatomic) BOOL card_padding_bottom; 
@property (assign,nonatomic) BOOL card_padding_top; 
@property (nonatomic,retain) NSString * table_id; 
@property (nonatomic,retain) NSString * tab_group_id; 
@property (nonatomic,retain) id<PRSAlignmentSchema> alignment_schema; 
@property (assign,nonatomic) long long row_type; 
@property (nonatomic,retain) NSArray * value; 
@end

