/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, WBSHistoryItem, WBSHistoryVisit;

@interface WBSCloudHistoryVisitIdentifier : NSObject <NSCopying> {

	unsigned long long _hash;
	NSString* _urlString;
	double _visitTime;
	WBSHistoryItem* _associatedHistoryItem;
	WBSHistoryVisit* _associatedHistoryVisit;

}

@property (nonatomic,copy,readonly) NSString * urlString;                           //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) double visitTime;                                    //@synthesize visitTime=_visitTime - In the implementation block
@property (nonatomic,retain) WBSHistoryItem * associatedHistoryItem;                //@synthesize associatedHistoryItem=_associatedHistoryItem - In the implementation block
@property (nonatomic,retain) WBSHistoryVisit * associatedHistoryVisit;              //@synthesize associatedHistoryVisit=_associatedHistoryVisit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)urlString;
-(double)visitTime;
-(WBSHistoryVisit *)associatedHistoryVisit;
-(id)initWithURLString:(id)arg1 visitTime:(double)arg2 ;
-(WBSHistoryItem *)associatedHistoryItem;
-(void)setAssociatedHistoryItem:(WBSHistoryItem *)arg1 ;
-(void)setAssociatedHistoryVisit:(WBSHistoryVisit *)arg1 ;
@end

