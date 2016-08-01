/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/EKEventTitleDetailItemDelegate.h>
#import <libobjc.A.dylib/EKUIEventStatusButtonsViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol EKEventViewDelegate;
@class EKEvent, _UIAccessDeniedView, EKEventDetailItem, EKEventEditViewController, EKUIRecurrenceAlertController, EKUIEventStatusButtonsView, SingleToolbarItemContainerView, UITableView, NSArray, UIView, UIViewController, UIScrollView, NSString;

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, UIAlertViewDelegate> {

	EKEvent* _event;
	BOOL _ignoreDBChanges;
	long long _lastAuthorizationStatus;
	_UIAccessDeniedView* _accessDeniedView;
	EKEventDetailItem* _selectedEditItem;
	long long _disclosedTableSection;
	NSRange _disclosedTableRange;
	int _pendingStatus;
	EKEventEditViewController* _activeEventEditor;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	EKUIEventStatusButtonsView* _statusButtonsView;
	SingleToolbarItemContainerView* _statusButtonsContainerView;
	double _statusButtonsViewCachedFontSize;
	long long _lastOrientation;
	EKEventDetailItem* _currentEditItem;
	UITableView* _tableView;
	BOOL _didAppear;
	BOOL _viewIsVisible;
	BOOL _autoPop;
	BOOL _allowsSubitems;
	BOOL _showsPreview;
	BOOL _hidePreview;
	BOOL _calendarPreviewIsInlineDayView;
	BOOL _inlineDayViewRespectsSelectedCalendarsFilter;
	BOOL _trustsStatus;
	BOOL _allowsInviteResponses;
	BOOL _showsAddToCalendar;
	BOOL _showsUpdateCalendar;
	BOOL _ICSPreview;
	BOOL _needsReload;
	BOOL _showsDoneButton;
	BOOL _showsOutOfDateMessage;
	BOOL _showsDelegatorMessage;
	BOOL _showsDelegateMessage;
	BOOL _dead;
	BOOL _tableIsBeingEdited;
	NSArray* _items;
	NSArray* _currentSections;
	int _scrollToSection;
	UIView* _blankFooterView;
	BOOL _showingBlankFooterView;
	UIViewController* _confirmationAlertPresentationSourceViewController;
	BOOL _allowsEditing;
	BOOL _minimalMode;
	BOOL _noninteractivePlatterMode;
	int _editorShowTransition;
	int _editorHideTransition;
	id<EKEventViewDelegate> _delegate;
	UIEdgeInsets _layoutMargins;

}

