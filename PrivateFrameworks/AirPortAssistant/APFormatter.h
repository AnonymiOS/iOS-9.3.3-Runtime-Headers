/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSCharacterSet;

@interface APFormatter : NSFormatter {

	NSCharacterSet* _characterSet;
	NSCharacterSet* _invertedCharacterSet;
	unsigned long long _maxLength;

}

@property (assign,nonatomic) unsigned long long maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
+(id)romanSet;
+(id)multipleIpAddressesSet;
+(id)portRangeSet;
+(id)phoneNumberSet;
+(id)asciiSet;
+(id)hexSet;
+(id)pogoPasswordSet;
+(id)formatterForBSFormatter:(int)arg1 withMaxLen:(long long)arg2 ;
+(id)hexFormatter:(unsigned long long)arg1 ;
+(id)numberOnlyFormatter:(unsigned long long)arg1 ;
+(id)sharedIPFormatter;
+(id)sharedIPv6Formatter;
+(id)ipOctetFormatter:(unsigned long long)arg1 ;
+(id)sharedIPv4PrefixFormatter;
+(id)sharedPhoneNumberFormatter;
+(id)portRangeFormatter:(unsigned long long)arg1 ;
+(id)ipv4AddressSet;
+(id)ipv6AddressSet;
+(id)ipv4AddressWithPrefixSet;
+(id)romanFormatter:(unsigned long long)arg1 ;
+(id)ipFormatter:(unsigned long long)arg1 ;
+(id)sharedMultipleIPFormatter;
+(id)multipleIPFormatter:(unsigned long long)arg1 ;
+(id)maxLengthFormatter:(unsigned long long)arg1 ;
+(id)nonZeroNumberOnly:(unsigned long long)arg1 ;
+(id)phoneNumberFormatter:(unsigned long long)arg1 ;
+(id)asciiFormatter:(unsigned long long)arg1 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(void)dealloc;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(unsigned long long)maxLength;
-(id)initWithCharacterSet:(id)arg1 withMaxLength:(unsigned long long)arg2 ;
-(void)setInvertedCharacterSet:(id)arg1 ;
-(id)invertedCharacterSet;
-(id)initWithMaxLength:(unsigned long long)arg1 ;
-(id)initWithStringOfValidCharacters:(id)arg1 withMaxLength:(unsigned long long)arg2 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(void)setCharacterSet:(id)arg1 ;
-(id)characterSet;
@end

