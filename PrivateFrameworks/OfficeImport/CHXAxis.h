/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXAxis : NSObject
+(Class)chxAxisClassWithXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readScalingFromXmlScalingElement:(xmlNode*)arg1 axis:(id)arg2 state:(id)arg3 ;
+(int)chdAxisPositionFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)chdTickMarkFromXmlTickMarkElement:(xmlNode*)arg1 ;
+(int)chdTickLabelPositionFromXmlTickLabelPositionElement:(xmlNode*)arg1 ;
+(int)chdCrossesFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(Class)chxAxisClassWithChdAxis:(id)arg1 ;
+(id)stringWithAxisPosition:(int)arg1 ;
+(id)stringWithTickMarkType:(int)arg1 ;
+(id)stringWithTickLabelPosition:(int)arg1 ;
+(id)stringWithCrosses:(int)arg1 ;
+(id)chdAxisFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
@end

