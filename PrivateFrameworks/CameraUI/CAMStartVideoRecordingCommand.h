/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMVideoCaptureRequest;

@interface CAMStartVideoRecordingCommand : CAMCaptureCommand {

	CAMVideoCaptureRequest* __request;

}

@property (nonatomic,readonly) CAMVideoCaptureRequest * _request;              //@synthesize _request=__request - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(CAMVideoCaptureRequest *)_request;
-(void)executeWithContext:(id)arg1 ;
-(long long)_videoOrientationForCaptureOrientation:(long long)arg1 ;
@end

