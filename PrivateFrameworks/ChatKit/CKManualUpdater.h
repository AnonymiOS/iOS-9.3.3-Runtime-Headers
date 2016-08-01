/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKManualUpdater : NSObject {

	BOOL _needsUpdate;
	id _target;
	SEL _action;

}

@property (assign,nonatomic) BOOL needsUpdate;              //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (assign,nonatomic) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end