@property (assign,nonatomic,__weak) id<EKEventViewDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EKEvent * event; 
@property (assign,nonatomic) BOOL allowsEditing;                                                                       //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCalendarPreview; 
@property (assign,nonatomic) BOOL hideCalendarPreview; 
@property (assign,nonatomic) BOOL calendarPreviewIsInlineDayView; 
@property (assign,nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter; 
@property (assign,nonatomic) int scrollToSection; 
@property (assign,getter=isICSPreview,nonatomic) BOOL ICSPreview;                                                      //@synthesize ICSPreview=_ICSPreview - In the implementation block
@property (assign,nonatomic) BOOL allowsInviteResponses;                                                               //@synthesize allowsInviteResponses=_allowsInviteResponses - In the implementation block
@property (assign,nonatomic) BOOL showsAddToCalendar;                                                                  //@synthesize showsAddToCalendar=_showsAddToCalendar - In the implementation block
@property (assign,nonatomic) BOOL showsUpdateCalendar;                                                                 //@synthesize showsUpdateCalendar=_showsUpdateCalendar - In the implementation block
@property (assign,nonatomic) BOOL allowsSubitems;                                                                      //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                                     //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic) BOOL showsOutOfDateMessage;                                                               //@synthesize showsOutOfDateMessage=_showsOutOfDateMessage - In the implementation block
@property (assign,nonatomic) BOOL showsDelegatorMessage;                                                               //@synthesize showsDelegatorMessage=_showsDelegatorMessage - In the implementation block
@property (assign,nonatomic) BOOL showsDelegateMessage;                                                                //@synthesize showsDelegateMessage=_showsDelegateMessage - In the implementation block
@property (assign,nonatomic) BOOL minimalMode;                                                                         //@synthesize minimalMode=_minimalMode - In the implementation block
@property (assign,nonatomic) BOOL noninteractivePlatterMode;                                                           //@synthesize noninteractivePlatterMode=_noninteractivePlatterMode - In the implementation block
@property (assign,nonatomic) int editorShowTransition;                                                                 //@synthesize editorShowTransition=_editorShowTransition - In the implementation block
@property (assign,nonatomic) int editorHideTransition;                                                                 //@synthesize editorHideTransition=_editorHideTransition - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                                                               //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (nonatomic,readonly) UIScrollView * eventDetailsScrollView; 
@property (assign,nonatomic,__weak) UIViewController * confirmationAlertPresentationSourceViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDefaultDatesForEvent:(id)arg1 ;
+(void)adjustLayoutForCell:(id)arg1 tableViewWidth:(double)arg2 numRowsInSection:(unsigned long long)arg3 cellRow:(unsigned long long)arg4 forceLayout:(BOOL)arg5 ;
-(void)setDelegate:(id<EKEventViewDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<EKEventViewDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIEdgeInsets)layoutMargins;
-(BOOL)canBecomeFirstResponder;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)tableView;
-(CGSize)preferredContentSize;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)previewActionItems;
-(id)_items;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ;
-(double)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2 ;
-(void)setAllowsCalendarPreview:(BOOL)arg1 ;
-(void)_localeChanged;
-(void)editButtonPressed;
-(BOOL)shouldShowEditButtonInline;
-(id)viewControllerForEventItem:(id)arg1 ;
-(BOOL)inlineDayViewRespectsSelectedCalendarsFilter;
-(void)eventDetailItemWantsRefeshForHeightChange;
-(void)setInlineDayViewRespectsSelectedCalendarsFilter:(BOOL)arg1 ;
-(void)_storeChanged:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)setAllowsSubitems:(BOOL)arg1 ;
-(BOOL)allowsSubitems;
-(void)_deleteClicked:(id)arg1 ;
-(void)_presentValidationAlert:(id)arg1 ;
-(void)setCalendarPreviewIsInlineDayView:(BOOL)arg1 ;
-(void)_updateTableContentInsetForKeyboard:(id)arg1 ;
-(void)setNoninteractivePlatterMode:(BOOL)arg1 ;
-(void)setICSPreview:(BOOL)arg1 ;
-(void)setShowsAddToCalendar:(BOOL)arg1 ;
-(void)setShowsUpdateCalendar:(BOOL)arg1 ;
-(void)setShowsOutOfDateMessage:(BOOL)arg1 ;
-(void)setShowsDelegatorMessage:(BOOL)arg1 ;
-(void)setShowsDelegateMessage:(BOOL)arg1 ;
-(void)setAllowsInviteResponses:(BOOL)arg1 ;
-(void)setScrollToSection:(int)arg1 ;
-(UIScrollView *)eventDetailsScrollView;
-(BOOL)noninteractivePlatterMode;
-(void)_presentDetachSheet;
-(BOOL)_performSave:(long long)arg1 animated:(BOOL)arg2 ;
-(id)accessDeniedView;
-(void)_performDelete:(long long)arg1 ;
-(void)setHideCalendarPreview:(BOOL)arg1 ;
-(void)setEditorShowTransition:(int)arg1 ;
-(void)setEditorHideTransition:(int)arg1 ;
-(void)_setUpkeyCommands;
-(void)_teardownTableView;
-(BOOL)minimalMode;
-(void)_updateResponseVisibility;
-(void)_setNeedsReload;
-(void)_updateResponse;
-(void)_updateFooterIfNeeded;
-(id)_indexPathForSection:(int)arg1 ;
-(void)_updateTableContentForSizeCategoryChange:(id)arg1 ;
-(void)_setObservesKeyboardNotifications:(BOOL)arg1 ;
-(void)_updateNavBarAnimated:(BOOL)arg1 ;
-(BOOL)_navigationBarShouldBeHidden;
-(void)_reloadIfNeeded;
-(BOOL)_shouldShowEditButton;
-(void)setMinimalMode:(BOOL)arg1 ;
-(void)editEvent;
-(BOOL)_shouldDisplayDoneButton;
-(void)doneButtonPressed;
-(BOOL)_backingEventAllowsEditing;
-(id)_indexPathForAttendeesDetailItem;
-(void)_setUpForEvent;
-(void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1 ;
-(void)_updateStatusButtonsActions;
-(void)_dismissEditor:(BOOL)arg1 deleted:(BOOL)arg2 ;
-(BOOL)_shouldPopSelf;
-(void)_keyboardWasShown:(id)arg1 ;
-(void)_keyboardWasHidden:(id)arg1 ;
-(void)completeWithAction:(long long)arg1 ;
-(void)_refreshEventAndReload;
-(BOOL)calendarPreviewIsInlineDayView;
-(BOOL)allowsCalendarPreview;
-(void)_setUpAttendeesWithAcceptedItem:(id)arg1 declinedItem:(id)arg2 maybeItem:(id)arg3 noReplyItem:(id)arg4 ;
-(BOOL)allowsInviteResponses;
-(BOOL)showsOutOfDateMessage;
-(BOOL)showsDelegatorMessage;
-(BOOL)showsDelegateMessage;
-(BOOL)_shouldDisplayDelegateOrOutOfDateMessage;
-(id)_footerLabelContainingText:(id)arg1 ;
-(void)_prepareEventForEdit;
-(id)_statusButtons;
-(BOOL)_isDisplayingInvitation;
-(void)setActiveEventEditor:(id)arg1 ;
-(void)presentEditorAnimated:(BOOL)arg1 ;
-(int)editorShowTransition;
-(id)_viewControllerForEditorPresentation;
-(CGSize)_idealSize;
-(UIViewController *)confirmationAlertPresentationSourceViewController;
-(void)_saveStatus:(long long)arg1 span:(long long)arg2 ;
-(int)editorHideTransition;
-(void)_saveStatus:(long long)arg1 ;
-(BOOL)_isDisplayingSuggestion;
-(void)_addToCalendarClicked:(id)arg1 ;
-(void)_deleteSuggestionTapped:(id)arg1 ;
-(id)_statusButtonsView;
-(BOOL)_shouldDisplayStatusButtons;
-(id)_statusButtonsContainerView;
-(BOOL)showsAddToCalendar;
-(BOOL)isICSPreview;
-(BOOL)showsUpdateCalendar;
-(BOOL)_isDisplayingDeletableEvent;
-(void)setConfirmationAlertPresentationSourceViewController:(UIViewController *)arg1 ;
-(void)invokeAction:(long long)arg1 ;
-(unsigned long long)_sectionForDetailItem:(id)arg1 ;
-(void)_performEditKeyCommand;
-(void)openAttendeesDetailItem;
-(BOOL)hideCalendarPreview;
-(int)scrollToSection;
-(id)activeEventEditor;
-(void)eventItemDidStartEditing:(id)arg1 ;
-(void)eventItemDidSave:(id)arg1 ;
-(void)eventItemDidEndEditing:(id)arg1 ;
-(void)_layoutStatusButtonsForInterfaceOrientation:(long long)arg1 ;
-(void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(/*^block*/id)arg3 ;
-(void)detailItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2 ;
-(void)_pop;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(BOOL)showsDoneButton;
-(double)topInset;
-(void)setTopInset:(double)arg1 ;
@end

