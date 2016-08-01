/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIToolbar.h>

@class UIToolbar;

@interface PLToolbar : UIToolbar {

	unsigned _backgroundHidden : 1;
	unsigned _backgroundAlwaysVisible : 1;
	UIToolbar* _persistentToolbar;

}

@property (assign,getter=isBackgroundHidden,nonatomic) BOOL backgroundHidden; 
@property (assign,getter=isBackgroundAlwaysVisible,nonatomic) BOOL backgroundAlwaysVisible; 
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)isBackgroundHidden;
-(void)setBackgroundHidden:(BOOL)arg1 ;
-(BOOL)isBackgroundAlwaysVisible;
-(void)setBackgroundAlwaysVisible:(BOOL)arg1 ;
@end

