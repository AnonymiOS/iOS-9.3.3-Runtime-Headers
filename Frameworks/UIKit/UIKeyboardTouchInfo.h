/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIKBTouchState, UIKBTree;

@interface UIKeyboardTouchInfo : NSObject {

	UIKBTouchState* _touch;
	UIKBTree* _key;
	UIKBTree* _keyplane;
	UIKBTree* _slidOffKey;
	CGPoint _initialPoint;
	CGPoint _initialDragPoint;
	BOOL _dragged;
	int _stage;
	BOOL _maySuppressUpAction;
	int _initialKeyState;

}

@property (nonatomic,retain) UIKBTouchState * touch;                //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UIKBTree * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) UIKBTree * keyplane;                   //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,retain) UIKBTree * slidOffKey;                 //@synthesize slidOffKey=_slidOffKey - In the implementation block
@property (assign,nonatomic) CGPoint initialPoint;                  //@synthesize initialPoint=_initialPoint - In the implementation block
@property (assign,nonatomic) CGPoint initialDragPoint;              //@synthesize initialDragPoint=_initialDragPoint - In the implementation block
@property (assign,nonatomic) BOOL dragged;                          //@synthesize dragged=_dragged - In the implementation block
@property (assign,nonatomic) int stage;                             //@synthesize stage=_stage - In the implementation block
@property (assign,nonatomic) BOOL maySuppressUpAction;              //@synthesize maySuppressUpAction=_maySuppressUpAction - In the implementation block
@property (assign,nonatomic) int initialKeyState;                   //@synthesize initialKeyState=_initialKeyState - In the implementation block
-(void)dealloc;
-(UIKBTree *)key;
-(UIKBTouchState *)touch;
-(void)setTouch:(UIKBTouchState *)arg1 ;
-(void)setKey:(UIKBTree *)arg1 ;
-(UIKBTree *)keyplane;
-(void)setKeyplane:(UIKBTree *)arg1 ;
-(UIKBTree *)slidOffKey;
-(void)setSlidOffKey:(UIKBTree *)arg1 ;
-(CGPoint)initialPoint;
-(void)setInitialPoint:(CGPoint)arg1 ;
-(int)stage;
-(void)setStage:(int)arg1 ;
-(CGPoint)initialDragPoint;
-(void)setInitialDragPoint:(CGPoint)arg1 ;
-(BOOL)dragged;
-(void)setDragged:(BOOL)arg1 ;
-(BOOL)maySuppressUpAction;
-(void)setMaySuppressUpAction:(BOOL)arg1 ;
-(int)initialKeyState;
-(void)setInitialKeyState:(int)arg1 ;
@end

