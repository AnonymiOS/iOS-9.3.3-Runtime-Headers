/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionPerformSelector : SCNAction {

	SEL _selector;
	id _target;

}
+(BOOL)supportsSecureCoding;
+(id)perfromSelector:(SEL)arg1 onTarget:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(BOOL)isCustom;
@end

