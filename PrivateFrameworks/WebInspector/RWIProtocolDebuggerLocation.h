/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerLocation : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * scriptId; 
@property (assign,nonatomic) int lineNumber; 
@property (assign,nonatomic) int columnNumber; 
-(int)lineNumber;
-(void)setLineNumber:(int)arg1 ;
-(void)setColumnNumber:(int)arg1 ;
-(void)setScriptId:(NSString *)arg1 ;
-(id)initWithScriptId:(id)arg1 lineNumber:(int)arg2 ;
-(NSString *)scriptId;
-(int)columnNumber;
@end

