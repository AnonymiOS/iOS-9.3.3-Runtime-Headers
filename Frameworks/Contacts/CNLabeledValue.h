/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNSuggested.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, NSString, CNLabelValuePair, NSDictionary, NSSet;

@interface CNLabeledValue : NSObject <CNSuggested, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	int _iOSLegacyIdentifier;
	CNLabelValuePair* _labelValuePair;
	NSString* _storeIdentifier;
	NSDictionary* _storeInfo;
	NSSet* _linkedIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (nonatomic,readonly) SGRecordId * suggestionRecordId; 
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,copy,readonly) id<NSCopying><NSSecureCoding> value; 
@property (assign,nonatomic) int iOSLegacyIdentifier;                                 //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (readonly) CNLabelValuePair * labelValuePair;                               //@synthesize labelValuePair=_labelValuePair - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                                //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * storeInfo;                                  //@synthesize storeInfo=_storeInfo - In the implementation block
@property (nonatomic,copy) NSSet * linkedIdentifiers;                                 //@synthesize linkedIdentifiers=_linkedIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identifierProvider;
+(id)makeIdentifier;
+(/*^block*/id)testMatchingIdentifier:(id)arg1 ;
+(id)entryForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)labelForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)valueForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(BOOL)isArrayOfEntries:(id)arg1 equalToArrayOfEntriesIgnoringIdentifiers:(id)arg2 ;
+(id)entriesByUnifyingEntryArrays:(id)arg1 forProperty:(id)arg2 ;
+(id)emptyEntries;
+(id)allValuesInArray:(id)arg1 ;
+(id)firstLabeledValueWithValue:(id)arg1 inArray:(id)arg2 ;
+(id)entryWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
+(id)labeledValueWithIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(id)localizedStringForLabel:(id)arg1 ;
-(SGRecordId *)suggestionRecordId;
-(BOOL)isSuggested;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(id<NSCopying><NSSecureCoding>)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(NSDictionary *)storeInfo;
-(id)initWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(NSSet *)linkedIdentifiers;
-(void)setLinkedIdentifiers:(NSSet *)arg1 ;
-(id)labeledValueBySettingLabel:(id)arg1 ;
-(id)labeledValueBySettingValue:(id)arg1 ;
-(BOOL)isEqualToLabeledValue:(id)arg1 includeIdentifiers:(BOOL)arg2 ;
-(CNLabelValuePair *)labelValuePair;
-(void)setStoreInfo:(NSDictionary *)arg1 ;
-(id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2 ;
-(int)iOSLegacyIdentifier;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(BOOL)isEqualIgnoringIdentifiers:(id)arg1 ;
-(BOOL)isEqualToLabeledValue:(id)arg1 ;
@end

