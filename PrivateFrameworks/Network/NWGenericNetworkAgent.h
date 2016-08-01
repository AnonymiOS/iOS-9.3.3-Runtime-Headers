/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@class NSString, NSUUID;

@interface NWGenericNetworkAgent : NSObject <NWPrettyDescription> {

	netagent* _internalNetagent;

}

@property (readonly) NSString * agentDomain; 
@property (readonly) NSString * agentType; 
@property (readonly) NSString * agentDescription; 
@property (readonly) NSUUID * agentUUID; 
@property (getter=isActive,readonly) BOOL active; 
@property (getter=isKernelActivated,readonly) BOOL kernelActivated; 
@property (getter=isUserActivated,readonly) BOOL userActivated; 
@property (getter=isVoluntary,readonly) BOOL voluntary; 
@property (getter=isSpecificUseOnly,readonly) BOOL specificUseOnly; 
@property (getter=isNetworkProvider,readonly) BOOL networkProvider; 
@property (copy,readonly) NSString * privateDescription; 
@property (assign) netagent* internalNetagent;                                   //@synthesize internalNetagent=_internalNetagent - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(NSString *)privateDescription;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(netagent*)internalNetagent;
-(id)initWithKernelAgent:(const netagent*)arg1 ;
-(void)setInternalNetagent:(netagent*)arg1 ;
-(NSString *)agentDomain;
-(NSString *)agentType;
-(NSString *)agentDescription;
-(NSUUID *)agentUUID;
-(BOOL)isKernelActivated;
-(BOOL)isUserActivated;
-(BOOL)isVoluntary;
-(BOOL)isSpecificUseOnly;
-(BOOL)isNetworkProvider;
@end

