/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface CNTransportButton : UIButton {

	long long _transportType;
	UIColor* _glyphColor;
	UIImage* _image;

}

@property (assign,nonatomic) long long transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                 //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,retain) UIImage * image;                      //@synthesize image=_image - In the implementation block
+(id)transportButton;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(UIImage *)image;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(long long)transportType;
-(void)setTransportType:(long long)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(id)imageNameForType:(long long)arg1 ;
-(void)_updateImageWithType:(long long)arg1 ;
-(UIColor *)glyphColor;
@end

