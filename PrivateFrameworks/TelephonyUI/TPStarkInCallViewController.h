/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TPStarkPhoneCallGalleryViewDelegate.h>
#import <libobjc.A.dylib/TPStarkHardPauseButtonDelegate.h>
#import <libobjc.A.dylib/TPStarkInCallButtonsViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol TPStarkInCallViewControllerDelegate;
@class TUReplyWithMessageStore, NSArray, TUCall, UIView, TPStarkPhoneCallGalleryView, TPStarkInCallButtonsView, TPStarkInCallHardPauseButton, NSTimer, NSString;

@interface TPStarkInCallViewController : UIViewController <TPStarkPhoneCallGalleryViewDelegate, TPStarkHardPauseButtonDelegate, TPStarkInCallButtonsViewDelegate, UIActionSheetDelegate> {

	TUReplyWithMessageStore* _replyWithMessageStore;
	unsigned short _currentMode;
	id<TPStarkInCallViewControllerDelegate> _delegate;
	NSArray* _primaryPhoneCalls;
	NSArray* _conferenceParticipants;
	TUCall* _incomingPhoneCall;
	UIView* _flippyView;
	TPStarkPhoneCallGalleryView* _galleryView;
	TPStarkInCallButtonsView* _buttonsView;
	TPStarkInCallHardPauseButton* _hardPauseButton;
	NSTimer* _viewUpdateClockTickTimer;
	TUCall* _callToDecline;
	TUCall* _failedCall;

}

@property (assign) id<TPStarkInCallViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL isDismissable; 
@property (copy) NSArray * primaryPhoneCalls;                                     //@synthesize primaryPhoneCalls=_primaryPhoneCalls - In the implementation block
@property (copy) NSArray * conferenceParticipants;                                //@synthesize conferenceParticipants=_conferenceParticipants - In the implementation block
@property (retain) TUCall * incomingPhoneCall;                                    //@synthesize incomingPhoneCall=_incomingPhoneCall - In the implementation block
@property (retain) UIView * flippyView;                                           //@synthesize flippyView=_flippyView - In the implementation block
@property (retain) TPStarkPhoneCallGalleryView * galleryView;                     //@synthesize galleryView=_galleryView - In the implementation block
@property (retain) TPStarkInCallButtonsView * buttonsView;                        //@synthesize buttonsView=_buttonsView - In the implementation block
@property (retain) TPStarkInCallHardPauseButton * hardPauseButton;                //@synthesize hardPauseButton=_hardPauseButton - In the implementation block
@property (retain) NSTimer * viewUpdateClockTickTimer;                            //@synthesize viewUpdateClockTickTimer=_viewUpdateClockTickTimer - In the implementation block
@property (retain) TUCall * callToDecline;                                        //@synthesize callToDecline=_callToDecline - In the implementation block
@property (assign) unsigned short currentMode;                                    //@synthesize currentMode=_currentMode - In the implementation block
@property (retain) TUCall * failedCall;                                           //@synthesize failedCall=_failedCall - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<TPStarkInCallViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<TPStarkInCallViewControllerDelegate>)delegate;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(unsigned short)currentMode;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setCurrentMode:(unsigned short)arg1 ;
-(BOOL)isAddCallAllowed;
-(id)allConferenceParticipantCalls;
-(id)primaryPhoneCallsForGalleryView:(id)arg1 ;
-(id)representativePhoneCallForConferenceForGalleryView:(id)arg1 ;
-(void)muteStateChangedNotification:(id)arg1 ;
-(void)hardPauseDigitsStateChangedNotification:(id)arg1 ;
-(void)callStateChangedNotification:(id)arg1 ;
-(void)setFlippyView:(UIView *)arg1 ;
-(UIView *)flippyView;
-(void)setGalleryView:(TPStarkPhoneCallGalleryView *)arg1 ;
-(TPStarkPhoneCallGalleryView *)galleryView;
-(void)setButtonsView:(TPStarkInCallButtonsView *)arg1 ;
-(TPStarkInCallButtonsView *)buttonsView;
-(void)setHardPauseButton:(TPStarkInCallHardPauseButton *)arg1 ;
-(TPStarkInCallHardPauseButton *)hardPauseButton;
-(void)selectNextHighlightableControlAscending:(BOOL)arg1 ;
-(NSTimer *)viewUpdateClockTickTimer;
-(void)setViewUpdateClockTickTimer:(NSTimer *)arg1 ;
-(void)viewUpdateClockTickTimerFired:(id)arg1 ;
-(NSArray *)primaryPhoneCalls;
-(NSArray *)conferenceParticipants;
-(TUCall *)incomingPhoneCall;
-(id)__sanitizedPrimaryPhoneCallOrdering:(id)arg1 ;
-(void)setPrimaryPhoneCalls:(NSArray *)arg1 ;
-(void)setConferenceParticipants:(NSArray *)arg1 ;
-(void)setIncomingPhoneCall:(TUCall *)arg1 ;
-(BOOL)currentCallStateWarrantsCallWaitingMode;
-(void)updateButtonsViewState;
-(void)setFailedCall:(TUCall *)arg1 ;
-(TUCall *)failedCall;
-(TUCall *)callToDecline;
-(BOOL)isKeypadAllowed;
-(BOOL)canSendMessageToCall:(id)arg1 ;
-(void)setCallToDecline:(TUCall *)arg1 ;
-(id)replyWithMessageStore;
-(void)handleAlertControllerSendMessageResponse:(id)arg1 ;
-(void)_sendMessageResponse:(id)arg1 toCall:(id)arg2 ;
-(BOOL)areIncomingCallOptionsAllowed;
-(BOOL)isSpringBoardPasscodeLocked;
-(void)updateHardPauseButtonState;
-(void)highlightHardPauseButton;
-(id)callForHardPauseState;
-(id)conferenceParticipantCallsForPhoneCall:(id)arg1 ;
-(void)hardPauseButtonDidChangeVisibility:(id)arg1 ;
-(void)hardPauseButtonDidSendHardPauseDigits:(id)arg1 ;
-(void)inCallButtonWasTapped:(id)arg1 ;
-(BOOL)isMergeCallsAllowed;
-(BOOL)isSwapCallsAllowed;
-(BOOL)isKeypadEnabled;
-(BOOL)isHoldEnabled;
-(BOOL)canSendMessage;
-(void)setPrimaryPhoneCalls:(id)arg1 conferencePhoneCalls:(id)arg2 incomingPhoneCall:(id)arg3 ;
-(id)currentActivePhoneCall;
-(BOOL)isDismissable;
-(BOOL)isMuted;
-(void)setIsMuted:(BOOL)arg1 ;
@end

