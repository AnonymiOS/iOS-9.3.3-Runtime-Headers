/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentDataItem.h>

@class NSString, NSArray;

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) NSArray * paymentSummaryItems; 
+(long long)dataType;
-(NSString *)currencyCode;
-(BOOL)isValidWithError:(id*)arg1 ;
-(NSArray *)paymentSummaryItems;
@end

