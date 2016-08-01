/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UISelectionGrabberDot, UITextRangeView;

@interface UISelectionGrabber : UIView {

	UISelectionGrabberDot* m_dotView;
	BOOL m_isDotted;
	BOOL m_activeFlattened;
	BOOL m_alertFlattened;
	BOOL m_navigationTransitionFlattened;
	BOOL m_animating;
	long long m_orientation;
	int _applicationDeactivationReason;

}

@property (assign,nonatomic) BOOL isDotted; 
@property (assign,nonatomic) BOOL activeFlattened; 
@property (assign,nonatomic) BOOL alertFlattened; 
@property (assign,nonatomic) BOOL navigationTransitionFlattened; 
@property (assign,nonatomic) BOOL animating; 
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,readonly) UITextRangeView * hostView; 
+(id)_grabberDot;
-(id)_dotView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(BOOL)isRotating;
-(void)didMoveToSuperview;
-(void)setAnimating:(BOOL)arg1 ;
-(UITextRangeView *)hostView;
-(BOOL)animating;
-(BOOL)autoscrolled;
-(void)updateDot;
-(BOOL)isVertical;
-(void)setIsDotted:(BOOL)arg1 ;
-(void)transitionDot:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isScrolling;
-(BOOL)inputViewIsChanging;
-(BOOL)isPointedDown;
-(BOOL)isPointedUp;
-(BOOL)isPointedRight;
-(BOOL)isPointedLeft;
-(void)mustFlattenForAlert:(id)arg1 ;
-(void)canExpandAfterAlert:(id)arg1 ;
-(void)saveDeactivationReason:(id)arg1 ;
-(void)mustFlattenForResignActive:(id)arg1 ;
-(void)canExpandAfterBecomeActive:(id)arg1 ;
-(void)mustFlattenForNavigationTransition:(id)arg1 ;
-(void)canExpandAfterNavigationTransition:(id)arg1 ;
-(void)setAlertFlattened:(BOOL)arg1 ;
-(void)setActiveFlattened:(BOOL)arg1 ;
-(void)setNavigationTransitionFlattened:(BOOL)arg1 ;
-(BOOL)isDotted;
-(BOOL)alertFlattened;
-(BOOL)activeFlattened;
-(BOOL)navigationTransitionFlattened;
-(BOOL)dotIsVisibleInDocument:(CGRect)arg1 ;
-(BOOL)clipDot:(CGRect)arg1 ;
-(BOOL)isScaling;
-(BOOL)scroller:(id)arg1 fullyContainSelectionRect:(CGRect)arg2 ;
-(void)animateGrabberInWithCompletion:(/*^block*/id)arg1 ;
-(void)animateGrabberOutWithCompletion:(/*^block*/id)arg1 ;
@end

