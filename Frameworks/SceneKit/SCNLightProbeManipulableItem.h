/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNManipulableItem.h>

@interface SCNLightProbeManipulableItem : SCNManipulableItem {

	BOOL _added;
	SCNVector3 _tmpPosition;

}
+(void)removeItemsFromScene:(id)arg1 ;
+(void)addItems:(id)arg1 toScene:(id)arg2 ;
+(id)lightProbesManipulatorItemWithNode:(id)arg1 screenSize:(double)arg2 elementIndex:(unsigned long long)arg3 ;
-(id)description;
-(void)setTransform:(SCNMatrix4)arg1 ;
-(void)setPosition:(SCNVector3)arg1 ;
-(SCNMatrix4)transform;
-(id)parentItem;
-(SCNVector3)elementPosition;
-(id)cloneForManipulators;
-(id)lightProbes;
-(void)_redraw;
-(void)_addToScene:(id)arg1 ;
-(void)_removeFromScene;
-(SCNMatrix4)worldTransform;
@end

