/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BiometricKitDelegate.h>

@protocol SBUIBiometricEventMonitorDelegate;
@class BiometricKit, NSHashTable, NSCountedSet, NSString;

@interface SBUIBiometricEventMonitor : NSObject <BiometricKitDelegate> {

	BiometricKit* _biometricKit;
	id<SBUIBiometricEventMonitorDelegate> _delegate;
	NSHashTable* _observers;
	unsigned long long _lastEvent;
	NSCountedSet* _matchingDisabledRequesters;
	NSCountedSet* _fingerDetectRequesters;
	NSCountedSet* _activePasscodeViews;
	NSCountedSet* _matchingCancelationDisabledRequesters;
	BOOL _matchingEnabled;
	BOOL _fingerDetectionEnabled;
	BOOL _screenIsOn;
	BOOL _deviceLocked;
	BOOL _lockScreenTopmost;
	BOOL _lockScreenInStack;
	BOOL _shouldSendFingerOffNotification;
	unsigned long long _matchMode;
	NSString* _matchModeReason;
	unsigned long long _enrolledIdentitiesCount;
	int _notifyToken;

}

@property (assign,nonatomic,__weak) id<SBUIBiometricEventMonitorDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isMatchingEnabled,nonatomic,readonly) BOOL matchingEnabled;                                                    //@synthesize matchingEnabled=_matchingEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long lockoutState; 
@property (getter=isFingerprintUnlockAllowedAndEnabled,nonatomic,readonly) BOOL fingerprintUnlockAllowedAndEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setDelegate:(id<SBUIBiometricEventMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SBUIBiometricEventMonitorDelegate>)delegate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)enableMatchingForPasscodeView:(id)arg1 ;
-(void)disableMatchingForPasscodeView:(id)arg1 ;
-(unsigned long long)lockoutState;
-(BOOL)isMatchingEnabled;
-(BOOL)hasEnrolledIdentities;
-(void)setMatchMode:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)_profileSettingsChanged:(id)arg1 ;
-(void)_reevaluateMatching;
-(void)_startFingerDetection;
-(void)_stopFingerDetection;
-(id)_matchOptionForMode:(unsigned long long)arg1 ;
-(id)_descriptionForMatchMode:(unsigned long long)arg1 ;
-(void)setMatchMode:(unsigned long long)arg1 force:(BOOL)arg2 reason:(id)arg3 ;
-(void)_startMatching;
-(BOOL)isFingerOn;
-(void)_stopMatching;
-(void)_setMatchingEnabled:(BOOL)arg1 ;
-(BOOL)_shouldSignpost;
-(void)_updateHandlersForEvent:(unsigned long long)arg1 ;
-(id)stringForEvent:(unsigned long long)arg1 ;
-(void)setMatchingDisabled:(BOOL)arg1 requester:(id)arg2 ;
-(void)setFingerDetectEnabled:(BOOL)arg1 requester:(id)arg2 ;
-(void)setMatchingCancelationDisabled:(BOOL)arg1 requester:(id)arg2 ;
-(unsigned long long)matchMode;
-(BOOL)isFingerprintUnlockAllowedAndEnabled;
-(void)setLockScreenTopmost:(BOOL)arg1 ;
-(void)setLockScreenInAlertStack:(BOOL)arg1 ;
-(void)_setDeviceLocked:(BOOL)arg1 ;
-(void)noteScreenWillTurnOff;
-(void)noteScreenDidTurnOff;
-(void)noteScreenWillTurnOn;
-(void)_deviceWillWake;
-(void)matchResult:(id)arg1 withDetails:(id)arg2 ;
-(void)statusMessage:(unsigned)arg1 ;
@end

