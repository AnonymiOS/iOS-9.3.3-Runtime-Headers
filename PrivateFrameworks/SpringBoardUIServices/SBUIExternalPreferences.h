/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface SBUIExternalPreferences : NSObject {

	NSUserDefaults* _soundDefaults;
	BOOL _keyboardPlaysSounds;

}

@property (assign,nonatomic) BOOL keyboardPlaysSounds;              //@synthesize keyboardPlaysSounds=_keyboardPlaysSounds - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)keyboardPlaysSounds;
-(void)setKeyboardPlaysSounds:(BOOL)arg1 ;
@end

