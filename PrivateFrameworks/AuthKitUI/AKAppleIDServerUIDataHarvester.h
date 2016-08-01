/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface AKAppleIDServerUIDataHarvester : NSObject {

	NSMutableDictionary* _harvestedData;

}

@property (nonatomic,copy) NSDictionary * harvestedData;              //@synthesize harvestedData=_harvestedData - In the implementation block
-(id)init;
-(id)_valueForTextFieldWithID:(id)arg1 inObjectModel:(id)arg2 ;
-(void)harvestDataFromServerUIObjectModel:(id)arg1 ;
-(void)harvestDataFromServerHTTPResponse:(id)arg1 ;
-(NSDictionary *)harvestedData;
-(void)setHarvestedData:(NSDictionary *)arg1 ;
@end

