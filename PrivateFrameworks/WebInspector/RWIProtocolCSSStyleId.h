/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSStyleId : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * styleSheetId; 
@property (assign,nonatomic) int ordinal; 
-(void)setStyleSheetId:(NSString *)arg1 ;
-(void)setOrdinal:(int)arg1 ;
-(NSString *)styleSheetId;
-(int)ordinal;
-(id)initWithStyleSheetId:(id)arg1 ordinal:(int)arg2 ;
@end

