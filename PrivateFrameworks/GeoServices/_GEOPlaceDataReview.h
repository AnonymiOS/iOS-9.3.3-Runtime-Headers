/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemReview.h>

@class NSString, NSDate, GEOPDPlace, GEOPDReview;

@interface _GEOPlaceDataReview : NSObject <GEOMapItemReview> {

	GEOPDPlace* _placeData;
	GEOPDReview* _review;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_score,nonatomic,readonly) double score; 
@property (getter=_maxScore,nonatomic,readonly) double maxScore; 
@property (getter=_normalizedScore,nonatomic,readonly) double normalizedScore; 
@property (getter=_localizedSnippet,nonatomic,readonly) NSString * localizedSnippet; 
@property (getter=_date,nonatomic,readonly) NSDate * date; 
@property (getter=_reviewerName,nonatomic,readonly) NSString * reviewerName; 
@property (getter=_reviewerImageURLString,nonatomic,readonly) NSString * reviewerImageURLString; 
@property (getter=_identifier,nonatomic,readonly) NSString * identifier; 
-(void)dealloc;
-(double)_score;
-(double)_maxScore;
-(id)_date;
-(id)_reviewerImageURLString;
-(id)_reviewerName;
-(id)_localizedSnippet;
-(double)_normalizedScore;
-(id)initWithPlaceData:(id)arg1 review:(id)arg2 ;
-(id)_identifier;
@end

