/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface PLVideoPosterFrameView : UIView {

	UIImageView* _imageView;
	unsigned long long _scaleMode;

}

@property (nonatomic,readonly) CGRect imageFrame; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)image;
-(id)imageView;
-(void)setScaleMode:(unsigned long long)arg1 ;
-(CGRect)imageFrame;
@end

