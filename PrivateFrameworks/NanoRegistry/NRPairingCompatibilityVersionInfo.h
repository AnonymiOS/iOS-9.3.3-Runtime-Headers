/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NRPairingCompatibilityVersionInfo : NSObject <NSCopying, NSSecureCoding> {

	long long _pairingCompatibilityVersion;
	long long _maxPairingCompatibilityVersion;
	long long _minPairingCompatibilityVersion;
	long long _minQuickSwitchCompatibilityVersion;

}

@property (assign,nonatomic) long long pairingCompatibilityVersion;                     //@synthesize pairingCompatibilityVersion=_pairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long maxPairingCompatibilityVersion;                  //@synthesize maxPairingCompatibilityVersion=_maxPairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long minPairingCompatibilityVersion;                  //@synthesize minPairingCompatibilityVersion=_minPairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long minQuickSwitchCompatibilityVersion;              //@synthesize minQuickSwitchCompatibilityVersion=_minQuickSwitchCompatibilityVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)valueForToken:(int)arg1 ;
+(void)setValue:(unsigned long long)arg1 forToken:(int)arg2 ;
+(id)systemVersions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPairingCompatibilityVersion:(long long)arg1 ;
-(void)setMinPairingCompatibilityVersion:(long long)arg1 ;
-(void)setMaxPairingCompatibilityVersion:(long long)arg1 ;
-(void)setMinQuickSwitchCompatibilityVersion:(long long)arg1 ;
-(long long)pairingCompatibilityVersion;
-(long long)minPairingCompatibilityVersion;
-(long long)minQuickSwitchCompatibilityVersion;
-(long long)maxPairingCompatibilityVersion;
@end

