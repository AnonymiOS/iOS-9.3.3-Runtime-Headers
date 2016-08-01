/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSNumber;

@interface SBSecurityDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,getter=isBlockedForThermal,nonatomic) BOOL blockedForThermal; 
@property (getter=isPendingDeviceWipe,nonatomic,retain) NSNumber * pendingDeviceWipe; 
@property (getter=isBlockedForPasscode,nonatomic,retain) NSNumber * blockedForPasscode; 
@property (nonatomic,retain) NSNumber * numberOfFailedPasscodeAttempts; 
@property (nonatomic,retain) NSNumber * unblockTimeFromReferenceDate; 
@property (nonatomic,retain) NSNumber * blockStateGeneration; 
@property (getter=isDeviceWipeEnabled,nonatomic,readonly) BOOL deviceWipeEnabled; 
@property (nonatomic,readonly) BOOL dontLockEver; 
@property (nonatomic,readonly) BOOL allowLockAndUnlockWithCase; 
-(void)setBlockStateGeneration:(NSNumber *)arg1 ;
-(NSNumber *)blockStateGeneration;
-(void)setAllowLockAndUnlockWithCase:(BOOL)arg1 ;
-(BOOL)allowLockAndUnlockWithCase;
-(void)setPendingDeviceWipe:(NSNumber *)arg1 ;
-(id)isPendingDeviceWipe;
-(void)setDontLockEver:(BOOL)arg1 ;
-(BOOL)dontLockEver;
-(void)setDeviceWipeEnabled:(BOOL)arg1 ;
-(BOOL)isDeviceWipeEnabled;
-(void)setBlockedForThermal:(BOOL)arg1 ;
-(BOOL)isBlockedForThermal;
-(void)setBlockedForPasscode:(NSNumber *)arg1 ;
-(id)isBlockedForPasscode;
-(void)setUnblockTimeFromReferenceDate:(NSNumber *)arg1 ;
-(NSNumber *)unblockTimeFromReferenceDate;
-(void)setNumberOfFailedPasscodeAttempts:(NSNumber *)arg1 ;
-(NSNumber *)numberOfFailedPasscodeAttempts;
-(void)_bindAndRegisterDefaults;
-(id)deviceLockDefaultForKey:(id)arg1 ;
-(void)setDeviceLockDefault:(id)arg1 forKey:(id)arg2 ;
@end
