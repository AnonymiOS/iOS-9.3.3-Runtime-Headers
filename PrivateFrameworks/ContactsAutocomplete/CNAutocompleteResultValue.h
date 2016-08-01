/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNAutocompleteResultValue : NSObject {

	NSString* _address;
	long long _addressType;
	NSString* _instantMessageAddressService;
	NSString* _identifier;
	NSString* _label;
	NSString* _stringForHashingMemo;

}

@property (copy) NSString * address;                                     //@synthesize address=_address - In the implementation block
@property (assign) long long addressType;                                //@synthesize addressType=_addressType - In the implementation block
@property (copy) NSString * instantMessageAddressService;                //@synthesize instantMessageAddressService=_instantMessageAddressService - In the implementation block
@property (copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * label;                                       //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * stringForHashingMemo;              //@synthesize stringForHashingMemo=_stringForHashingMemo - In the implementation block
+(id)stringForHashingValue:(id)arg1 ;
+(id)normalizedAddressForValue:(id)arg1 ;
+(id)resultValueWithAddress:(id)arg1 addressType:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setAddressType:(long long)arg1 ;
-(long long)addressType;
-(void)setInstantMessageAddressService:(NSString *)arg1 ;
-(NSString *)instantMessageAddressService;
-(NSString *)stringForHashingMemo;
-(void)setStringForHashingMemo:(NSString *)arg1 ;
-(id)addressTypeDescription;
-(id)stringForHashing;
-(id)stringForSorting;
-(BOOL)addressExactlyMatchesSearchTerm:(id)arg1 ;
-(NSString *)address;
@end

