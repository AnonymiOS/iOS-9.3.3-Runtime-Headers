/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class BKSAnimationFenceHandle, NSString;

@interface FBSWorkspaceResponse : NSObject <BSXPCCoding> {

	BKSAnimationFenceHandle* _animationFence;

}

@property (nonatomic,retain) BKSAnimationFenceHandle * animationFence;              //@synthesize animationFence=_animationFence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BKSAnimationFenceHandle *)animationFence;
-(void)setAnimationFence:(BKSAnimationFenceHandle *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

