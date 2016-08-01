/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIDocumentPickerServiceViewController.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol _UIDocumentListControllerDelegate;
@class _UIDocumentPickerContainerViewController, NSURL, NSArray, NSString;

@interface _UIDocumentListController : UIViewController <_UIDocumentPickerServiceViewController, UIViewControllerRestoration> {

	id<_UIDocumentListControllerDelegate> _delegate;
	_UIDocumentListController* _rootListController;
	_UIDocumentPickerContainerViewController* _containerViewController;
	int _sortOrderIfNotDeferred;
	long long _displayModeIfNotDeferred;
	long long _availableActionsIfNotDeferred;
	CGPoint _stateRestoredContentOffset;

}

@property (assign,nonatomic,__weak) id<_UIDocumentListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * presentedURL; 
@property (nonatomic,readonly) NSArray * containedItems; 
@property (nonatomic,retain) NSArray * selectedItems; 
@property (assign,nonatomic) BOOL editing; 
@property (assign,nonatomic) long long listMode; 
@property (assign,nonatomic) long long availableActions; 
@property (assign,nonatomic,__weak) _UIDocumentListController * rootListController;              //@synthesize rootListController=_rootListController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSURL * uploadURL; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(id)_listControllerForURL:(id)arg1 ;
+(id)listControllerHierarchyForURL:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_UIDocumentListControllerDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<_UIDocumentListControllerDelegate>)delegate;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_commonInit;
-(BOOL)editing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(id)model;
-(NSURL *)uploadURL;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(void)performAction:(long long)arg1 item:(id)arg2 view:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldShowAction:(long long)arg1 ;
-(long long)availableActions;
-(void)setListMode:(long long)arg1 ;
-(long long)listMode;
-(void)_setContainerViewController:(id)arg1 ;
-(void)setupNavigationItemForPicker:(id)arg1 isRoot:(BOOL)arg2 ;
-(void)didSelectItem:(id)arg1 ;
-(BOOL)shouldShowSearch;
-(void)itemsOrSelectionDidChange:(BOOL)arg1 ;
-(void)setDisplayMode:(long long)arg1 ;
-(long long)displayMode;
-(void)setAvailableActions:(long long)arg1 ;
-(_UIDocumentListController *)rootListController;
-(id)initWithContainerViewController:(id)arg1 ;
-(void)setRootListController:(_UIDocumentListController *)arg1 ;
-(void)_updateScrollPositionForStateRestoration;
-(NSArray *)containedItems;
-(NSURL *)presentedURL;
-(NSArray *)selectedItems;
-(void)setSelectedItems:(NSArray *)arg1 ;
@end

