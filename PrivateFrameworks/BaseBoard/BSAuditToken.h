/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding> {

	SCD_Struct_BS11 _auditToken;

}

@property (nonatomic,readonly) SCD_Struct_BS11 realToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenFromMachMessage:(SCD_Struct_BS12*)arg1 ;
+(id)tokenFromXPCMessage:(id)arg1 ;
+(id)tokenFromAuditToken:(SCD_Struct_BS11)arg1 ;
-(id)initWithXPCMessage:(id)arg1 ;
-(id)initWithMachMessage:(SCD_Struct_BS12*)arg1 ;
-(id)_valueFromData:(id)arg1 ofType:(const char*)arg2 ;
-(id)_dataWithValue:(id)arg1 ;
-(SCD_Struct_BS11)realToken;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(int)pid;
-(id)bundleID;
-(id)initWithAuditToken:(SCD_Struct_BS11)arg1 ;
@end

