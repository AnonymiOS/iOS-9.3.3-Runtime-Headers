/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNSuggested.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDateComponents, NSDate, NSData, NSArray, CNActivityAlert, NSDictionary, NSSet, SGRecordId;

@interface CNContact : NSObject <CNSuggested, CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _internalIdentifier;
	int _iOSLegacyIdentifier;
	NSString* _namePrefix;
	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSString* _nameSuffix;
	NSString* _previousFamilyName;
	NSString* _nickname;
	NSString* _phoneticGivenName;
	NSString* _phoneticMiddleName;
	NSString* _phoneticFamilyName;
	NSString* _pronunciationGivenName;
	NSString* _pronunciationFamilyName;
	NSString* _sortingGivenName;
	NSString* _sortingFamilyName;
	NSString* _sectionForSortingByGivenName;
	NSString* _sectionForSortingByFamilyName;
	NSString* _organizationName;
	NSString* _departmentName;
	NSString* _jobTitle;
	NSDateComponents* _birthday;
	NSDateComponents* _nonGregorianBirthday;
	NSDate* _creationDate;
	NSString* _note;
	NSData* _imageData;
	CGRect _cropRect;
	NSData* _thumbnailImageData;
	NSData* _fullscreenImageData;
	BOOL _imageDataAvailable;
	NSString* _linkIdentifier;
	BOOL _preferredForName;
	BOOL _preferredForImage;
	NSString* _phonemeData;
	long long _contactType;
	long long _displayNameOrder;
	NSArray* _phoneNumbers;
	NSArray* _emailAddresses;
	NSArray* _urlAddresses;
	NSArray* _dates;
	NSArray* _instantMessageAddresses;
	NSArray* _contactRelations;
	NSArray* _socialProfiles;
	NSArray* _postalAddresses;
	NSArray* _calendarURIs;
	NSString* _cardDAVUID;
	CNActivityAlert* _callAlert;
	CNActivityAlert* _textAlert;
	NSString* _storeIdentifier;
	NSDictionary* _storeInfo;
	CNContact* _snapshot;
	NSArray* _linkedContacts;
	NSString* _accountIdentifier;
	NSSet* _availableKeys;
	NSString* _mapsData;

}

