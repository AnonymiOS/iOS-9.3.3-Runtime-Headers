/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@interface XMLNode : NSObject {

	xmlNode* _xmlNode;

}
+(id)stringValueForAttribute:(id)arg1 inNode:(xmlNode*)arg2 ;
+(id)getJavascriptFromNode:(xmlNode*)arg1 ;
-(void)dealloc;
-(id)initWithNode:(xmlNode*)arg1 ;
-(id)_stringValueFromAttribute:(id)arg1 ;
-(long long)_intValueFromAttribute:(id)arg1 ;
-(void)setXmlNode:(xmlNode*)arg1 ;
-(xmlNode*)xmlNode;
@end

