/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/MusicEntityHorizontalLockupViewDelegate.h>
#import <libobjc.A.dylib/MusicEntityContentDescriptorViewConfiguring.h>
#import <libobjc.A.dylib/MusicEntityViewDownloadInformationObserving.h>
#import <libobjc.A.dylib/MusicEntityViewPlaybackStatusObserving.h>

@class MusicEntityHorizontalLockupView, MusicEntityViewContentDescriptor, NSString;

@interface MusicEntityHorizontalLockupTableViewCell : UITableViewCell <MusicEntityHorizontalLockupViewDelegate, MusicEntityContentDescriptorViewConfiguring, MusicEntityViewDownloadInformationObserving, MusicEntityViewPlaybackStatusObserving> {

	MusicEntityHorizontalLockupView* _lockupView;
	BOOL _entityDisabled;

}

@property (assign,getter=isEntityDisabled,nonatomic) BOOL entityDisabled;                       //@synthesize entityDisabled=_entityDisabled - In the implementation block
@property (nonatomic,retain) id<MusicEntityValueProviding> entityValueProvider; 
@property (nonatomic,retain) MusicEntityViewContentDescriptor * contentDescriptor; 
@property (nonatomic,readonly) MusicEntityHorizontalLockupView * lockupView;                    //@synthesize lockupView=_lockupView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3 ;
+(Class)horizontalLockupViewClass;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)setEntityValueProvider:(id<MusicEntityValueProviding>)arg1 ;
-(id<MusicEntityValueProviding>)entityValueProvider;
-(void)setEntityDisabled:(BOOL)arg1 ;
-(void)updateForAsynchronousPropertyLoadCompleted;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(void)setContentDescriptor:(MusicEntityViewContentDescriptor *)arg1 ;
-(void)setDownloadInformation:(MusicEntityDownloadInformation)arg1 ;
-(void)setPlaybackStatus:(id)arg1 ;
-(void)horizontalLockupViewDidSelectContextualActionsButton:(id)arg1 ;
-(void)horizontalLockupViewDidSelectAddButton:(id)arg1 events:(unsigned long long)arg2 ;
-(void)horizontalLockupViewDidLayoutSubviews:(id)arg1 ;
-(void)horizontalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned long long)arg2 ;
-(BOOL)horizontalLockupViewShouldLayoutAsEditing:(id)arg1 ;
-(BOOL)isEntityDisabled;
-(MusicEntityHorizontalLockupView *)lockupView;
-(void)_updateLockupViewBackgroundColor;
-(void)_updateHighlightStateAnimated:(BOOL)arg1 ;
-(void)_updateDisclosureIndicator;
@end

