/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADCharacterProperties.h>

@class OADBulletSize, OADBulletColor, OADBulletFont, OADBulletProperties, OADTextSpacing, NSArray;

@interface OADParagraphProperties : OADCharacterProperties {

	int mLevel;
	OADBulletSize* mBulletSize;
	OADBulletColor* mBulletColor;
	OADBulletFont* mBulletFont;
	OADBulletProperties* mBulletProperties;
	OADTextSpacing* mLineSpacing;
	OADTextSpacing* mBeforeSpacing;
	OADTextSpacing* mAfterSpacing;
	NSArray* mTabStops;
	float mLeftMargin;
	float mRightMargin;
	float mIndent;
	float mDefaultTab;
	int mBulletCharSet;
	unsigned char mAlign;
	unsigned char mWrap;
	unsigned char mFontAlign;
	unsigned mIsLatinLineBreak : 1;
	unsigned mIsHangingPunctuation : 1;
	unsigned mHasLevel : 1;
	unsigned mHasLeftMargin : 1;
	unsigned mHasRightMargin : 1;
	unsigned mHasIndent : 1;
	unsigned mHasDefaultTab : 1;
	unsigned mHasBulletCharSet : 1;
	unsigned mHasAlign : 1;
	unsigned mHasWrap : 1;
	unsigned mHasFontAlign : 1;
	unsigned mHasIsLatinLineBreak : 1;
	unsigned mHasIsHangingPunctuation : 1;

}
+(id)defaultProperties;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(void)setRightMargin:(float)arg1 ;
-(id)lineSpacing;
-(void)setLineSpacing:(id)arg1 ;
-(float)rightMargin;
-(BOOL)hasLevel;
-(float)leftMargin;
-(void)setLeftMargin:(float)arg1 ;
-(void)setAlign:(unsigned char)arg1 ;
-(void)setIndent:(float)arg1 ;
-(void)setBulletProperties:(id)arg1 ;
-(float)indent;
-(id)bulletProperties;
-(id)bulletSize;
-(double)nonOveridenLeftMargin;
-(BOOL)hasBulletSize;
-(BOOL)hasBulletFont;
-(id)bulletFont;
-(BOOL)hasBulletColor;
-(id)bulletColor;
-(BOOL)hasBulletProperties;
-(BOOL)hasAlign;
-(unsigned char)align;
-(BOOL)hasLeftMargin;
-(BOOL)hasIndent;
-(BOOL)hasLineSpacing;
-(BOOL)hasBeforeSpacing;
-(id)beforeSpacing;
-(BOOL)hasAfterSpacing;
-(id)afterSpacing;
-(void)setDefaultTab:(float)arg1 ;
-(void)setIsLatinLineBreak:(BOOL)arg1 ;
-(void)setIsHangingPunctuation:(BOOL)arg1 ;
-(void)setBeforeSpacing:(id)arg1 ;
-(void)setAfterSpacing:(id)arg1 ;
-(void)setBulletColor:(id)arg1 ;
-(void)setBulletSize:(id)arg1 ;
-(void)setBulletFont:(id)arg1 ;
-(void)setBulletCharSet:(int)arg1 ;
-(void)setTabStops:(id)arg1 ;
-(void)setFontAlign:(unsigned char)arg1 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(void)setWrap:(unsigned char)arg1 ;
-(BOOL)hasTabStops;
-(BOOL)hasRightMargin;
-(BOOL)hasDefaultTab;
-(BOOL)hasWrap;
-(BOOL)hasFontAlign;
-(BOOL)hasIsLatinLineBreak;
-(BOOL)hasIsHangingPunctuation;
-(BOOL)hasBulletCharSet;
-(id)tabStops;
-(float)defaultTab;
-(unsigned char)wrap;
-(unsigned char)fontAlign;
-(BOOL)isLatinLineBreak;
-(BOOL)isHangingPunctuation;
-(int)bulletCharSet;
-(void)overrideWithProperties:(id)arg1 ;
@end

