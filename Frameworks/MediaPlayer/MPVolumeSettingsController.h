/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString, UIAlertController, UIWindow;

@interface MPVolumeSettingsController : UIViewController {

	NSString* _audioCategory;
	UIAlertController* _alertController;
	UIWindow* _hostingWindow;
	UIWindow* _previousWindow;

}

@property (assign,nonatomic,__weak) UIWindow * hostingWindow;               //@synthesize hostingWindow=_hostingWindow - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * previousWindow;              //@synthesize previousWindow=_previousWindow - In the implementation block
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithAudioCategory:(id)arg1 ;
-(void)presentAlertControllerInWindow:(id)arg1 ;
-(void)dismissAlertController;
-(void)_keyWindowDidChange:(id)arg1 ;
-(void)_flip;
-(UIWindow *)hostingWindow;
-(void)setHostingWindow:(UIWindow *)arg1 ;
-(UIWindow *)previousWindow;
-(void)setPreviousWindow:(UIWindow *)arg1 ;
@end

