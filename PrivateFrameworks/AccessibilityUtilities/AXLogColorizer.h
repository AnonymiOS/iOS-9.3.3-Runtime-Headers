/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@interface AXLogColorizer : NSObject {

	BOOL _active;
	BOOL _managedBySettings;
	BOOL _preferDarkColors;
	AXLogColorTheme _colorTheme;

}

@property (assign,nonatomic) AXLogColorTheme colorTheme;                                     //@synthesize colorTheme=_colorTheme - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL preferDarkColors;                                          //@synthesize preferDarkColors=_preferDarkColors - In the implementation block
@property (assign,getter=isManagedBySettings,nonatomic) BOOL managedBySettings;              //@synthesize managedBySettings=_managedBySettings - In the implementation block
+(id)defaultColorizer;
+(char*)ansiColorSeqForAXLogColor:(long long)arg1 ;
+(id)coloredString:(id)arg1 withColor:(long long)arg2 ;
+(AXLogColorTheme)defaultLightColorsTheme;
+(AXLogColorTheme)defaultDarkColorsTheme;
+(id)colorizeStringIfEnabled:(id)arg1 withColor:(long long)arg2 ;
-(id)init;
-(id)description;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(id)errorString:(id)arg1 ;
-(id)warningString:(id)arg1 ;
-(id)debugString:(id)arg1 ;
-(id)infoString:(id)arg1 ;
-(id)_initAndManageWithSettings:(BOOL)arg1 ;
-(void)setManagedBySettings:(BOOL)arg1 ;
-(void)_updateSettingsFromUserPrefs;
-(void)setColorTheme:(AXLogColorTheme)arg1 ;
-(void)setPreferDarkColors:(BOOL)arg1 ;
-(BOOL)isManagedBySettings;
-(BOOL)preferDarkColors;
-(AXLogColorTheme)colorTheme;
-(id)whiteOrBlackString:(id)arg1 ;
-(id)greyString:(id)arg1 ;
-(id)redString:(id)arg1 ;
-(id)greenString:(id)arg1 ;
-(id)yellowString:(id)arg1 ;
-(id)blueString:(id)arg1 ;
-(id)magentaString:(id)arg1 ;
-(id)cyanString:(id)arg1 ;
@end

