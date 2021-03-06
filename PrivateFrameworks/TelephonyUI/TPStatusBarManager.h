/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUStatusBarManagerDelegate.h>

@class TUStatusBarManager, NSString;

@interface TPStatusBarManager : NSObject <TUStatusBarManagerDelegate> {

	BOOL _styleOverridesEnabled;
	int _previousStyleOverrides;
	TUStatusBarManager* _statusBarManager;
	long long _previousStyle;

}

@property (nonatomic,retain,readonly) NSString * currentStatusBarString; 
@property (nonatomic,retain,readonly) NSString * currentAbbreviatedStatusBarString; 
@property (nonatomic,retain) TUStatusBarManager * statusBarManager;                              //@synthesize statusBarManager=_statusBarManager - In the implementation block
@property (assign,nonatomic) long long previousStyle;                                            //@synthesize previousStyle=_previousStyle - In the implementation block
@property (assign,nonatomic) int previousStyleOverrides;                                         //@synthesize previousStyleOverrides=_previousStyleOverrides - In the implementation block
@property (assign,nonatomic) BOOL styleOverridesEnabled;                                         //@synthesize styleOverridesEnabled=_styleOverridesEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(long long)previousStyle;
-(void)setPreviousStyle:(long long)arg1 ;
-(int)currentStatusBarStyleOverridesForStatusBarManager:(id)arg1 ;
-(NSString *)currentStatusBarString;
-(void)statusBarManager:(id)arg1 setDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3 ;
-(void)clearStatusBarInCallStateForStatusBarManager:(id)arg1 ;
-(void)statusBarManager:(id)arg1 setStyleOverrides:(int)arg2 ;
-(NSString *)currentAbbreviatedStatusBarString;
-(void)setStyleOverridesEnabled:(BOOL)arg1 ;
-(TUStatusBarManager *)statusBarManager;
-(int)previousStyleOverrides;
-(void)setPreviousStyleOverrides:(int)arg1 ;
-(BOOL)styleOverridesEnabled;
-(void)setStatusBarManager:(TUStatusBarManager *)arg1 ;
@end

