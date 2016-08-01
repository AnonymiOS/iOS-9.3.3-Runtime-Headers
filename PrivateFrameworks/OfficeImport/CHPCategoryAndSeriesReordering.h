/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDProcessor.h>

@interface CHPCategoryAndSeriesReordering : EDProcessor
-(void)applyCategoryReorderingPreprocessor:(id)arg1 ;
-(BOOL)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg1 isCategoryOrderReversed:(BOOL)arg2 ;
-(void)applySeriesReorderingPreprocessor:(id)arg1 ;
-(void)reorderSeriesCategory:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(BOOL)arg3 ;
-(void)reorderData:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(BOOL)arg3 ;
-(void)reorderValueProperties:(id)arg1 dataPointCount:(unsigned long long)arg2 ;
-(void)reorderDataValues:(id)arg1 dataPointCount:(unsigned long long)arg2 ;
-(void)reorderDataFormula:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(BOOL)arg3 ;
-(BOOL)isObjectSupported:(id)arg1 ;
-(void)applyProcessorToObject:(id)arg1 sheet:(id)arg2 ;
-(void)reorderCategoryAndSeries:(id)arg1 sheet:(id)arg2 clearAxisReversedFlag:(BOOL)arg3 ;
@end

