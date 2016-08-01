/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UIKeyboardArbiterLink.h>

@class NSString, _UIKeyboardArbiter, SBUIWorkspace, SBUIScene;

@interface _UIKeyboardArbiter_ForSpringBoard : NSObject <_UIKeyboardArbiterLink> {

	SBUIWorkspace* _workspace;
	SBUIScene* _scene;
	_UIKeyboardArbiter* owner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) _UIKeyboardArbiter * owner; 
@property (nonatomic,readonly) BOOL isAvailable; 
+(void)launch;
-(NSString *)serviceName;
-(void)attach:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(_UIKeyboardArbiter *)owner;
-(void)setOwner:(_UIKeyboardArbiter *)arg1 ;
-(void)detach:(id)arg1 ;
-(BOOL)isAvailable;
-(void)connectWithQueue:(id)arg1 ;
-(void)createSceneWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSceneSettings;
@end

