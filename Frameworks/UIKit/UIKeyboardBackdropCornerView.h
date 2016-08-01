/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface UIKeyboardBackdropCornerView : UIView {

	int _corners;
	double _radius;

}
-(void)drawInRect:(CGRect)arg1 ;
-(id)_generateBackdropMaskImage;
-(id)initWithFrame:(CGRect)arg1 withCorners:(int)arg2 ;
-(void)updateFrame:(CGRect)arg1 withCorners:(int)arg2 ;
@end
