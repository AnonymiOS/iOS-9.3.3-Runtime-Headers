/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSStyleSheetBody : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * styleSheetId; 
@property (nonatomic,copy) NSArray * rules; 
@property (nonatomic,copy) NSString * text; 
-(void)setRules:(NSArray *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setStyleSheetId:(NSString *)arg1 ;
-(NSString *)styleSheetId;
-(id)initWithStyleSheetId:(id)arg1 rules:(id)arg2 ;
-(NSArray *)rules;
@end

