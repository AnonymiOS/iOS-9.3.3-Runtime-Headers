/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OAVStroke : NSObject
+(char)readPresetDashStyle:(id)arg1 ;
+(unsigned char)readLineEndType:(id)arg1 ;
+(unsigned char)readLineEndWidth:(id)arg1 ;
+(unsigned char)readLineEndLength:(id)arg1 ;
+(unsigned char)readCapStyle:(id)arg1 ;
+(unsigned char)readCompoundType:(id)arg1 ;
+(id)targetFgColorWithManager:(id)arg1 ;
+(void)readFillStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
+(void)readDashStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
+(void)readJoinStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
+(void)readLineEnd:(id)arg1 type:(id)arg2 width:(id)arg3 length:(id)arg4 ;
+(void)initialize;
+(id)readFromManager:(id)arg1 ;
@end

