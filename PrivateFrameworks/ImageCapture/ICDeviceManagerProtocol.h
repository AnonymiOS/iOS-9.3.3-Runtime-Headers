/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDeviceManagerProtocol <NSObject>
@required
-(int)openSession:(id)arg1 contextInfo:(void*)arg2;
-(int)closeSession:(id)arg1 contextInfo:(void*)arg2;
-(int)syncClock:(id)arg1 contextInfo:(void*)arg2;
-(int)deleteFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
-(int)eject:(id)arg1;
-(int)downloadFile:(id)arg1 fromDevice:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4;
-(int)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
-(int)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
-(int)openDevice:(id)arg1 contextInfo:(void*)arg2;
-(int)closeDevice:(id)arg1 contextInfo:(void*)arg2;

@end

