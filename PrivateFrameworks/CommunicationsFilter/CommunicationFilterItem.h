/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommunicationsFilter/CommunicationsFilter-Structs.h>
@class NSString;

@interface CommunicationFilterItem : NSObject {

	CFPhoneNumberRef _phoneNumber;
	NSString* _emailAddress;

}

@property (nonatomic,readonly) CFPhoneNumberRef phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * unformattedID; 
-(void)dealloc;
-(id)description;
-(CFPhoneNumberRef)phoneNumber;
-(id)dictionaryRepresentation;
-(NSString *)unformattedID;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)matchesFilterItem:(id)arg1 ;
-(id)_dictionaryRepresentationWithRedaction;
-(BOOL)_acceptItemType:(id)arg1 ;
-(BOOL)_acceptVersion:(id)arg1 ;
-(id)initWithPhoneNumber:(CFPhoneNumberRef)arg1 ;
-(BOOL)isPhoneNumber;
-(NSString *)emailAddress;
-(id)initWithEmailAddress:(id)arg1 ;
@end

