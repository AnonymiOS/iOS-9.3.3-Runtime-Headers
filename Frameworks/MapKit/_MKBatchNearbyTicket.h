/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapServiceBatchNearbyTicket.h>

@protocol GEOMapServiceBatchNearbyTicket;
@class GEOMapServiceTraits, NSString;

@interface _MKBatchNearbyTicket : NSObject <MKMapServiceBatchNearbyTicket> {

	id<GEOMapServiceBatchNearbyTicket> _ticket;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(id)resultSectionHeaderForCategory:(id)arg1 ;
-(id)initWithTicket:(id)arg1 ;
@end

