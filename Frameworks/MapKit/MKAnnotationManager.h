/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:03 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, MKAnnotation;
#import <MapKit/MapKit-Structs.h>
@class NSTimer, MKQuadTrie, NSMutableSet, NSMapTable, NSArray;

@interface MKAnnotationManager : NSObject {

	id<MKAnnotationMarkerContainer> _container;
	id<MKAnnotationManagerDelegate> _delegate;
	BOOL _annotationRepresentationsAreAddedImmediately;
	NSTimer* _updateVisibleTimer;
	MKQuadTrie* _annotations;
	NSMutableSet* _visibleAnnotations;
	NSMutableSet* _pendingAnnotations;
	NSMutableSet* _disallowAnimationAnnotations;
	NSMutableSet* _invalidCoordinateAnnotations;
	id<MKAnnotation> _selectedAnnotation;
	id<MKAnnotation> _draggedAnnotation;
	NSMapTable* _annotationsToRepresentations;
	NSMutableSet* _annotationRepresentations;
	NSMapTable* _reusableAnnotationRepresentations;
	NSMutableSet* _managedAnnotations;
	NSMutableSet* _managedAnnotationsObservingCoordinate;
	BOOL _isChangingCoordinate;

}

@property (assign,nonatomic,__weak) id<MKAnnotationMarkerContainer> container;                                      //@synthesize container=_container - In the implementation block
@property (assign,nonatomic,__weak) id<MKAnnotationManagerDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL annotationRepresentationsAreAddedImmediately;                                     //@synthesize annotationRepresentationsAreAddedImmediately=_annotationRepresentationsAreAddedImmediately - In the implementation block
@property (assign,nonatomic,__weak) id<MKAnnotation> draggedAnnotation;                                             //@synthesize draggedAnnotation=_draggedAnnotation - In the implementation block
@property (nonatomic,__weak,readonly) id<MKAnnotationRepresentation> selectedAnnotationRepresentation; 
@property (nonatomic,readonly) NSArray * annotationRepresentations; 
@property (nonatomic,readonly) NSArray * annotations; 
-(void)setDelegate:(id<MKAnnotationManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MKAnnotationManagerDelegate>)delegate;
-(id<MKAnnotationMarkerContainer>)container;
-(void)setContainer:(id<MKAnnotationMarkerContainer>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(id)annotationsInMapRect:(SCD_Struct_MK10)arg1 ;
-(void)selectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(BOOL)annotationIsInternal:(id)arg1 ;
-(id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1 ;
-(void)cleanUpAnnotationRepresentationForRemoval:(id)arg1 ;
-(id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)internalAnnotationAllowsCustomRepresentation:(id)arg1 ;
-(void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(void)_setupUpdateVisibleAnnotationsTimer;
-(id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg1 ;
-(void)_addAnnotation:(id)arg1 updateVisible:(BOOL)arg2 ;
-(NSArray *)annotationRepresentations;
-(void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2 ;
-(id)_addRepresentationForAnnotation:(id)arg1 ;
-(void)addRepresentationsForAnnotations:(id)arg1 ;
-(void)addAnnotation:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(id<MKAnnotationRepresentation>)selectedAnnotationRepresentation;
-(BOOL)annotationRepresentationsAreAddedImmediately;
-(id)addRepresentationForManagedAnnotation:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(id)representationForAnnotation:(id)arg1 ;
-(id<MKAnnotation>)draggedAnnotation;
-(void)removeRepresentationForManagedAnnotation:(id)arg1 ;
-(void)setAnnotationRepresentationsAreAddedImmediately:(BOOL)arg1 ;
-(void)addManagedAnnotation:(id)arg1 observeCoordinateChanges:(BOOL)arg2 ;
-(void)addManagedAnnotation:(id)arg1 ;
-(void)_removeRepresentationForAnnotation:(id)arg1 fromCull:(BOOL)arg2 ;
-(void)_removeAnnotation:(id)arg1 updateVisible:(BOOL)arg2 removeFromContainer:(BOOL)arg3 ;
-(void)showAnnotationsInMapRect:(SCD_Struct_MK10)arg1 ;
-(void)setDraggedAnnotation:(id<MKAnnotation>)arg1 ;
-(void)selectAnnotation:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(void)updateVisibleAnnotations;
-(BOOL)containsAnnotation:(id)arg1 ;
-(NSArray *)annotations;
-(void)removeAnnotations:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
@end

