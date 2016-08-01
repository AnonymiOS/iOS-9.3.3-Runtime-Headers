/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSString;

@interface CNSuggestedContactIdentifierPredicate : CNPredicate <CNSuggestedContactPredicate> {

	unsigned long long _suggestionIdentifier;

}

@property (readonly) unsigned long long suggestionIdentifier;              //@synthesize suggestionIdentifier=_suggestionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(BOOL)cn_supportsNativeSorting;
-(unsigned long long)suggestionIdentifier;
-(id)initWithSuggestionIdentifier:(unsigned long long)arg1 ;
@end

