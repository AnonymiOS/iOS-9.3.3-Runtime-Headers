/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RMSService : NSObject {

	int _port;
	NSString* _displayName;
	NSString* _networkName;
	NSString* _hostName;
	long long _serviceType;
	long long _serviceDiscoverySource;
	long long _serviceLegacyFlags;
	NSString* _homeSharingGroupKey;

}

@property (nonatomic,retain) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * networkName;                        //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,retain) NSString * hostName;                           //@synthesize hostName=_hostName - In the implementation block
@property (assign,nonatomic) int port;                                      //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) long long serviceType;                         //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) long long serviceDiscoverySource;              //@synthesize serviceDiscoverySource=_serviceDiscoverySource - In the implementation block
@property (assign,nonatomic) long long serviceLegacyFlags;                  //@synthesize serviceLegacyFlags=_serviceLegacyFlags - In the implementation block
@property (nonatomic,retain) NSString * homeSharingGroupKey;                //@synthesize homeSharingGroupKey=_homeSharingGroupKey - In the implementation block
+(id)servicesFromProtobufs:(id)arg1 ;
+(id)protobufsFromServices:(id)arg1 ;
-(void)setPort:(int)arg1 ;
-(NSString *)hostName;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(BOOL)isLegacy;
-(NSString *)displayName;
-(int)port;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(long long)serviceType;
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(BOOL)isEqualToService:(id)arg1 ;
-(long long)serviceDiscoverySource;
-(long long)serviceLegacyFlags;
-(NSString *)homeSharingGroupKey;
-(void)setServiceDiscoverySource:(long long)arg1 ;
-(void)setServiceLegacyFlags:(long long)arg1 ;
-(void)setHomeSharingGroupKey:(NSString *)arg1 ;
@end

