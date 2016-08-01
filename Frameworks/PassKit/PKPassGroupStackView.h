/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIScrollView.h>
#import <libobjc.A.dylib/PKPassDeleteDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPassGroupViewDelegate.h>
#import <libobjc.A.dylib/PKPassDeleteHandler.h>

@protocol PKPassGroupStackViewDatasource;
@class PKPassGroupView, PKGroup, NSMutableArray, NSMutableDictionary, PKPGSVHeaderContext, PKReusablePassViewQueue, NSTimer, PKPaymentService, PKPassFooterView, PKPassthroughView, PKSecureElement, UIColor, PKPass, NSString;

@interface PKPassGroupStackView : UIScrollView <PKPassDeleteDelegate, PKPaymentServiceDelegate, PKPassGroupViewDelegate, PKPassDeleteHandler> {

	PKPassGroupView* _modallyPresentedGroupView;
	PKGroup* _modallyPresentedGroup;
	NSMutableArray* _passPileViews;
	unsigned long long _modalGroupIndex;
	long long _scrollingTestState;
	int _currentTestReps;
	long long _presentationState;
	NSMutableDictionary* _groupViewsByGroupID;
	PKPGSVHeaderContext* _paymentHeaderContext;
	PKPGSVHeaderContext* _passHeaderContext;
	SCD_Struct_PK5 _layoutState;
	/*^block*/id _transitionCanceller;
	long long _nextState;
	long long _priorState;
	NSMutableArray* _transitionCompletionHandlers;
	BOOL _hasSuspendedTransition;
	long long _suspendedNextState;
	NSMutableArray* _suspendedTransitionCompletionHandlers;
	BOOL _inPassthroughHitTest;
	PKReusablePassViewQueue* _reusableCardViewQueue;
	PKPassGroupView* _reorderedGroupView;
	unsigned long long _initialIndexOfReorderedGroup;
	unsigned long long _previousIndexOfReorderedGroup;
	CGPoint _reorderedGroupViewPositionInFrame;
	CGPoint _panningVelocity;
	NSTimer* _autoscrollTimer;
	struct {
		unsigned isReordering : 1;
		unsigned isReorderPeekCompensated : 1;
		unsigned hasScrolledUp : 1;
		unsigned hasScrolledDown : 1;
	}  _reorderingFlags;
	NSMutableArray* _reorderActions;
	unsigned long long _reorderActionTag;
	NSMutableDictionary* _groupViewsInFlightByGroupID;
	unsigned _userInteractionCounter;
	NSMutableDictionary* _animatorsByGroupID;
	PKPaymentService* _paymentService;
	PKPassFooterView* _passFooterView;
	BOOL _showingFooter;
	PKPassthroughView* _headerContainerView;
	PKPassthroughView* _subheaderContainerView;
	PKPassthroughView* _passContainerView;
	NSMutableArray* _passthroughViews;
	PKSecureElement* _secureElement;
	BOOL _footerSuppressed;
	id<PKPassGroupStackViewDatasource> _datasource;
	UIColor* _pageIndicatorTintColor;
	UIColor* _currentPageIndicatorTintColor;

}

