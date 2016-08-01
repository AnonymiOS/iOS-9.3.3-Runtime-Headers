/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UITableView.h>
#import <libobjc.A.dylib/PTSHUDControl.h>

@class _UISettings, NSString;

@interface PTSSavedModeTableView : UITableView <PTSHUDControl> {

	int _alignment;
	_UISettings* _settings;
	NSString* _valueKeyPath;

}

@property (assign,nonatomic,__weak) _UISettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) NSString * valueKeyPath;                      //@synthesize valueKeyPath=_valueKeyPath - In the implementation block
@property (assign,nonatomic) int alignment;                              //@synthesize alignment=_alignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
+(CGRect)defaultFrame;
-(void)setAlignment:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(_UISettings *)settings;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(int)alignment;
-(void)setSettings:(_UISettings *)arg1 ;
-(void)setValueKeyPath:(NSString *)arg1 ;
-(NSString *)valueKeyPath;
@end

