/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ICPreviewDeviceContext : NSObject {

	NSArray* _deviceScales;
	NSArray* _scalableDeviceInfo;
	NSArray* _nonScalableDeviceInfo;

}

@property (readonly) NSArray * deviceScales; 
@property (copy) NSArray * scalableDeviceInfo;                 //@synthesize scalableDeviceInfo=_scalableDeviceInfo - In the implementation block
@property (copy) NSArray * nonScalableDeviceInfo;              //@synthesize nonScalableDeviceInfo=_nonScalableDeviceInfo - In the implementation block
+(id)sharedContext;
-(void)dealloc;
-(id)init;
-(id)deviceInfoScalable:(BOOL)arg1 ;
-(double)maxSizeOfPreviewDeviceInfoImage;
-(void)screensChangedNotification:(id)arg1 ;
-(NSArray *)scalableDeviceInfo;
-(void)setScalableDeviceInfo:(NSArray *)arg1 ;
-(NSArray *)nonScalableDeviceInfo;
-(void)setNonScalableDeviceInfo:(NSArray *)arg1 ;
-(NSArray *)deviceScales;
@end
