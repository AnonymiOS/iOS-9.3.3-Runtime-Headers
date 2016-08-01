/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, SALocation, NSDate, NSString, SAEmail, NSNumber, SAPhone;

@interface SAABPersonSearch : SADomainCommand

@property (nonatomic,copy) NSURL * accountIdentifier; 
@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,retain) SAEmail * email; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAPhone * phone; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * scope; 
+(id)personSearch;
+(id)personSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)relationship;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)scope;
-(void)setAddress:(SALocation *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(void)setCompany:(NSString *)arg1 ;
-(void)setEmail:(SAEmail *)arg1 ;
-(NSNumber *)me;
-(void)setMe:(NSNumber *)arg1 ;
-(void)setPhone:(SAPhone *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
-(NSDate *)birthday;
-(SAEmail *)email;
-(NSString *)company;
-(void)setBirthday:(NSDate *)arg1 ;
-(NSURL *)accountIdentifier;
-(void)setAccountIdentifier:(NSURL *)arg1 ;
-(SALocation *)address;
-(SAPhone *)phone;
-(id)encodedClassName;
@end

