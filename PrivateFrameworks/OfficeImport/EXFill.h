/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXFill : NSObject
+(id)edPatternFillFromXmlElement:(xmlNode*)arg1 differentialFill:(BOOL)arg2 state:(id)arg3 ;
+(id)edGradientFillFromXmlElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)edPatternTypeFromXmlPatternTypeString:(id)arg1 ;
+(int)edGradientTypeFromXmlGradientTypeString:(id)arg1 state:(id)arg2 ;
+(id)edStopFromXmlGradientElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)initialize;
+(id)edFillFromXmlFillElement:(xmlNode*)arg1 differentialFill:(BOOL)arg2 state:(id)arg3 ;
+(id)edFillFromXmlFillElement:(xmlNode*)arg1 state:(id)arg2 ;
@end

