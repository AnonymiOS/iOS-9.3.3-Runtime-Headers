/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersonNameComponents, CNPostalAddress, NSString, CNPhoneNumber;

@interface PKContact : NSObject <NSSecureCoding> {

	NSPersonNameComponents* _name;
	CNPostalAddress* _postalAddress;
	NSString* _emailAddress;
	CNPhoneNumber* _phoneNumber;
	NSString* _supplementarySubLocality;

}

@property (nonatomic,retain) NSPersonNameComponents * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) CNPostalAddress * postalAddress;                  //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                          //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) CNPhoneNumber * phoneNumber;                      //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * supplementarySubLocality;              //@synthesize supplementarySubLocality=_supplementarySubLocality - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(void)setName:(NSPersonNameComponents *)arg1 ;
-(NSPersonNameComponents *)name;
-(CNPhoneNumber *)phoneNumber;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setPhoneNumber:(CNPhoneNumber *)arg1 ;
-(void)setSupplementarySubLocality:(NSString *)arg1 ;
-(NSString *)supplementarySubLocality;
-(CNPostalAddress *)postalAddress;
-(void)setPostalAddress:(CNPostalAddress *)arg1 ;
-(id)initWithCNContact:(id)arg1 ;
-(id)cnMutableContact;
@end

