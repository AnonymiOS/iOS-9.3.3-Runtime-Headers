/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/ICDevice.h>

@class NSArray, NSString;

@interface ICCameraDevice : ICDevice {

	void* _cameraProperties;

}

@property (assign) unsigned long long estimatedNumberOfDownloadableItems; 
@property (assign) unsigned long long contentCatalogPercentCompleted; 
@property (getter=isEjectable) BOOL ejectable; 
@property (getter=isLocked) BOOL locked; 
@property (assign) BOOL allowsSyncingClock; 
@property (readonly) NSArray * mediaFiles; 
@property (readonly) BOOL batteryLevelAvailable; 
@property (readonly) unsigned long long batteryLevel; 
@property (readonly) double timeOffset; 
@property (assign) unsigned long long numberOfDownloadableItems; 
@property (getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice; 
@property (readonly) NSArray * notifyArray; 
@property (readonly) NSArray * contents; 
@property (copy) NSString * volumePath; 
@property (assign) BOOL beingEjected; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isLocked;
-(NSArray *)contents;
-(double)timeOffset;
-(void)setLocked:(BOOL)arg1 ;
-(unsigned long long)batteryLevel;
-(void)requestCloseSession;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(void)setVolumePath:(NSString *)arg1 ;
-(NSString *)volumePath;
-(void)setEjectable:(BOOL)arg1 ;
-(BOOL)beingEjected;
-(void)setBeingEjected:(BOOL)arg1 ;
-(NSArray *)notifyArray;
-(BOOL)allowsSyncingClock;
-(void)setAllowsSyncingClock:(BOOL)arg1 ;
-(void)setContentCatalogPercentCompleted:(unsigned long long)arg1 ;
-(BOOL)batteryLevelAvailable;
-(void)setEstimatedNumberOfDownloadableItems:(unsigned long long)arg1 ;
-(unsigned long long)numberOfDownloadableItems;
-(void)setNumberOfDownloadableItems:(unsigned long long)arg1 ;
-(double)downloadCancelTimestamp;
-(id)generalQ;
-(id)deviceQSemaphore;
-(void)setAccessRestrictedAppleDevice:(BOOL)arg1 ;
-(BOOL)isAccessRestrictedAppleDevice;
-(void)receivedDeviceCommandCompletion;
-(void)decrementNumberOfDownloadableItems;
-(void)decrementEstimatedNumberOfDownloadableItems;
-(void)incrementEstimatedNumberOfDownloadableItems;
-(void)incrementNumberOfDownloadableItems;
-(void)addFolder:(id)arg1 ;
-(BOOL)isEjectable;
-(void)addObjectToNotifyArray:(id)arg1 ;
-(void)clearNotifyArray;
-(void)notifyDelegateOfAddedItem:(id)arg1 ;
-(void)notifyDelegateOfAddedItems:(id)arg1 ;
-(void)pendNotifyingDelegateOfAddedItem:(id)arg1 ;
-(id)filesOfType:(id)arg1 ;
-(void)requestSyncClock;
-(void)removeFolder:(id)arg1 ;
-(void)addToThumbnailFetchQ:(id)arg1 ;
-(void)addToMetadataFetchQ:(id)arg1 ;
-(void)requestEject;
-(unsigned long long)estimatedNumberOfDownloadableItems;
-(unsigned long long)contentCatalogPercentCompleted;
-(void)requestOpenSession;
-(void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)cancelDownload;
-(void)requestDeleteFiles:(id)arg1 ;
-(NSArray *)mediaFiles;
-(void)finalize;
@end

