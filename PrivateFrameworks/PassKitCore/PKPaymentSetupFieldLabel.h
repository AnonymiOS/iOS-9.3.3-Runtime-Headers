/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField

@property (nonatomic,copy,readonly) NSString * title; 
-(id)displayString;
-(NSString *)title;
-(void)setCurrentValue:(id)arg1 ;
-(void)updateWithConfiguration:(id)arg1 ;
-(BOOL)submissionStringMeetsAllRequirements;
-(id)submissionString;
-(unsigned long long)fieldType;
@end

