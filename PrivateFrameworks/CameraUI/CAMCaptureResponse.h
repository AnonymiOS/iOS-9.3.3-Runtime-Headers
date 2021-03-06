/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMCaptureResponse : NSObject {

	unsigned short _sessionIdentifier;
	long long _type;

}

@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(id)init;
-(unsigned short)sessionIdentifier;
-(long long)type;
-(id)initWithType:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(void)releaseCachedImages;
@end