@property (assign,nonatomic) id<PKPassGroupStackViewDelegate><UIScrollViewDelegate> delegate; 
@property (assign,nonatomic) id<PKPassGroupStackViewDatasource> datasource;                                //@synthesize datasource=_datasource - In the implementation block
@property (assign,nonatomic) long long presentationState;                                                  //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic) unsigned long long modalGroupIndex;                                           //@synthesize modalGroupIndex=_modalGroupIndex - In the implementation block
@property (assign,nonatomic) BOOL footerSuppressed;                                                        //@synthesize footerSuppressed=_footerSuppressed - In the implementation block
@property (assign,nonatomic) BOOL pileSuppressed; 
@property (nonatomic,readonly) PKPass * modalGroupFrontmostPass; 
@property (nonatomic,readonly) BOOL isReordering; 
@property (nonatomic,readonly) BOOL isPresentingPassViewFront; 
@property (nonatomic,readonly) double pileHeight; 
@property (nonatomic,readonly) BOOL isModallyPresentedPassAuthorized; 
@property (assign,nonatomic) UIColor * pageIndicatorTintColor;                                             //@synthesize pageIndicatorTintColor=_pageIndicatorTintColor - In the implementation block
@property (assign,nonatomic) UIColor * currentPageIndicatorTintColor;                                      //@synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)noteDidEndScrollingForTesting;
-(void)scrollUpTest;
-(void)scrollDownTest;
-(void)scrollNext;
-(void)testGroupSelection;
-(void)testGoModal;
-(void)testFlipToFront;
-(void)testFlipToBack;
-(void)beginScrollCardListTest;
-(void)beginSelectCardTest;
-(void)beginFlipCardTest;
-(void)gotoBaseTestState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)reloadData;
-(void)layoutSubviews;
-(CGSize)_contentSize;
-(void)_stopAutoscrollTimer;
-(void)_autoscrollForReordering:(id)arg1 ;
-(void)setCurrentPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)setPageIndicatorTintColor:(UIColor *)arg1 ;
-(UIColor *)currentPageIndicatorTintColor;
-(UIColor *)pageIndicatorTintColor;
-(void)setDatasource:(id<PKPassGroupStackViewDatasource>)arg1 ;
-(id<PKPassGroupStackViewDatasource>)datasource;
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2 ;
-(void)presentDiff:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFooterSuppressed:(BOOL)arg1 ;
-(void)tilePassesEagerly:(BOOL)arg1 ;
-(void)setModalGroupIndex:(unsigned long long)arg1 ;
-(PKPass *)modalGroupFrontmostPass;
-(BOOL)isPresentingPassViewFront;
-(void)layoutContentForCurrentPresentationState:(BOOL)arg1 ;
-(BOOL)isReordering;
-(void)stageGroupInPresentationState:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setPresentationState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)deleteGroup:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(unsigned long long)modalGroupIndex;
-(void)setPresentationState:(long long)arg1 context:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)isModallyPresentedPassAuthorized;
-(void)setPresentationState:(long long)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)subheaderForPassType:(unsigned long long)arg1 ;
-(id)headerForPassType:(unsigned long long)arg1 ;
-(void)setPileSuppressed:(BOOL)arg1 ;
-(void)setTableModalPresentationEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)presentPassWithUniqueID:(id)arg1 ;
-(void)updateHeaderAndSubheaderViewsIfNecessary;
-(void)_cancelTransition;
-(void)_cancelSuspendedTransition;
-(void)layoutHeadersAnimated:(BOOL)arg1 ;
-(SCD_Struct_PK6)_layoutStateForHeaderContextInTable:(id)arg1 withBounds:(CGRect)arg2 ;
-(double)_nativeYForGroupInTableAtIndex:(unsigned long long)arg1 ;
-(double)_groupCellHeight;
-(double)_transformedYForNativeYInTable:(double)arg1 withBounds:(CGRect)arg2 index:(unsigned long long)arg3 ;
-(BOOL)_isTableModalPresentation;
-(void)_resumeSuspendedTransition;
-(void)_transitionSuccessful:(BOOL)arg1 ;
-(BOOL)_recomputeLayoutState;
-(void)_updateHeaderState:(BOOL)arg1 ;
-(void)_setScrollEnabled:(BOOL)arg1 ;
-(void)_presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_tileGroupsForState:(long long)arg1 eager:(BOOL)arg2 ;
-(void)_presentGroupStackViewWithAnimation:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_loadModalGroupView;
-(void)_presentModalGroupView:(id)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_presentFlippedModalGroupView:(id)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_presentPassIngestionWithAnimation:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_presentPassIngestionAcceptanceWithAnimation:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updatePassFooterViewIfNecessaryWithContext:(id)arg1 becomeVisibleDelay:(double)arg2 ;
-(void)_updatePassFooterViewAnimated:(BOOL)arg1 ;
-(void)_layoutContentFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(NSRange)_rangeOfVisibleIndexes;
-(long long)_defaultContentModeForPresentationState:(long long)arg1 index:(unsigned long long)arg2 ;
-(id)_loadGroupViewAtIndex:(unsigned long long)arg1 forState:(long long)arg2 contentMode:(long long)arg3 cached:(BOOL*)arg4 ;
-(void)_arrangeGroups;
-(id)_frontmostPastViewForGroupIndex:(unsigned long long)arg1 ;
-(void)_cleanUpAnimatorForGroupView:(id)arg1 ;
-(id)_groupViewAtIndex:(unsigned long long)arg1 ;
-(void)_addPanGestureRecognizerToGroupView:(id)arg1 ;
-(unsigned long long)_lastIndex;
-(void)_removeGroupViewAsSubviewWithGroupID:(id)arg1 ;
-(void)setPresentationState:(long long)arg1 ;
-(NSRange)_rangeOfEagerLoadedIndexes;
-(void)_showPassFooterView:(BOOL)arg1 forPassView:(id)arg2 animated:(BOOL)arg3 delay:(double)arg4 completion:(/*^block*/id)arg5 ;
-(CGPoint)_positionForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3 ;
-(void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 ;
-(void)_enumerateLoadedGroupViews:(/*^block*/id)arg1 ;
-(id)_arrayOfStackedIndexes;
-(double)_maxYOfPassFrontFaceAtIndex:(unsigned long long)arg1 ;
-(double)_yPositionForGroupAtIndex:(unsigned long long)arg1 forState:(long long)arg2 ;
-(void)_updateTransformForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 ;
-(double)_xPositionForGroupView:(id)arg1 forState:(long long)arg2 ;
-(void)_updatePositionForGroupView:(id)arg1 toPosition:(CGPoint)arg2 withSpringFactory:(id)arg3 ;
-(unsigned long long)_indexOfGroupView:(id)arg1 ;
-(void)_updateGroupStateForGroupViewInStackPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateContentSizeAndLayout:(BOOL)arg1 forceUpdate:(BOOL)arg2 ;
-(id)_headerContextForPassType:(unsigned long long)arg1 ;
-(void)_updatePassFooterViewIfNecessaryAnimated:(BOOL)arg1 withBecomeVisibleDelay:(double)arg2 ;
-(double)_pileAscenderHeight;
-(double)_pileBaseHeight;
-(unsigned long long)_tablePresentationNumberOfCellsBeforeStacking;
-(void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(CATransform3D)_transformForGroupView:(id)arg1 forState:(long long)arg2 ;
-(BOOL)_tileSentinelGroup:(id)arg1 forState:(long long)arg2 withAlreadyTiledGroupIDs:(id)arg3 ;
-(id)_separatorGroup;
-(void)_layoutFooterAnimated:(BOOL)arg1 withAnimationDelay:(double)arg2 ;
-(id)_groupViewWithGroup:(id)arg1 ;
-(void)_setModalGroupView:(id)arg1 ;
-(CGPoint)_nativePositionForPositionInTable:(CGPoint)arg1 ;
-(unsigned long long)_indexForNativePositionInTable:(CGPoint)arg1 roundToClosestIndex:(BOOL)arg2 ;
-(unsigned long long)_startVisibleIndex;
-(double)_yForGroupInTableAtIndex:(unsigned long long)arg1 ;
-(long long)_edgeStylesObscuredByTopMiddleOfPassStyle:(long long)arg1 ;
-(long long)_edgeStylesObscuredByTopCornersOfPassStyle:(long long)arg1 ;
-(BOOL)_isGroupAtIndexInModalPile:(unsigned long long)arg1 ;
-(void)_removeMotionEffectsFromModalPile;
-(void)_removeDimmingFromPileWithAnimation:(BOOL)arg1 ;
-(double)_setupSpringFactory:(id)arg1 forPileAnimationToPresentationState:(long long)arg2 reverse:(BOOL)arg3 ;
-(void)_generateModalGroupPileWithVisibleIndexes:(NSRange)arg1 reservePlaceForModalGroup:(BOOL)arg2 ;
-(void)_fanAndPageGroupView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateGroupStateForGroupViewInModalPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(void)_addDimmingToPileWithAnimation:(BOOL)arg1 ;
-(void)_addMotionEffectsToModalPile;
-(BOOL)_shouldTablePresentationScroll;
-(void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(BOOL)_passEligibleForFooter:(id)arg1 ;
-(long long)_footerStateForPassView:(id)arg1 ;
-(BOOL)_canShowPassFooter;
-(void)_updatePassFooterViewWithContext:(id)arg1 ;
-(void)_showPassFooterView:(BOOL)arg1 forPassView:(id)arg2 context:(id)arg3 delay:(double)arg4 completion:(/*^block*/id)arg5 ;
-(CGRect)_frameForFooterViewForPassView:(id)arg1 ;
-(void)_handleModalGroupGesture:(id)arg1 ;
-(void)_beginGroupPanWithGestureRecognizer:(id)arg1 ;
-(id)_animatorForGestureRecognizer:(id)arg1 ;
-(void)_adjustPassFooterViewOpacityForYOffset:(double)arg1 ;
-(double)_yForGroupInModalPileWithModalGroupY:(double)arg1 ;
-(void)_endGroupPanWithGestureRecognizer:(id)arg1 ;
-(void)_suspendTransition;
-(double)_scaleForGroupView:(id)arg1 forState:(long long)arg2 ;
-(BOOL)_updateHeaderContext:(id*)arg1 toContext:(id)arg2 animated:(BOOL)arg3 ;
-(id)_groupViewAtIndexWhileEnsuringVisible:(unsigned long long)arg1 withContentMode:(long long)arg2 ;
-(double)_yForModallyPresentedGroup;
-(double)_yForGroupInModalPileAtIndex:(unsigned long long)arg1 ;
-(double)_yForGroupInPileAtIndex:(unsigned long long)arg1 ;
-(double)_yForGroupInOffscreenPileAtIndex:(unsigned long long)arg1 ;
-(double)_yForSingleGroupView:(id)arg1 ;
-(double)_yForModallyPresentedPaymentPassGroupView;
-(double)_yOffsetForModallyPresentedNFCPassGroupView;
-(double)pileHeight;
-(id)_firstHeaderContext;
-(unsigned long long)_maximumNumberOfVisiblePilePasses;
-(double)_pileSeparationHeight;
-(double)_pileAscenderHeightForGroupViewInPile:(id)arg1 ;
-(void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(double)_setupSpringFactoryForPileAnimations:(id)arg1 withMaximumAcceleration:(double)arg2 reverse:(BOOL)arg3 ;
-(void)_reorderPositionChangedForReorderedGroupViewWithVelocity:(CGPoint)arg1 ;
-(id)_groupBeforeSeparatorGroup;
-(unsigned long long)_indexForNativePositionInTable:(CGPoint)arg1 ;
-(unsigned long long)_indexOfReorderedGroupView;
-(void)_animateGroupViewAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 withAnchorView:(id)arg3 insertAbove:(BOOL)arg4 ;
-(void)_reverseEnumerateLoadedGroupViews:(/*^block*/id)arg1 ;
-(void)_adjustSeparationGroupAndPassViewsForReordering;
-(void)_autoscrollIfNecessary;
-(double)_setupSpringFactory:(id)arg1 forPileAnimationFromPresentationState:(long long)arg2 toPresentationState:(long long)arg3 reverse:(BOOL)arg4 ;
-(BOOL)_isModalPresentationAllowedForSingleGroup;
-(id)_sortedAscendingGroupViewIndexes;
-(id)_sortedDescendingGroupViewIndexes;
-(void)_disableScrollingAndNormalizeContentOffset;
-(void)_undoUserReorderWithReorderedGroupView:(id)arg1 ;
-(void)_animateGroupViewForUndo:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)_presentModalGroupViewPostAnimationActions;
-(void)_executeCompletionHandlers:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)_notifyDelegateOfStateChange:(BOOL)arg1 ;
-(BOOL)_isModalPresentationAllowed;
-(void)_setDefaultPaymentPassFromGroupView:(id)arg1 reorderedGroupView:(id)arg2 ;
-(BOOL)_isIngestingPass;
-(BOOL)pileSuppressed;
-(void)deleteSheet:(id)arg1 didComplete:(BOOL)arg2 ;
-(void)groupViewTapped:(id)arg1 ;
-(void)groupView:(id)arg1 didBeginShowingFontmostPassView:(id)arg2 ;
-(void)groupView:(id)arg1 didEndShowingFontmostPassView:(id)arg2 ;
-(BOOL)groupViewShouldAllowPanning:(id)arg1 ;
-(void)groupViewPanDidBegin:(id)arg1 ;
-(void)groupViewPanDidEnd:(id)arg1 ;
-(void)groupView:(id)arg1 panned:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(void)groupViewDidUpdatePageControlVisibility:(id)arg1 ;
-(BOOL)groupViewShouldAllowPassFlip:(id)arg1 ;
-(void)groupViewFrontPassDidFlip:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)groupViewShouldAllowPassResize:(id)arg1 ;
-(void)groupViewFrontPassDidResize:(id)arg1 animated:(BOOL)arg2 ;
-(void)groupView:(id)arg1 didUpdatePassView:(id)arg2 ;
-(void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2 ;
-(BOOL)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2 ;
-(void)groupView:(id)arg1 resizeButtonPressedForPass:(id)arg2 ;
-(void)groupView:(id)arg1 didScrollToPassView:(id)arg2 ;
-(BOOL)groupViewPassesGrowWhenFlipped:(id)arg1 ;
-(BOOL)groupViewPassesGrowCenteredWhenFlipped:(id)arg1 ;
-(unsigned long long)groupViewPassesSuppressedContent:(id)arg1 ;
-(id)groupViewReusablePassViewQueue:(id)arg1 ;
-(long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1 ;
-(CGRect)groupView:(id)arg1 targetPageControlFrameForProposedFrame:(CGRect)arg2 ;
-(void)reloadGroupViewAtIndex:(unsigned long long)arg1 ;
-(void)_updateContentSizeAndLayout:(BOOL)arg1 ;
-(unsigned long long)_tablePresentationNumberOfCellsBeforeHeaderHidden;
-(void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 ;
-(void)paymentDeviceDidEnterRestrictedMode;
-(void)paymentDeviceDidLeaveRestrictedMode;
-(void)paymentDeviceDidBecomeAvailable;
-(void)paymentDeviceDidBecomeUnavailable;
-(BOOL)footerSuppressed;
-(long long)presentationState;
@end

