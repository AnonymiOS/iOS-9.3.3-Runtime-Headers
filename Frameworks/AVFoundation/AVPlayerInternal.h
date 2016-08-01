/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCallbackCancellation, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVPropertyStorage, AVPixelBufferAttributeMediator, NSObject, AVAudioSessionMediaPlayerOnly, AVPlayerItem, NSMutableSet, NSArray, NSMutableDictionary, AVOutputContext, NSMutableArray, NSHashTable, NSError, NSString, NSDictionary;

@interface AVPlayerInternal : NSObject {

	AVWeakReference* weakReference;
	id<AVCallbackCancellation> currentItemSuppressesVideoLayersCallbackInvoker;
	id<AVCallbackCancellation> currentItemPreferredPixelBufferAttributesCallbackInvoker;
	AVPropertyStorage* propertyStorage;
	AVPixelBufferAttributeMediator* pixelBufferAttributeMediator;
	NSObject*<OS_dispatch_queue> stateDispatchQueue;
	NSObject*<OS_dispatch_queue> figConfigurationQueue;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	NSObject*<OS_dispatch_queue> currentItemPropertyUpdateQueue;
	NSObject*<OS_dispatch_queue> layersQ;
	OpaqueCMTimebaseRef proxyTimebase;
	BOOL logPerformanceData;
	AVAudioSessionMediaPlayerOnly* audioSessionMediaPlayerOnly;
	OpaqueFigSimpleMutexRef prerollIDMutex;
	AVPlayerItem* currentItem;
	AVPlayerItem* lastItem;
	NSMutableSet* items;
	NSArray* queueModifications;
	BOOL iapdExtendedModeIsActive;
	NSMutableDictionary* pendingFigPlayerProperties;
	AVOutputContext* outputContext;
	CFDictionaryRef videoLayers;
	NSMutableArray* subtitleLayers;
	NSMutableArray* closedCaptionLayers;
	NSHashTable* avPlayerLayers;
	int nextPrerollIDToGenerate;
	int pendingPrerollID;
	/*^block*/id prerollCompletionHandler;
	OpaqueFigPlayerRef figPlayer;
	long long status;
	NSError* error;
	OpaqueFigPlaybackItemRef figPlaybackItemToIdentifyNextCurrentItem;
	BOOL needsToCreateFigPlayer;
	NSString* externalPlaybackVideoGravity;
	NSDictionary* cachedFigMediaSelectionCriteriaProperty;
	NSArray* itemsInFigPlayQueue;
	NSArray* expectedAssetTypes;
	BOOL reevaluateBackgroundPlayback;
	BOOL hostApplicationInForeground;
	BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
	NSDictionary* vibrationPattern;
	OpaqueCMClockRef figMasterClock;
	BOOL autoSwitchStreamVariants;
	BOOL preparesItemsForPlaybackAsynchronously;
	BOOL allowsOutOfBandTextTrackRendering;
	CGSize cachedDisplaySize;
	BOOL shouldReduceResourceUsage;
	NSString* multichannelAudioStrategy;
	BOOL usesDedicatedNotificationQueueForMediaServices;
	CGSize dimensionsOfReservedVideoMemory;
	NSArray* displaysUsedForPlayback;

}
@end

