/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MusicQuickActionsManager : NSObject {

	BOOL _supportsQuickActions;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)updateFeaturedRadioStationShortcut;
-(void)_prominentRadioStationDidChangeNotification:(id)arg1 ;
-(void)_updateShortcut:(id)arg1 ;
-(void)_removeShortcutWithType:(id)arg1 ;
-(id)_orderedShortcutTypes;
-(void)updateNowPlayingShortcutWithItem:(id)arg1 ;
-(void)updateSearchShortcut;
-(void)updateSiriShortcut;
@end

