/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSearchModelDelegate.h>
#import <libobjc.A.dylib/PSSearchModelDataSource.h>
#import <libobjc.A.dylib/PSSearchResultsControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchControllerDelegate.h>

@protocol PSSearchControllerDelegate;
@class UISearchController, PSSearchResultsController, PSListController, UISearchBar, NSString;

@interface PSSearchController : NSObject <PSSearchModelDelegate, PSSearchModelDataSource, PSSearchResultsControllerDelegate, UISearchResultsUpdating, UISearchControllerDelegate> {

	UISearchController* _searchController;
	PSSearchResultsController* _resultsController;
	BOOL _searchEnabled;
	int _notifyToken;
	PSListController* _listController;
	id<PSSearchControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UISearchBar * searchBar; 
@property (nonatomic,__weak,readonly) PSListController * listController;                  //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic,__weak) id<PSSearchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PSSearchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PSSearchControllerDelegate>)delegate;
-(BOOL)isActive;
-(UISearchBar *)searchBar;
-(void)setActive:(BOOL)arg1 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)initWithListController:(id)arg1 ;
-(id)rootSpecifiersForSearchModel:(id)arg1 ;
-(Class)rootSearchControllerClassForSearchModel:(id)arg1 ;
-(void)searchModel:(id)arg1 updatedWithNewResults:(id)arg2 forQuery:(id)arg3 ;
-(void)searchModelWillBeginIndexing:(id)arg1 ;
-(void)searchModelDidFinishIndexing:(id)arg1 ;
-(void)_reloadSettings:(BOOL)arg1 ;
-(void)_buildSearchUIIfNecessary;
-(BOOL)_setBoolValue:(BOOL)arg1 forIvar:(BOOL*)arg2 ;
-(void)_updateListControllerHeaderView:(BOOL)arg1 ;
-(void)_updateSearchResultsWithText:(id)arg1 ;
-(void)searchResultsController:(id)arg1 didSelectSearchEntry:(id)arg2 ;
-(BOOL)searchResultsController:(id)arg1 shouldShowSwitchForSearchEntry:(id)arg2 ;
-(id)searchResultsController:(id)arg1 switchActionForSearchEntry:(id)arg2 ;
-(id)searchResultsController:(id)arg1 iconForSearchEntry:(id)arg2 ;
-(void)setSearchBarVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)activateWithInitialText:(id)arg1 animated:(BOOL)arg2 ;
-(void)addRootSpecifiers:(id)arg1 ;
-(void)reloadRootSpecifiers:(id)arg1 ;
-(void)removeRootSpecifiers:(id)arg1 ;
-(PSListController *)listController;
@end

