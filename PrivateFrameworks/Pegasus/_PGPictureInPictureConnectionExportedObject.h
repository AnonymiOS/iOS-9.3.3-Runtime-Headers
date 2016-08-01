/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <libobjc.A.dylib/PGPictureInPictureExportedInterface.h>

@class PGPictureInPictureProxy, NSString;

@interface _PGPictureInPictureConnectionExportedObject : NSObject <PGPictureInPictureExportedInterface> {

	PGPictureInPictureProxy* _pictureInPictureProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(oneway void)pictureInPictureInterruptionBegan;
-(oneway void)pictureInPictureInterruptionEnded;
-(oneway void)pictureInPictureStartRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)pictureInPictureStopRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)pictureInPictureCancelRequestedAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(oneway void)updatePictureInPicturePossible:(BOOL)arg1 ;
-(oneway void)pictureInPictureSuspended;
-(oneway void)pictureInPictureResumed;
-(oneway void)pictureInPictureCancelled;
-(oneway void)updateHostedWindowSize:(CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4 ;
-(oneway void)hostedWindowSizeChangeBegan;
-(oneway void)hostedWindowSizeChangeEnded;
-(oneway void)controlsVisibilityChanged:(BOOL)arg1 animated:(BOOL)arg2 synchronizationFence:(id)arg3 ;
-(id)initWithPictureInPictureProxy:(id)arg1 ;
-(oneway void)actionButtonTapped;
@end

