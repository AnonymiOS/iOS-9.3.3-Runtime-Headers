/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactListViewController.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>

@class CNStarkNoContentBannerView, AVExternalDevice, NSString;

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactListViewControllerDelegate, CNContactContentViewControllerDelegate> {

	BOOL _limitedUI;
	CNStarkNoContentBannerView* _overlayView;
	AVExternalDevice* _externalDevice;

}

@property (nonatomic,retain) CNStarkNoContentBannerView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) AVExternalDevice * externalDevice;                     //@synthesize externalDevice=_externalDevice - In the implementation block
@property (assign,nonatomic) BOOL limitedUI;                                        //@synthesize limitedUI=_limitedUI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)limitedUI;
-(void)limitedUINotification:(id)arg1 ;
-(AVExternalDevice *)externalDevice;
-(void)setLimitedUI:(BOOL)arg1 ;
-(void)updateLimitedUI;
-(void)postMessageOverlayIfNecessary;
-(BOOL)contactListViewController:(id)arg1 canSelectContact:(id)arg2 ;
-(void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)setExternalDevice:(AVExternalDevice *)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
-(void)setOverlayView:(CNStarkNoContentBannerView *)arg1 ;
-(CNStarkNoContentBannerView *)overlayView;
@end

