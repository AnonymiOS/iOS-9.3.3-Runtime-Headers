/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVRecorder : NSObject {

	AVRecorderPrivate* _priv;

}
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(void)stop;
-(BOOL)start;
-(void)deactivate;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(void)implNotification:(id)arg1 ;
-(BOOL)activate:(id*)arg1 ;
-(void)makeError:(id*)arg1 withDescription:(id)arg2 code:(int)arg3 ;
-(float)micVolume;
-(void)setMicVolume:(float)arg1 ;
-(long long)recordedFileSizeInBytes;
-(unsigned long long)audioNumDeviceChannels;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 ;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2 ;
-(BOOL)takePhoto;
-(id)attributeForKey:(id)arg1 ;
-(BOOL)isRecording;
-(BOOL)autoFocusAtPoint:(CGPoint)arg1 ;
-(double)recordedDuration;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
@end

