/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseTableViewController.h>
#import <libobjc.A.dylib/MusicNoContentViewDelegate.h>

@class MusicNoContentView, NSOperationQueue, MusicEntityValueContext, NSArray, NSString;

@interface MusicAddToPlaylistBrowseTableViewController : MusicLibraryBrowseTableViewController <MusicNoContentViewDelegate> {

	MusicNoContentView* _noContentView;
	NSOperationQueue* _platformLookupQueue;
	MusicEntityValueContext* _prepopulatedItemsEntityValueContext;
	NSArray* _prepopulatedMediaItems;

}

@property (nonatomic,retain) MusicEntityValueContext * prepopulatedItemsEntityValueContext;              //@synthesize prepopulatedItemsEntityValueContext=_prepopulatedItemsEntityValueContext - In the implementation block
@property (nonatomic,retain) NSArray * prepopulatedMediaItems;                                           //@synthesize prepopulatedMediaItems=_prepopulatedMediaItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)noContentView;
-(id)initWithLibraryViewConfiguration:(id)arg1 ;
-(void)_updateNoContentViewVisibility;
-(void)noContentViewDidTapButton:(id)arg1 ;
-(void)handleEntityProviderDidInvalidate;
-(void)music_handleCreatePlaylistAction;
-(BOOL)_needsHeaderForSection:(long long)arg1 ;
-(void)_showNewPlaylistCreationFlow;
-(NSArray *)prepopulatedMediaItems;
-(MusicEntityValueContext *)prepopulatedItemsEntityValueContext;
-(void)_performBlockAfterDerivingPrepopulatedItems:(/*^block*/id)arg1 ;
-(void)setPrepopulatedItemsEntityValueContext:(MusicEntityValueContext *)arg1 ;
-(void)setPrepopulatedMediaItems:(NSArray *)arg1 ;
@end

