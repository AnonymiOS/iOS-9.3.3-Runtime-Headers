/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UILabel.h>

@class NSString;

@interface TwoPartTextLabel : UILabel {

	NSString* _secondTextPart;
	CGSize _part2Size;
	double _minPart2Width;
	BOOL _strikethroughPart1;
	BOOL _strikethroughPart2;

}

@property (assign,nonatomic) BOOL strikethroughPart1;              //@synthesize strikethroughPart1=_strikethroughPart1 - In the implementation block
@property (assign,nonatomic) BOOL strikethroughPart2;              //@synthesize strikethroughPart2=_strikethroughPart2 - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)hasTwoParts;
-(void)setTextPart1:(id)arg1 ;
-(double)rightmostDisplayedPartWidth;
-(void)setMinimumPart2Width:(double)arg1 ;
-(void)setTextPart1:(id)arg1 part2:(id)arg2 ;
-(void)setStrikethroughPart1:(BOOL)arg1 ;
-(void)setStrikethroughPart2:(BOOL)arg1 ;
-(CGSize)textPart2Size;
-(CGSize)idealSize;
-(BOOL)strikethroughPart1;
-(BOOL)strikethroughPart2;
@end

