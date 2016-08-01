/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ICCameraDevice.h>

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice {

	void* _ptpCameraProperties;

}

@property (readonly) PTPInitiator * initiator; 
-(void)dealloc;
-(PTPInitiator *)initiator;
-(void)enumerateContent;
-(BOOL)eject;
-(id)initWithUSBLocationID:(unsigned)arg1 ;
-(id)initWithTCPIPInfo:(id)arg1 ;
-(void)addToEventHandlerQ:(id)arg1 ;
-(void)finalize;
@end

