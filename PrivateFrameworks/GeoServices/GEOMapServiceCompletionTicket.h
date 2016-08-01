/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOMapServiceTraits, NSDictionary;


@protocol GEOMapServiceCompletionTicket <NSObject>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@required
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultMuid:(unsigned long long)arg2;
-(BOOL)isRapEnabled;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(BOOL)matchesFragment:(id)arg1;
-(void)applyToSuggestionList:(id)arg1;
-(NSDictionary *)responseUserInfo;

@end

