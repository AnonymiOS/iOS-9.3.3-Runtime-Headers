/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class CHDChart, CHDChartType, CHDFormula, CHDDataValue, CHDData, EDKeyedCollection, EDCollection, CHDErrorBar, CHDDataLabel, OADGraphicProperties, NSString;

@interface CHDSeries : NSObject <EDKeyedObject> {

	CHDChart* mChart;
	CHDChartType* mChartType;
	unsigned long long mOrder;
	unsigned long long mStyleIndex;
	CHDFormula* mName;
	CHDDataValue* mLastCachedName;
	CHDData* mValueData;
	CHDData* mCategoryData;
	EDKeyedCollection* mDataValuePropertiesCollection;
	EDCollection* mTrendlinesCollection;
	CHDErrorBar* mErrorBarX;
	CHDErrorBar* mErrorBarY;
	CHDDataLabel* mDefaultDataLabel;
	OADGraphicProperties* mGraphicProperties;
	BOOL mDateTimeFormattingFlag;
	BOOL mHiddenFlag;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)seriesWithChart:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(NSString *)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(long long)key;
-(BOOL)isEmpty;
-(void)setOrder:(unsigned long long)arg1 ;
-(unsigned long long)order;
-(id)graphicProperties;
-(id)lastCachedName;
-(id)categoryData;
-(BOOL)isDateTimeFormattingFlag;
-(id)chartType;
-(id)dataValuePropertiesCollection;
-(id)valueData;
-(id)defaultDataLabel;
-(id)errorBarYAxis;
-(id)shallowCopy;
-(id)chart;
-(id)initWithChart:(id)arg1 ;
-(void)setChartType:(id)arg1 ;
-(void)setDefaultDataLabel:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setLastCachedName:(id)arg1 ;
-(void)setDateTimeFormattingFlag:(BOOL)arg1 ;
-(void)setStyleIndex:(unsigned long long)arg1 ;
-(void)setErrorBarYAxis:(id)arg1 ;
-(void)setErrorBarXAxis:(id)arg1 ;
-(void)clearBackPointers;
-(unsigned long long)styleIndex;
-(void)setValueData:(id)arg1 ;
-(void)setCategoryData:(id)arg1 ;
-(unsigned long long)categoryCount;
-(void)setDataValuePropertiesCollection:(id)arg1 ;
-(id)trendlineCollection;
-(void)setTrendlineCollection:(id)arg1 ;
-(BOOL)hasTrendlines;
-(void)setErrorBar:(id)arg1 ;
-(BOOL)hasErrorBars;
-(id)errorBarXAxis;
-(void)setHiddenFlag:(BOOL)arg1 ;
-(id)defaultSeriesNameForIndex:(unsigned long long)arg1 ;
@end

