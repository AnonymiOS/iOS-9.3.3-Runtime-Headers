/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class PKPaymentSummaryItem, NSString;

@interface PKPaymentSummaryItemValidator : NSObject <PKPaymentValidating> {

	PKPaymentSummaryItem* _item;

}

@property (nonatomic,readonly) PKPaymentSummaryItem * item;              //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validatorWithObject:(id)arg1 ;
+(Class)validatedClass;
-(void)dealloc;
-(PKPaymentSummaryItem *)item;
-(id)initWithPaymentSummaryItem:(id)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

