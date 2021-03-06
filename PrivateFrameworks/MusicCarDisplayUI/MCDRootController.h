/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:47 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCDCarDisplayServiceProvider;
@class UIWindow, MCDBrowserViewController, MPAVController, RadioRecentStationsController;

@interface MCDRootController : NSObject {

	UIWindow* _carDisplayWindow;
	MCDBrowserViewController* _browserViewController;
	MPAVController* _player;
	id<MCDCarDisplayServiceProvider> _serviceProvider;

}

@property (nonatomic,retain) MPAVController * player;                                                      //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<MCDCarDisplayServiceProvider> serviceProvider;                      //@synthesize serviceProvider=_serviceProvider - In the implementation block
@property (nonatomic,readonly) UIWindow * carDisplayWindow;                                                //@synthesize carDisplayWindow=_carDisplayWindow - In the implementation block
@property (assign,nonatomic,__weak) RadioRecentStationsController * recentStationsController; 
-(void)dealloc;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
-(RadioRecentStationsController *)recentStationsController;
-(void)showNowPlaying:(BOOL)arg1 ;
-(void)setRecentStationsController:(RadioRecentStationsController *)arg1 ;
-(id)initWithScreen:(id)arg1 hostTabBarController:(id)arg2 ;
-(void)setServiceProvider:(id<MCDCarDisplayServiceProvider>)arg1 ;
-(UIWindow *)carDisplayWindow;
-(id<MCDCarDisplayServiceProvider>)serviceProvider;
-(void)reloadRadio;
@end

