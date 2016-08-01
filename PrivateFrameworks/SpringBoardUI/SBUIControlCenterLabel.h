/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UILabel.h>
#import <libobjc.A.dylib/SBUIControlCenterControl.h>

@class NSString;

@interface SBUIControlCenterLabel : UILabel <SBUIControlCenterControl>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(long long)_currentState;
-(void)controlAppearanceDidChangeForState:(long long)arg1 ;
-(void)controlConfigurationDidChangeForState:(long long)arg1 ;
-(void)_updateAttributedText;
@end

