/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <QuartzCore/CAAnimationGroup.h>

@class NSString;

@interface SCNAnimationReference : CAAnimationGroup {

	NSString* referenceName;

}

@property (nonatomic,copy) NSString * referenceName; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isAReference;
-(void)setReferenceName:(NSString *)arg1 ;
-(NSString *)referenceName;
@end

