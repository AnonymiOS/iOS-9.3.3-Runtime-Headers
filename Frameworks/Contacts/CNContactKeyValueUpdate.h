/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactUpdate.h>

@class CNPropertyDescription;

@interface CNContactKeyValueUpdate : CNContactUpdate {

	CNPropertyDescription* _property;
	id _value;

}

@property (readonly) CNPropertyDescription * property;              //@synthesize property=_property - In the implementation block
@property (readonly) id value;                                      //@synthesize value=_value - In the implementation block
-(BOOL)applyToABPerson:(void*)arg1 withSaveContext:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)value;
-(id)initWithProperty:(id)arg1 value:(id)arg2 ;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(CNPropertyDescription *)property;
@end

