/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NSUUID, NSString, NWAddressEndpoint;

@interface NEPolicyCondition : NSObject <NEPrettyDescription> {

	BOOL _negative;
	unsigned char _prefix;
	unsigned short _ipProtocol;
	int _pid;
	unsigned _uid;
	unsigned _trafficClassStart;
	unsigned _trafficClassEnd;
	long long _conditionType;
	NSUUID* _applicationUUID;
	NSString* _accountIdentifier;
	NSString* _domain;
	NSString* _interfaceName;
	NWAddressEndpoint* _startAddress;
	NWAddressEndpoint* _endAddress;

}

@property (assign) long long conditionType;                       //@synthesize conditionType=_conditionType - In the implementation block
@property (getter=isNegative) BOOL negative;                      //@synthesize negative=_negative - In the implementation block
@property (copy) NSUUID * applicationUUID;                        //@synthesize applicationUUID=_applicationUUID - In the implementation block
@property (assign) int pid;                                       //@synthesize pid=_pid - In the implementation block
@property (assign) unsigned uid;                                  //@synthesize uid=_uid - In the implementation block
@property (copy) NSString * accountIdentifier;                    //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (copy) NSString * domain;                               //@synthesize domain=_domain - In the implementation block
@property (copy) NSString * interfaceName;                        //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) unsigned trafficClassStart;                    //@synthesize trafficClassStart=_trafficClassStart - In the implementation block
@property (assign) unsigned trafficClassEnd;                      //@synthesize trafficClassEnd=_trafficClassEnd - In the implementation block
@property (assign) unsigned short ipProtocol;                     //@synthesize ipProtocol=_ipProtocol - In the implementation block
@property (assign) unsigned char prefix;                          //@synthesize prefix=_prefix - In the implementation block
@property (retain) NWAddressEndpoint * startAddress;              //@synthesize startAddress=_startAddress - In the implementation block
@property (retain) NWAddressEndpoint * endAddress;                //@synthesize endAddress=_endAddress - In the implementation block
+(id)effectiveApplication:(id)arg1 ;
+(id)realApplication:(id)arg1 ;
+(id)effectivePID:(int)arg1 ;
+(id)uid:(unsigned)arg1 ;
+(id)allInterfaces;
+(id)accountIdentifier:(id)arg1 ;
+(id)domain:(id)arg1 ;
+(id)scopedInterface:(id)arg1 ;
+(id)trafficClassStart:(unsigned)arg1 end:(unsigned)arg2 ;
+(id)ipProtocol:(unsigned short)arg1 ;
+(id)localAddress:(id)arg1 prefix:(unsigned char)arg2 ;
+(id)remoteAddress:(id)arg1 prefix:(unsigned char)arg2 ;
+(id)localAddressStart:(id)arg1 end:(id)arg2 ;
+(id)remoteAddressStart:(id)arg1 end:(id)arg2 ;
+(id)entitlement;
-(id)init;
-(id)description;
-(NSString *)domain;
-(unsigned)uid;
-(BOOL)validate;
-(void)setUid:(unsigned)arg1 ;
-(void)setStartAddress:(NWAddressEndpoint *)arg1 ;
-(void)setPrefix:(unsigned char)arg1 ;
-(unsigned char)prefix;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setIpProtocol:(unsigned short)arg1 ;
-(unsigned short)ipProtocol;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setNegative:(BOOL)arg1 ;
-(id)initInternal;
-(void)setConditionType:(long long)arg1 ;
-(void)setApplicationUUID:(NSUUID *)arg1 ;
-(void)setTrafficClassStart:(unsigned)arg1 ;
-(void)setTrafficClassEnd:(unsigned)arg1 ;
-(void)setEndAddress:(NWAddressEndpoint *)arg1 ;
-(id)conditionTypeString;
-(unsigned char)conditionTypeValue;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(NSUUID *)applicationUUID;
-(unsigned)trafficClassStart;
-(unsigned)trafficClassEnd;
-(NWAddressEndpoint *)startAddress;
-(NWAddressEndpoint *)endAddress;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)isNegative;
-(long long)conditionType;
@end

