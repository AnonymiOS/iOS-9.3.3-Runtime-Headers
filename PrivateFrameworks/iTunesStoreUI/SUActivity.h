/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@protocol SUActivityDelegate;
@class UIImage, NSString, UIViewController;

@interface SUActivity : UIActivity {

	id<SUActivityDelegate> _delegate;
	UIImage* _suActivityImage;
	NSString* _suActivityTitle;
	NSString* _suActivityType;
	UIViewController* _suActivityViewController;

}

@property (assign,nonatomic,__weak) id<SUActivityDelegate> ITunesStoreDelegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)activityViewController;
-(void)setActivityViewController:(id)arg1 ;
-(void)setActivityType:(id)arg1 ;
-(void)setActivityTitle:(id)arg1 ;
-(void)setActivityImage:(id)arg1 ;
-(void)setITunesStoreDelegate:(id<SUActivityDelegate>)arg1 ;
-(id<SUActivityDelegate>)ITunesStoreDelegate;
@end

