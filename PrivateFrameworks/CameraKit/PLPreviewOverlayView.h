/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class CMKCameraView;

@interface PLPreviewOverlayView : UIView {

	CMKCameraView* cameraView;

}

@property (assign,nonatomic) CMKCameraView * cameraView; 
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CMKCameraView *)cameraView;
-(void)setCameraView:(CMKCameraView *)arg1 ;
@end
