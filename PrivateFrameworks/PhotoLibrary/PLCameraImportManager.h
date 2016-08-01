/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICDeviceBrowserDelegate.h>

@class ICDeviceBrowser, NSMutableArray, NSString;

@interface PLCameraImportManager : NSObject <ICDeviceBrowserDelegate> {

	ICDeviceBrowser* _deviceBrowser;
	NSMutableArray* _importers;
	NSMutableArray* _importersToEject;
	BOOL _wantsToStopListening;
	id _stopListeningCallbackTarget;
	SEL _stopListeningCallbackSelector;

}

@property (nonatomic,retain) NSMutableArray * importers;              //@synthesize importers=_importers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCameraImportManager;
-(void)dealloc;
-(id)init;
-(void)addImporter:(id)arg1 ;
-(void)_stopListening;
-(NSMutableArray *)importers;
-(void)removeImporter:(id)arg1 ;
-(void)_cameraImporterDidFinishImporting:(id)arg1 ;
-(id)importerMatchingDevice:(id)arg1 ;
-(void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(BOOL)arg3 ;
-(unsigned long long)startListening;
-(void)stopListening;
-(void)stopListeningWithCallbackTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)ejectCameras;
-(void)setImporters:(NSMutableArray *)arg1 ;
-(id)importerForDevice:(id)arg1 withDelegate:(id)arg2 ;
@end

