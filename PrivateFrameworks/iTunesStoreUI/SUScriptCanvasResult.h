/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class UIImage;

@interface SUScriptCanvasResult : NSObject {

	UIImage* _image;
	CGPathRef _path;

}

@property (nonatomic,readonly) UIImage * canvasImage;              //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGPathRef canvasPath;               //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(UIImage *)canvasImage;
-(id)_initWithCanvas:(id)arg1 ;
-(CGPathRef)canvasPath;
@end
