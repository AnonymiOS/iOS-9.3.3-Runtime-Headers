/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>
#import <libobjc.A.dylib/CNAccountsAndGroupsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerAddContactPresenter.h>

@class CNContactListViewController, CNContactStyle, CNContactStore, CNAccountsAndGroupsDataSource, CNContactStoreDataSource, NSString;

@interface CNContactNavigationController : UINavigationController <CNContactListViewControllerDelegate, CNContactViewControllerDelegate, CNContactContentViewControllerDelegate, CNAccountsAndGroupsViewControllerDelegate, CNContactViewControllerAddContactPresenter> {

	CNContactListViewController* _contactListViewController;
	BOOL _allowsCardEditing;
	BOOL _allowsCardDeletion;
	BOOL _allowsCanceling;
	BOOL _allowsDone;
	BOOL _allowsContactBlocking;
	BOOL _ignoresMapsData;
	CNContactStyle* _contactStyle;
	CNContactStore* _contactStore;
	CNAccountsAndGroupsDataSource* _accountsAndGroupsDataSource;
	long long _leftButtonBehavior;
	long long _rightButtonBehavior;
	CNContactStoreDataSource* _nonServerDataSource;

}

@property (assign,nonatomic) id<CNContactNavigationControllerDelegate> delegate; 
@property (nonatomic,readonly) id<CNContactDataSource> dataSource; 
@property (nonatomic,retain) CNContactStyle * contactStyle;                                            //@synthesize contactStyle=_contactStyle - In the implementation block
@property (assign,nonatomic) BOOL allowsCardEditing;                                                   //@synthesize allowsCardEditing=_allowsCardEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCardDeletion;                                                  //@synthesize allowsCardDeletion=_allowsCardDeletion - In the implementation block
@property (assign,nonatomic) BOOL allowsCanceling;                                                     //@synthesize allowsCanceling=_allowsCanceling - In the implementation block
@property (assign,nonatomic) BOOL allowsDone;                                                          //@synthesize allowsDone=_allowsDone - In the implementation block
@property (assign,nonatomic) BOOL allowsContactBlocking;                                               //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources; 
@property (assign,nonatomic) BOOL ignoresMapsData;                                                     //@synthesize ignoresMapsData=_ignoresMapsData - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsDataSource * accountsAndGroupsDataSource;              //@synthesize accountsAndGroupsDataSource=_accountsAndGroupsDataSource - In the implementation block
@property (assign,nonatomic) long long leftButtonBehavior;                                             //@synthesize leftButtonBehavior=_leftButtonBehavior - In the implementation block
@property (assign,nonatomic) long long rightButtonBehavior;                                            //@synthesize rightButtonBehavior=_rightButtonBehavior - In the implementation block
@property (nonatomic,retain) CNContactStoreDataSource * nonServerDataSource;                           //@synthesize nonServerDataSource=_nonServerDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newContactFormatter;
-(id<CNContactDataSource>)dataSource;
-(void)applicationDidResume;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)cancelSearch:(id)arg1 ;
-(void)accountsAndGroupsViewControllerDidFinish:(id)arg1 ;
-(BOOL)contactListViewController:(id)arg1 canSelectContact:(id)arg2 ;
-(BOOL)contactListViewController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3 ;
-(void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactListViewController:(id)arg1 shouldPresentContact:(id)arg2 shouldScrollToContact:(BOOL)arg3 ;
-(id)initWithDataSource:(id)arg1 contactFormatter:(id)arg2 applyGroupFilterFromPreferences:(BOOL)arg3 ;
-(void)setAccountsAndGroupsDataSource:(CNAccountsAndGroupsDataSource *)arg1 ;
-(void)addContact:(id)arg1 ;
-(void)beginSearch:(id)arg1 ;
-(id)contactListViewController;
-(void)setShouldDisplayMeContactBanner:(BOOL)arg1 ;
-(BOOL)shouldDisplayMeContactBanner;
-(CNAccountsAndGroupsDataSource *)accountsAndGroupsDataSource;
-(void)presentGroupsViewController:(id)arg1 ;
-(BOOL)allowsCanceling;
-(BOOL)allowsDone;
-(CNContactStoreDataSource *)nonServerDataSource;
-(BOOL)ignoresMapsData;
-(void)presentContactViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)allowsCardDeletion;
-(void)showCardForContact:(id)arg1 resetFilter:(BOOL)arg2 resetSearch:(BOOL)arg3 fallbackToFirstContact:(BOOL)arg4 scrollToContact:(BOOL)arg5 animated:(BOOL)arg6 ;
-(void)setNonServerDataSource:(CNContactStoreDataSource *)arg1 ;
-(void)addContact:(id)arg1 animated:(BOOL)arg2 ;
-(CNContactStyle *)contactStyle;
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(void)setAllowsCardDeletion:(BOOL)arg1 ;
-(void)setAllowsCanceling:(BOOL)arg1 ;
-(void)setAllowsDone:(BOOL)arg1 ;
-(void)setIgnoresMapsData:(BOOL)arg1 ;
-(long long)leftButtonBehavior;
-(void)setLeftButtonBehavior:(long long)arg1 ;
-(long long)rightButtonBehavior;
-(void)setRightButtonBehavior:(long long)arg1 ;
-(BOOL)hidesSearchableSources;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(void)updateNavigationButtonsAnimated:(BOOL)arg1 ;
-(BOOL)allowsCardEditing;
-(void)updateLeftNavigationButtonAnimated:(BOOL)arg1 ;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)presentAddContactViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)addContactPresenter;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 ;
-(CNContactStore *)contactStore;
-(BOOL)allowsContactBlocking;
-(void)showUnifiedCardForPerson:(void*)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)showCardForContact:(id)arg1 animated:(BOOL)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(void)setAllowsCardEditing:(BOOL)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
@end

