/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIScreenBasedObject.h>

@class UIScreen, NSDictionary, NSString;

@interface UITextEffectsHostingInfo : NSObject <_UIScreenBasedObject> {

	unsigned long long _hostedUseCount;
	UIScreen* _screen;
	NSDictionary* _perScreenOptions;

}

@property (nonatomic,retain) UIScreen * screen;                            //@synthesize screen=_screen - In the implementation block
@property (assign,nonatomic) BOOL useHostedInstance; 
@property (nonatomic,retain) NSDictionary * perScreenOptions;              //@synthesize perScreenOptions=_perScreenOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
+(id)hostingInfoForScreen:(id)arg1 ;
-(UIScreen *)screen;
-(void)setScreen:(UIScreen *)arg1 ;
-(NSDictionary *)_options;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(UIScreen *)_intendedScreen;
-(BOOL)useHostedInstance;
-(void)setUseHostedInstance:(BOOL)arg1 ;
-(NSDictionary *)perScreenOptions;
-(void)setPerScreenOptions:(NSDictionary *)arg1 ;
@end

