/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IKAppContext;


@protocol IKDOMFeature <NSObject>
@property (nonatomic,copy,readonly) NSString * featureName; 
@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
@optional
-(void)migrateToViewElement:(id)arg1;

@required
+(id)makeFeatureJSObjectForFeature:(id)arg1;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

@end

