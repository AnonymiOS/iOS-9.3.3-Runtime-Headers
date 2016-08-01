/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompletePerformanceProbe.h>

@class CNAutocompleteAggdProbe, NSMutableDictionary, NSString;

@interface CNAutocompleteAggdPerformanceProbe : NSObject <CNAutocompletePerformanceProbe> {

	CNAutocompleteAggdProbe* _aggdProbe;
	NSMutableDictionary* _pendingAddData;

}

@property (nonatomic,retain) CNAutocompleteAggdProbe * aggdProbe;                 //@synthesize aggdProbe=_aggdProbe - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingAddData;              //@synthesize pendingAddData=_pendingAddData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)recordNumberOfResultsReturned:(unsigned long long)arg1 inTimeInterval:(double)arg2 forBatch:(unsigned long long)arg3 includesServers:(BOOL)arg4 ;
-(void)recordNumberOfContactResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfRecentResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfSuggestionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfPredictionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfSupplementalResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfDirectoryServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)recordNumberOfCalendarServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(id)initWithAggdProbe:(id)arg1 ;
-(NSMutableDictionary *)pendingAddData;
-(void)recordLatency:(double)arg1 forResultCount:(unsigned long long)arg2 forSource:(id)arg3 ;
-(CNAutocompleteAggdProbe *)aggdProbe;
-(void)setAggdProbe:(CNAutocompleteAggdProbe *)arg1 ;
-(void)sendData;
@end

