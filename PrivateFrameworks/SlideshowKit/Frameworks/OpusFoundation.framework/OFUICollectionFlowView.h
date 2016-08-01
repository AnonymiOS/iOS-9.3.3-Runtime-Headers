/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKit/UICollectionView.h>
#import <libobjc.A.dylib/OFUIWindowDraggingDestination.h>
#import <libobjc.A.dylib/OFUIWindowDraggingAutoscroll.h>

@protocol OFUICollectionFlowViewDragging;
@class NSMutableArray, NSIndexPath, NSString;

@interface OFUICollectionFlowView : UICollectionView <OFUIWindowDraggingDestination, OFUIWindowDraggingAutoscroll> {

	id<OFUICollectionFlowViewDragging> _draggingDelegate;
	NSMutableArray* _draggingPasteboardTypes;
	BOOL _isDragging;
	BOOL _isAnimating;
	NSIndexPath* _draggingSelectionIndexPath;
	NSIndexPath* _draggingEmptyIndexPath;
	float _mergeRectInset;

}

@property (assign,nonatomic) id<OFUICollectionFlowViewDragging> draggingDelegate;              //@synthesize draggingDelegate=_draggingDelegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * draggingEmptyIndexPath;                             //@synthesize draggingEmptyIndexPath=_draggingEmptyIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * draggingSelectionIndexPath;                         //@synthesize draggingSelectionIndexPath=_draggingSelectionIndexPath - In the implementation block
@property (assign,nonatomic) float mergeRectInset;                                             //@synthesize mergeRectInset=_mergeRectInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)registerDraggingPasteboardType:(id)arg1 ;
-(void)unregisterAllDraggingPasteboardType;
-(id)draggingPasteboardTypes;
-(CGRect)draggingDestination:(id)arg1 originalFrameForItem:(id)arg2 ;
-(unsigned long long)draggingDestinationEntered:(id)arg1 ;
-(unsigned long long)draggingDestinationUpdated:(id)arg1 ;
-(void)draggingDestinationExited:(id)arg1 ;
-(BOOL)prepareForDragOperation:(id)arg1 ;
-(BOOL)performDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)draggingDestinationWillEnd:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)draggingDestinationEnded:(id)arg1 cancelled:(BOOL)arg2 ;
-(float)autoscrollDistance:(CGRect)arg1 ;
-(void)autoscroll:(float)arg1 ;
-(BOOL)canAutoscroll;
-(BOOL)isFrameVisible:(CGRect)arg1 ;
-(float)_autoscrollDistanceForProximityToEdge:(float)arg1 ;
-(id<OFUICollectionFlowViewDragging>)draggingDelegate;
-(void)setDraggingSelectionIndexPath:(NSIndexPath *)arg1 ;
-(void)setDraggingEmptyIndexPath:(id)arg1 session:(id)arg2 ;
-(void)_prepareDragging:(id)arg1 ;
-(void)_cleanupDragging:(id)arg1 ;
-(void)setDraggingEmptyIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)draggingSelectionIndexPath;
-(id)initWithFrame:(CGRect)arg1 collectionViewFlowLayout:(id)arg2 ;
-(void)setDraggingDelegate:(id<OFUICollectionFlowViewDragging>)arg1 ;
-(BOOL)_isFrameEntirelyVisible:(CGRect)arg1 ;
-(NSIndexPath *)draggingEmptyIndexPath;
-(float)mergeRectInset;
-(void)setMergeRectInset:(float)arg1 ;
@end

