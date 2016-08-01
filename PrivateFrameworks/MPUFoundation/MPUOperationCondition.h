/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MPUOperationCondition <NSObject>
@property (nonatomic,copy,readonly) NSString * mutualExclusionCategory; 
@optional
-(id)dependencyForOperation:(id)arg1;
-(NSString *)mutualExclusionCategory;

@required
-(void)evaluateForOperation:(id)arg1 completion:(/*^block*/id)arg2;

@end
