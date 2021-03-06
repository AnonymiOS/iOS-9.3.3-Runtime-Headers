/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMExpandableMenuButton.h>

@class UIImageView, NSArray;

@interface CAMHDRButton : CAMExpandableMenuButton {

	BOOL _allowsAutomaticHDR;
	BOOL _allowsHDROn;
	UIImageView* __glyphView;
	NSArray* __allowedModes;

}

@property (assign,nonatomic) long long HDRMode; 
@property (assign,nonatomic) BOOL allowsAutomaticHDR;                                     //@synthesize allowsAutomaticHDR=_allowsAutomaticHDR - In the implementation block
@property (assign,nonatomic) BOOL allowsHDROn;                                            //@synthesize allowsHDROn=_allowsHDROn - In the implementation block
@property (nonatomic,readonly) UIImageView * _glyphView;                                  //@synthesize _glyphView=__glyphView - In the implementation block
@property (setter=_setAllowedModes:,nonatomic,copy) NSArray * _allowedModes;              //@synthesize _allowedModes=__allowedModes - In the implementation block
-(void)reloadData;
-(id)headerView;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(void)setExpansionOrientation:(long long)arg1 ;
-(long long)HDRMode;
-(id)initWithExpansionOrientation:(long long)arg1 ;
-(void)setAllowsAutomaticHDR:(BOOL)arg1 ;
-(void)setAllowsHDROn:(BOOL)arg1 ;
-(UIImageView *)_glyphView;
-(id)hiddenIndexesWhileCollapsed;
-(long long)modeForIndex:(long long)arg1 ;
-(unsigned long long)indexForMode:(long long)arg1 ;
-(void)_updateCurrentGlyphImage;
-(id)_currentGlyphImage;
-(BOOL)shouldAllowExpansion;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(void)_updateAllowedModes;
-(void)_commonCAMHDRButtonInitialization;
-(void)_updateFromAllowedModesChangeWithCurrentMode:(long long)arg1 ;
-(BOOL)allowsAutomaticHDR;
-(BOOL)allowsHDROn;
-(void)_setAllowedModes:(id)arg1 ;
-(NSArray *)_allowedModes;
@end

