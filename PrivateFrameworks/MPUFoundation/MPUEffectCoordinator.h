/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MPUEffectCoordinator : NSObject {

	NSMutableArray* _applyBlocks;
	unsigned long long _pendingEffectsCount;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)beginChangeForEffectView:(id)arg1 ;
-(void)addApplyChangesBlock:(/*^block*/id)arg1 ;
-(void)finishChangeForEffectView:(id)arg1 ;
@end

