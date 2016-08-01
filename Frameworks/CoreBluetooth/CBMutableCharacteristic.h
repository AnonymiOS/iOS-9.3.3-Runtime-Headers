/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBCharacteristic.h>

@class NSMutableArray, NSNumber, NSArray, NSData;

@interface CBMutableCharacteristic : CBCharacteristic {

	NSMutableArray* _subscribedCentrals;
	unsigned long long _permissions;
	NSNumber* _ID;

}

@property (assign,nonatomic) unsigned long long permissions;              //@synthesize permissions=_permissions - In the implementation block
@property (retain,readonly) NSArray * subscribedCentrals;                 //@synthesize subscribedCentrals=_subscribedCentrals - In the implementation block
@property (assign,nonatomic) unsigned long long properties; 
@property (retain) NSData * value; 
@property (retain) NSArray * descriptors; 
@property (retain) NSNumber * ID;                                         //@synthesize ID=_ID - In the implementation block
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithService:(id)arg1 dictionary:(id)arg2 ;
-(id)initWithType:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 permissions:(unsigned long long)arg4 ;
-(BOOL)handleCentralSubscribed:(id)arg1 ;
-(BOOL)handleCentralUnsubscribed:(id)arg1 ;
-(void)handlePowerNotOn;
-(NSArray *)subscribedCentrals;
-(void)setID:(NSNumber *)arg1 ;
-(unsigned long long)permissions;
-(void)setPermissions:(unsigned long long)arg1 ;
-(NSNumber *)ID;
@end

