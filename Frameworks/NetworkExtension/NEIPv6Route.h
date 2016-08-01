/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface NEIPv6Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSString* _destinationAddress;
	NSNumber* _destinationNetworkPrefixLength;
	NSString* _gatewayAddress;

}

@property (readonly) NSString * destinationAddress;                          //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (readonly) NSNumber * destinationNetworkPrefixLength;              //@synthesize destinationNetworkPrefixLength=_destinationNetworkPrefixLength - In the implementation block
@property (copy) NSString * gatewayAddress;                                  //@synthesize gatewayAddress=_gatewayAddress - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)initGlobals;
+(id)defaultRoute;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSString *)gatewayAddress;
-(void)setGatewayAddress:(NSString *)arg1 ;
-(BOOL)isDefaultRoute;
-(id)initWithDestinationAddress:(id)arg1 networkPrefixLength:(id)arg2 ;
-(NSNumber *)destinationNetworkPrefixLength;
-(NSString *)destinationAddress;
@end

