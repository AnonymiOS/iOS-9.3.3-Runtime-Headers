/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUStatusBarManagerDelegate;
@class NSString, NSTimer, TUCall;

@interface TUStatusBarManager : NSObject {

	id<TUStatusBarManagerDelegate> _delegate;
	NSString* _currentStatusBarString;
	NSString* _currentAbbreviatedStatusBarString;
	NSTimer* _callDurationUpdateTimer;

}

@property (assign,nonatomic) id<TUStatusBarManagerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * currentStatusBarString;                         //@synthesize currentStatusBarString=_currentStatusBarString - In the implementation block
@property (nonatomic,retain) NSString * currentAbbreviatedStatusBarString;              //@synthesize currentAbbreviatedStatusBarString=_currentAbbreviatedStatusBarString - In the implementation block
@property (nonatomic,retain,readonly) TUCall * displayedCall; 
@property (nonatomic,retain) NSTimer * callDurationUpdateTimer;                         //@synthesize callDurationUpdateTimer=_callDurationUpdateTimer - In the implementation block
-(void)setDelegate:(id<TUStatusBarManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<TUStatusBarManagerDelegate>)delegate;
-(NSTimer *)callDurationUpdateTimer;
-(void)setCallDurationUpdateTimer:(NSTimer *)arg1 ;
-(void)updateStatusBarState;
-(void)emergencyCallBackModeChangedNotification;
-(TUCall *)displayedCall;
-(void)updateStatusBarStateForCall:(id)arg1 ;
-(void)clearStatusBarInCallState;
-(BOOL)inCallServiceWantsSuppressionOfInCallStatusBar;
-(BOOL)shouldSetStatusBarOverridesForCall:(id)arg1 ;
-(void)setStatusBarStyleOverridesForCall:(id)arg1 ;
-(void)updateStatusBarCallDuration;
-(void)updateStatusBarDurationForCall:(id)arg1 ;
-(id)statusBarPreambleForCall:(id)arg1 ;
-(void)setCurrentStatusBarString:(NSString *)arg1 ;
-(void)setCurrentAbbreviatedStatusBarString:(NSString *)arg1 ;
-(NSString *)currentStatusBarString;
-(NSString *)currentAbbreviatedStatusBarString;
-(void)startListeningForNotifications;
@end

