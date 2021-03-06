/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXServer.h>
#import <libobjc.A.dylib/AXSystemAppServer.h>

@class AXAccessQueue, NSMutableArray, NSMutableDictionary, NSString;

@interface AXSpringBoardServer : AXServer <AXSystemAppServer> {

	AXAccessQueue* _accessQueue;
	/*^block*/id _currentAlertHandler;
	NSMutableArray* _actionHandlers;
	NSMutableDictionary* _reachabilityHandlers;

}

@property (nonatomic,retain) AXAccessQueue * accessQueue;                             //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,copy) id currentAlertHandler;                                    //@synthesize currentAlertHandler=_currentAlertHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionHandlers;                         //@synthesize actionHandlers=_actionHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * reachabilityHandlers;              //@synthesize reachabilityHandlers=_reachabilityHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(id)_axSpringBoardServerInstanceDelegate;
-(id)_axSpringBoardServerInstance;
-(BOOL)_shouldDispatchLocally;
-(id)_axSpringBoardServerInstanceIfExists;
-(void)dealloc;
-(id)init;
-(long long)activeInterfaceOrientation;
-(BOOL)hasActiveCall;
-(void)unlockDevice;
-(void)setAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setActionHandlers:(NSMutableArray *)arg1 ;
-(void)setReachabilityHandlers:(NSMutableDictionary *)arg1 ;
-(void)setCurrentAlertHandler:(id)arg1 ;
-(id)currentAlertHandler;
-(NSMutableDictionary *)reachabilityHandlers;
-(NSMutableArray *)actionHandlers;
-(void)_didConnectToServer;
-(id)_handleReplyResult:(id)arg1 ;
-(id)_handleActionResult:(id)arg1 ;
-(id)_handleReachabilityResult:(id)arg1 ;
-(BOOL)_shouldValidateEntitlements;
-(void)_willClearServer;
-(void)_wasDisconnectedFromClient;
-(void)_didConnectToClient;
-(void)cleanupAlertHandler;
-(void)showAlert:(long long)arg1 withHandler:(/*^block*/id)arg2 withData:(id)arg3 ;
-(void)registerSpringBoardActionHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(void)setCancelGestureActivation:(unsigned long long)arg1 cancelEnabled:(BOOL)arg2 ;
-(void)registerReachabilityHandler:(/*^block*/id)arg1 withIdentifierCallback:(/*^block*/id)arg2 ;
-(void)_getPasscodeStatusImmediate:(/*^block*/id)arg1 ;
-(BOOL)isMediaPlayingForApp:(id)arg1 ;
-(id)_messageForMediaPlayingQueryForBundleID:(id)arg1 ;
-(void)pauseMediaForApp:(id)arg1 ;
-(void)resumeMediaForApp:(id)arg1 ;
-(BOOL)isNotificationCenterVisible;
-(void)toggleNotificationCenter;
-(BOOL)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1 ;
-(void)_isSystemAppFrontmostExcludingSiri:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isMultiTaskingActive;
-(void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2 ;
-(void)pid:(/*^block*/id)arg1 ;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1 ;
-(BOOL)isSiriVisible;
-(BOOL)isAppSwitcherVisible;
-(BOOL)isControlCenterVisible;
-(BOOL)isSideSwitcherVisible;
-(BOOL)isScreenSaverVisible;
-(BOOL)isNowPlayingUIVisible;
-(BOOL)isSoftwareUpdateUIVisible;
-(BOOL)isSiriTalkingOrListening;
-(BOOL)isReceivingAirPlay;
-(id)_serviceName;
-(void)takeScreenshot;
-(void)openAssistiveTouchCustomGestureCreation;
-(void)openSCATCustomGestureCreation;
-(void)setHearingAidControlVisible:(BOOL)arg1 ;
-(void)startHearingAidServer;
-(int)topEventPidOverride;
-(BOOL)isOrientationLocked;
-(void)setOrientationLocked:(BOOL)arg1 ;
-(void)resetDimTimer;
-(BOOL)isSideSwitchUsedForOrientation;
-(BOOL)isRingerMuted;
-(double)reachabilityOffset;
-(double)volumeLevel;
-(void)hideAlert;
-(void)showAlert:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setShowSpeechPlaybackControls:(BOOL)arg1 ;
-(void)removeActionHandler:(id)arg1 ;
-(void)cancelReachabilityDetection;
-(BOOL)toggleIncomingCall;
-(void)setReachabilityActive:(BOOL)arg1 ;
-(void)removeReachabilityHandler:(id)arg1 ;
-(BOOL)isInspectorMinimized;
-(BOOL)isPointInsideAccessibilityInspector:(id)arg1 ;
-(int)activeApplicationOrientation;
-(void)copyStringToPasteboard:(id)arg1 ;
-(BOOL)isScreenLockedWithPasscode:(BOOL*)arg1 ;
-(void)screenLockStatus:(/*^block*/id)arg1 ;
-(BOOL)isSystemSleeping;
-(BOOL)isSyncingRestoringResettingOrUpdating;
-(BOOL)areSystemGesturesDisabledNatively;
-(BOOL)areSystemGesturesDisabledByAccessibility;
-(id)installedApps;
-(void)backboardSnarfedMenuDown;
-(BOOL)isMediaPlaying;
-(void)isMediaPlayingForApp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pauseMedia;
-(void)resumeMedia;
-(BOOL)hasActiveOrPendingCall;
-(BOOL)hasActiveOrPendingCallOrFaceTime;
-(BOOL)isMakingEmergencyCall;
-(void)showNotificationCenter;
-(void)hideNotificationCenter;
-(BOOL)showNotificationCenter:(BOOL)arg1 ;
-(void)showControlCenter:(BOOL)arg1 ;
-(void)openAppSwitcher;
-(void)dismissAppSwitcher;
-(void)simulateEdgePressHaptics;
-(void)revealSpotlight;
-(BOOL)clearSideAppState;
-(void)openSiri;
-(void)dismissSiri;
-(void)setSiriIsTalking:(BOOL)arg1 ;
-(void)openVoiceControl;
-(BOOL)isVoiceControlRunning;
-(BOOL)isSpeakThisTemporarilyDisabled;
-(id)allowedMedusaGestures;
-(BOOL)performMedusaGesture:(unsigned long long)arg1 ;
-(void)systemAppInfoWithQuery:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isSystemAppShowingAnAlert;
-(id)focusedAppPID;
-(int)purpleBuddyPID;
-(void)purpleBuddyPID:(/*^block*/id)arg1 ;
-(id)runningAppPIDs;
-(BOOL)isSystemAppFrontmost;
-(void)isSystemAppFrontmost:(/*^block*/id)arg1 ;
-(BOOL)isSystemAppFrontmostExludingSiri;
-(BOOL)isPurpleBuddyAppFrontmost;
-(BOOL)isSettingsAppFrontmost;
-(id)focusedApps;
-(BOOL)loadGAXBundleForUnmanagedASAM;
-(id)applicationWithIdentifier:(id)arg1 ;
-(id)focusedAppProcess;
-(id)runningAppProcesses;
-(int)pid;
-(void)setVolume:(double)arg1 ;
-(AXAccessQueue *)accessQueue;
@end

