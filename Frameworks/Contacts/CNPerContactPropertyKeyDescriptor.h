/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNKeyDescriptor_Private.h>
#import <libobjc.A.dylib/CNKeyDescriptor.h>

@class NSMutableDictionary, NSString;

@interface CNPerContactPropertyKeyDescriptor : NSObject <CNKeyDescriptor_Private, CNKeyDescriptor> {

	NSMutableDictionary* _propertiesByIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * propertiesByIdentifier;              //@synthesize propertiesByIdentifier=_propertiesByIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)_cn_requiredKeys;
-(NSMutableDictionary *)propertiesByIdentifier;
-(void)setPropertiesByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setKeysToFetch:(id)arg1 forContactIdentifier:(id)arg2 ;
@end

