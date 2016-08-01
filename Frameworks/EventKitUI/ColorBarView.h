/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface ColorBarView : UIView {

	BOOL _dashedLines;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;               //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL dashedLines;              //@synthesize dashedLines=_dashedLines - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setDashedLines:(BOOL)arg1 ;
-(BOOL)dashedLines;
@end

