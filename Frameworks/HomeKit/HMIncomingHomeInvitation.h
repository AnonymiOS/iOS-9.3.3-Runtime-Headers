/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMHomeInvitation.h>

@class HMUser, HMHomeManager, NSString, NSUUID;

@interface HMIncomingHomeInvitation : HMHomeInvitation {

	HMUser* _inviter;
	HMHomeManager* _homeManager;

}

@property (nonatomic,readonly) HMUser * inviter;                              //@synthesize inviter=_inviter - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeName; 
@property (nonatomic,copy,readonly) NSUUID * homeUUID; 
@property (assign,nonatomic,__weak) HMHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)homeInvitationsFromEncodedData:(id)arg1 homeManager:(id)arg2 ;
+(id)homeInvitationsFromData:(id)arg1 homeManager:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HMUser *)inviter;
-(void)acceptInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 ;
-(void)cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cancelInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithInvitationData:(id)arg1 homeManager:(id)arg2 ;
-(void)_acceptInviteWithCompletionHandler:(/*^block*/id)arg1 ;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(NSString *)homeName;
-(NSUUID *)homeUUID;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

