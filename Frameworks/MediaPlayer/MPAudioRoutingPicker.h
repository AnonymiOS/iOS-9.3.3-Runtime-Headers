/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MPAVRoutingController, NSArray, NSString;

@interface MPAudioRoutingPicker : UIAlertView <MPAVRoutingControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	MPAVRoutingController* _routingController;
	BOOL _ignoringInteractionEvents;
	NSArray* _routes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(BOOL)requiresPortraitOrientation;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(id)initWithAVPlayer:(id)arg1 ;
-(BOOL)_pickRouteAtIndex:(unsigned long long)arg1 withPassword:(id)arg2 ;
-(void)setAVPlayer:(id)arg1 ;
@end

