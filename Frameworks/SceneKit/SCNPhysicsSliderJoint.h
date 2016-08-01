/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsWorld, SCNPhysicsBody;

@interface SCNPhysicsSliderJoint : SCNPhysicsBehavior {

	SCD_Struct_SC85 _definition;
	btSliderConstraint* _constraint;
	SCNPhysicsWorld* _world;

}

@property (nonatomic,readonly) SCNPhysicsBody * bodyA; 
@property (assign,nonatomic) SCNVector3 axisA; 
@property (assign,nonatomic) SCNVector3 anchorA; 
@property (nonatomic,readonly) SCNPhysicsBody * bodyB; 
@property (assign,nonatomic) SCNVector3 axisB; 
@property (assign,nonatomic) SCNVector3 anchorB; 
@property (assign,nonatomic) double minimumLinearLimit; 
@property (assign,nonatomic) double maximumLinearLimit; 
@property (assign,nonatomic) double minimumAngularLimit; 
@property (assign,nonatomic) double maximumAngularLimit; 
@property (assign,nonatomic) double motorTargetLinearVelocity; 
@property (assign,nonatomic) double motorMaximumForce; 
@property (assign,nonatomic) double motorTargetAngularVelocity; 
@property (assign,nonatomic) double motorMaximumTorque; 
+(id)jointWithBodyA:(id)arg1 axisA:(SCNVector3)arg2 anchorA:(SCNVector3)arg3 bodyB:(id)arg4 axisB:(SCNVector3)arg5 anchorB:(SCNVector3)arg6 ;
+(id)jointWithBody:(id)arg1 axis:(SCNVector3)arg2 anchor:(SCNVector3)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(SCNPhysicsBody *)bodyA;
-(SCNPhysicsBody *)bodyB;
-(id)initWithBodyA:(id)arg1 axisA:(SCNVector3)arg2 anchorA:(SCNVector3)arg3 bodyB:(id)arg4 axisB:(SCNVector3)arg5 anchorB:(SCNVector3)arg6 ;
-(id)initWithBody:(id)arg1 axis:(SCNVector3)arg2 anchor:(SCNVector3)arg3 ;
-(SCNVector3)axisA;
-(void)setAxisA:(SCNVector3)arg1 ;
-(SCNVector3)axisB;
-(void)setAxisB:(SCNVector3)arg1 ;
-(SCNVector3)anchorA;
-(void)setAnchorA:(SCNVector3)arg1 ;
-(SCNVector3)anchorB;
-(void)setAnchorB:(SCNVector3)arg1 ;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(double)minimumLinearLimit;
-(void)setMinimumLinearLimit:(double)arg1 ;
-(double)maximumLinearLimit;
-(void)setMaximumLinearLimit:(double)arg1 ;
-(double)minimumAngularLimit;
-(void)setMinimumAngularLimit:(double)arg1 ;
-(double)maximumAngularLimit;
-(void)setMaximumAngularLimit:(double)arg1 ;
-(double)motorTargetLinearVelocity;
-(void)setMotorTargetLinearVelocity:(double)arg1 ;
-(double)motorMaximumForce;
-(void)setMotorMaximumForce:(double)arg1 ;
-(double)motorTargetAngularVelocity;
-(void)setMotorTargetAngularVelocity:(double)arg1 ;
-(double)motorMaximumTorque;
-(void)setMotorMaximumTorque:(double)arg1 ;
@end

