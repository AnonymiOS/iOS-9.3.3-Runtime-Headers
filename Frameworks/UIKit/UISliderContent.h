/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface UISliderContent : NSObject {

	UIImage* _thumb;
	UIImage* _minTrack;
	UIImage* _maxTrack;

}

@property (nonatomic,retain) UIImage * thumb;                 //@synthesize thumb=_thumb - In the implementation block
@property (nonatomic,retain) UIImage * minTrack;              //@synthesize minTrack=_minTrack - In the implementation block
@property (nonatomic,retain) UIImage * maxTrack;              //@synthesize maxTrack=_maxTrack - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
-(BOOL)isEmpty;
-(UIImage *)thumb;
-(void)setThumb:(UIImage *)arg1 ;
-(UIImage *)minTrack;
-(void)setMinTrack:(UIImage *)arg1 ;
-(UIImage *)maxTrack;
-(void)setMaxTrack:(UIImage *)arg1 ;
@end

