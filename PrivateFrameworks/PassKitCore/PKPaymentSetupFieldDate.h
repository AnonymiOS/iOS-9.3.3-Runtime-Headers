/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupFieldText.h>

@class NSString, NSDate;

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText {

	BOOL _showsDay;
	BOOL _showsMonth;
	BOOL _showsYear;
	NSString* _submissionFormat;

}

@property (assign,nonatomic) BOOL showsDay;                          //@synthesize showsDay=_showsDay - In the implementation block
@property (assign,nonatomic) BOOL showsMonth;                        //@synthesize showsMonth=_showsMonth - In the implementation block
@property (assign,nonatomic) BOOL showsYear;                         //@synthesize showsYear=_showsYear - In the implementation block
@property (nonatomic,copy) NSString * submissionFormat;              //@synthesize submissionFormat=_submissionFormat - In the implementation block
@property (nonatomic,readonly) NSDate * defaultDate; 
-(NSDate *)defaultDate;
-(void)dealloc;
-(id)displayString;
-(void)setCurrentValue:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setSubmissionFormat:(NSString *)arg1 ;
-(id)_defaultValueAsDateForCurrentLocale;
-(NSString *)submissionFormat;
-(void)setShowsDay:(BOOL)arg1 ;
-(void)setShowsMonth:(BOOL)arg1 ;
-(void)setShowsYear:(BOOL)arg1 ;
-(BOOL)showsDay;
-(BOOL)showsMonth;
-(BOOL)showsYear;
-(void)updateWithConfiguration:(id)arg1 ;
-(BOOL)submissionStringMeetsAllRequirements;
-(id)submissionString;
-(unsigned long long)fieldType;
@end

