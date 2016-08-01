/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityValueContext.h>

@class NSString;

@interface MusicSectionEntityValueContext : MusicEntityValueContext {

	BOOL _wantsLocalizedTitle;
	NSString* _localizedTitle;

}

@property (assign,nonatomic) BOOL wantsLocalizedTitle;              //@synthesize wantsLocalizedTitle=_wantsLocalizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;               //@synthesize localizedTitle=_localizedTitle - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)resetOutputValues;
-(BOOL)wantsLocalizedTitle;
-(void)setWantsLocalizedTitle:(BOOL)arg1 ;
@end

