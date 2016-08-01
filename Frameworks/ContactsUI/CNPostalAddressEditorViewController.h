/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/CNPresenterDelegate.h>
#import <libobjc.A.dylib/CNPropertyCellDelegate.h>

@class NSMutableArray, NSString, CNMutableContact, CNCardPropertyGroup, UIViewController;

@interface CNPostalAddressEditorViewController : UITableViewController <CNPresenterDelegate, CNPropertyCellDelegate> {

	NSMutableArray* _propertyItems;
	NSString* _propertyKey;
	CNMutableContact* _contact;
	CNCardPropertyGroup* _propertyGroup;
	BOOL _editNames;
	BOOL _showDistrictField;
	UIViewController* _currentPresentedViewController;

}

@property (retain) UIViewController * currentPresentedViewController;              //@synthesize currentPresentedViewController=_currentPresentedViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL isPresentingModalViewController; 
+(id)cellIdentifierForClass:(Class)arg1 ;
+(id)cellIdentifierForEditingProperty:(id)arg1 ;
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)sender:(id)arg1 presentViewController:(id)arg2 ;
-(void)sender:(id)arg1 dismissViewController:(id)arg2 ;
-(void)registerContactCellClass:(Class)arg1 ;
-(void)propertyCellDidChangeLayout:(id)arg1 ;
-(void)setCurrentPresentedViewController:(UIViewController *)arg1 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3 ;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3 ;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3 ;
-(id)storeForPropertyCell:(id)arg1 ;
-(id)defaultValueForPropertyCell:(id)arg1 ;
-(UIViewController *)currentPresentedViewController;
-(BOOL)isPresentingModalViewController;
-(void)_rebuildPropertyGroupItems:(BOOL)arg1 ;
-(void)_startEditingFirstCell;
-(void)validateContents;
-(id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(BOOL)arg3 ;
@end