@property (nonatomic,readonly) BOOL hasSuggestedProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (nonatomic,readonly) SGRecordId * suggestionRecordId; 
@property (copy,readonly) NSString * nameTitle; 
@property (copy,readonly) NSString * firstName; 
@property (copy,readonly) NSString * lastName; 
@property (copy,readonly) NSString * maidenName; 
@property (copy,readonly) NSString * phoneticFirstName; 
@property (copy,readonly) NSString * phoneticLastName; 
@property (copy,readonly) NSString * companyName; 
@property (nonatomic,copy,readonly) NSArray * relatedNames; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long contactType; 
@property (nonatomic,copy,readonly) NSString * namePrefix; 
@property (nonatomic,copy,readonly) NSString * givenName; 
@property (nonatomic,copy,readonly) NSString * middleName; 
@property (nonatomic,copy,readonly) NSString * familyName; 
@property (nonatomic,copy,readonly) NSString * previousFamilyName; 
@property (nonatomic,copy,readonly) NSString * nameSuffix; 
@property (nonatomic,copy,readonly) NSString * nickname; 
@property (nonatomic,copy,readonly) NSString * phoneticGivenName; 
@property (nonatomic,copy,readonly) NSString * phoneticMiddleName; 
@property (nonatomic,copy,readonly) NSString * phoneticFamilyName; 
@property (nonatomic,copy,readonly) NSString * organizationName; 
@property (nonatomic,copy,readonly) NSString * departmentName; 
@property (nonatomic,copy,readonly) NSString * jobTitle; 
@property (nonatomic,copy,readonly) NSString * note; 
@property (nonatomic,copy,readonly) NSData * imageData; 
@property (nonatomic,copy,readonly) NSData * thumbnailImageData; 
@property (nonatomic,readonly) BOOL imageDataAvailable; 
@property (nonatomic,copy,readonly) NSArray * phoneNumbers; 
@property (nonatomic,copy,readonly) NSArray * emailAddresses; 
@property (nonatomic,copy,readonly) NSArray * postalAddresses; 
@property (nonatomic,copy,readonly) NSArray * urlAddresses; 
@property (nonatomic,copy,readonly) NSArray * contactRelations; 
@property (nonatomic,copy,readonly) NSArray * socialProfiles; 
@property (nonatomic,copy,readonly) NSArray * instantMessageAddresses; 
@property (nonatomic,copy,readonly) NSDateComponents * birthday; 
@property (nonatomic,copy,readonly) NSDateComponents * nonGregorianBirthday; 
@property (nonatomic,copy,readonly) NSArray * dates; 
@property (nonatomic,readonly) NSSet * availableKeys; 
@property (nonatomic,readonly) CGRect cropRect; 
@property (nonatomic,copy,readonly) CNActivityAlert * callAlert; 
@property (nonatomic,copy,readonly) CNActivityAlert * textAlert; 
@property (nonatomic,readonly) int iOSLegacyIdentifier; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * phoneticFullName; 
@property (nonatomic,copy,readonly) NSString * linkIdentifier; 
@property (nonatomic,copy,readonly) NSString * phonemeData; 
@property (nonatomic,copy,readonly) NSString * sortingGivenName; 
@property (nonatomic,copy,readonly) NSString * sortingFamilyName; 
@property (nonatomic,copy,readonly) NSString * sectionForSortingByGivenName; 
@property (nonatomic,copy,readonly) NSString * sectionForSortingByFamilyName; 
@property (nonatomic,copy,readonly) NSString * pronunciationGivenName; 
@property (nonatomic,copy,readonly) NSString * pronunciationFamilyName; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) long long displayNameOrder; 
@property (nonatomic,copy,readonly) NSString * stringForIndexing; 
@property (getter=isPreferredForName,nonatomic,readonly) BOOL preferredForName; 
@property (getter=isPreferredForImage,nonatomic,readonly) BOOL preferredForImage; 
@property (getter=isUnified,nonatomic,readonly) BOOL unified; 
@property (nonatomic,readonly) BOOL hasBeenPersisted; 
@property (nonatomic,copy,readonly) NSArray * linkedContacts; 
@property (nonatomic,copy,readonly) NSArray * mainStoreLinkedContacts; 
@property (nonatomic,copy,readonly) NSString * mapsData; 
@property (nonatomic,copy,readonly) NSData * fullscreenImageData; 
@property (nonatomic,copy,readonly) NSString * internalIdentifier;                             //@synthesize internalIdentifier=_internalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * calendarURIs; 
@property (nonatomic,copy,readonly) CNContact * snapshot; 
@property (nonatomic,copy,readonly) NSString * cardDAVUID; 
@property (nonatomic,copy,readonly) NSString * accountIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * activityAlerts; 
@property (nonatomic,copy,readonly) NSString * storeIdentifier;                                //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * storeInfo;                                  //@synthesize storeInfo=_storeInfo - In the implementation block
+(id)predicateForSuggestionIdentifier:(unsigned long long)arg1 ;
+(id)contactFromSuggestion:(id)arg1 ;
+(id)suggestionIDFromContactIdentifier:(id)arg1 ;
+(id)contactIdentifierFromSuggestionID:(id)arg1 ;
+(id)predicateForAllContacts;
+(id)predicateForContactsLinkedToContactWithIdentifier:(id)arg1 ;
+(id)predicateForContactsLinkedToContact:(id)arg1 ;
+(id)predicateForContactsMatchingEmailAddress:(id)arg1 ;
+(id)predicateForContactMatchingMapString:(id)arg1 ;
+(id)predicateForContactsMatchingPhoneNumber:(id)arg1 ;
+(id)predicateForContactsMatchingString:(id)arg1 accountIdentifier:(id)arg2 containerIdentifier:(id)arg3 groupIdentifier:(id)arg4 ;
+(id)predicateForContactMatchingURLString:(id)arg1 ;
+(id)predicateForLegacyIdentifier:(unsigned)arg1 ;
+(id)predicateForContactMatchingEKParticipantWithName:(id)arg1 emailAddress:(id)arg2 URL:(id)arg3 predicateDescription:(id)arg4 ;
+(id)predicateForContactsMatchingFullTextSearch:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3 ;
+(id)predicateForPreferredNameInContainersWithIdentifiers:(id)arg1 groupsWithIdentifiers:(id)arg2 ;
+(id)predicateForPreferredNameInRange:(NSRange)arg1 ;
+(id)predicateForContactMatchingEmailAddress:(id)arg1 ;
+(id)predicateForContactMatchingPhoneNumber:(id)arg1 ;
+(id)predicateForContactsInGroupWithIdentifier:(id)arg1 ;
+(id)predicateForContactsInContainerWithIdentifier:(id)arg1 ;
+(id)predicateForContactsMatchingName:(id)arg1 ;
+(id)predicateForContactsWithIdentifiers:(id)arg1 ;
+(id)localizedStringForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)storeInfoFromCoder:(id)arg1 storeIdentifier:(id)arg2 key:(id)arg3 ;
+(id)makeIdentifierString;
+(id)contactWithContact:(id)arg1 ;
+(id)_contactWithContact:(id)arg1 resetIdentifiers:(BOOL)arg2 propertyDescriptions:(id)arg3 ;
+(id)alwaysFetchedKeys;
+(id)contactWithIdentifier:(id)arg1 ;
+(id)descriptorForAllComparatorKeys;
+(/*^block*/id)comparatorForNameSortOrder:(long long)arg1 ;
+(/*^block*/id)preferredImageComparator;
+(id)descriptorForKeyDescriptors:(id)arg1 description:(id)arg2 ;
+(id)unifyContacts:(id)arg1 ;
+(id)contact;
-(SGRecordId *)suggestionRecordId;
-(id)copyWithNoSuggestion;
-(BOOL)hasSuggestedProperties;
-(BOOL)isSuggested;
-(NSString *)maidenName;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(NSString *)nameTitle;
-(NSString *)companyName;
-(NSArray *)relatedNames;
-(NSString *)firstName;
-(NSString *)lastName;
-(void*)detachedPerson;
-(NSString *)givenName;
-(NSString *)middleName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CNContact *)snapshot;
-(NSString *)familyName;
-(id)initWithIdentifier:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)phoneNumbers;
-(NSString *)phoneticFamilyName;
-(NSString *)phoneticGivenName;
-(NSString *)phoneticMiddleName;
-(NSArray *)instantMessageAddresses;
-(NSString *)pronunciationGivenName;
-(NSString *)pronunciationFamilyName;
-(NSDictionary *)activityAlerts;
-(NSString *)cardDAVUID;
-(NSArray *)calendarURIs;
-(NSDictionary *)storeInfo;
-(id)linkedContactsFromStoreWithIdentifier:(id)arg1 ;
-(NSString *)internalIdentifier;
-(NSString *)sortingGivenName;
-(NSString *)sortingFamilyName;
-(NSString *)linkIdentifier;
-(NSArray *)contactRelations;
-(CNActivityAlert *)callAlert;
-(CNActivityAlert *)textAlert;
-(id)initWithIdentifier:(id)arg1 availableKeys:(id)arg2 ;
-(void)assertKeyIsAvailable:(id)arg1 ;
-(id)copyWithSelfAsSnapshot;
-(BOOL)preferredForName;
-(BOOL)preferredForImage;
-(id)diffToSnapshot;
-(BOOL)areAllAvailableKeysEqualToContact:(id)arg1 ignoringIdentifiers:(BOOL)arg2 ;
-(BOOL)areAllPropertiesButContactIdentifierEqualToContact:(id)arg1 ;
-(BOOL)isProperty:(id)arg1 equalToOtherIgnoreIdentifiers:(id)arg2 ;
-(BOOL)areAllPropertiesEqualToContactIgnoringIdentifiers:(id)arg1 ;
-(id)copyWithNewIdentifiers;
-(BOOL)isUnifiedWithContactWithIdentifier:(id)arg1 ;
-(NSString *)stringForIndexing;
-(id)linkedIdentifierMap;
-(NSString *)phonemeData;
-(NSArray *)socialProfiles;
-(void)assertKeysAreAvailable:(id)arg1 ;
-(NSArray *)linkedContacts;
-(BOOL)hasBeenPersisted;
-(NSArray *)mainStoreLinkedContacts;
-(BOOL)imageDataAvailable;
-(long long)contactType;
-(NSString *)phoneticFullName;
-(NSString *)previousFamilyName;
-(NSString *)jobTitle;
-(NSString *)departmentName;
-(NSData *)thumbnailImageData;
-(NSData *)fullscreenImageData;
-(NSSet *)availableKeys;
-(id)copyWithPropertyKeys:(id)arg1 ;
-(BOOL)areKeysAvailable:(id)arg1 ;
-(NSString *)mapsData;
-(long long)displayNameOrder;
-(NSDateComponents *)birthday;
-(NSDateComponents *)nonGregorianBirthday;
-(BOOL)isPreferredForName;
-(NSString *)sectionForSortingByFamilyName;
-(NSString *)sectionForSortingByGivenName;
-(BOOL)isPreferredForImage;
-(int)iOSLegacyIdentifier;
-(BOOL)isUnified;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(NSArray *)postalAddresses;
-(NSArray *)urlAddresses;
-(NSString *)nickname;
-(NSString *)storeIdentifier;
-(NSString *)accountIdentifier;
-(BOOL)hasChanges;
-(NSData *)imageData;
-(NSDate *)creationDate;
-(CGRect)cropRect;
-(NSString *)organizationName;
-(NSArray *)emailAddresses;
-(BOOL)isKeyAvailable:(id)arg1 ;
-(NSString *)note;
-(BOOL)isEqualIgnoringIdentifiers:(id)arg1 ;
-(NSString *)fullName;
-(BOOL)isValid:(id*)arg1 ;
-(NSArray *)dates;
@end

