/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthDaemon;
@interface HDActivitySummaryBuilder : NSObject {

	id<HDHealthDaemon> _healthDaemon;
	BOOL _shouldIncludePrivateProperties;

}

@property (assign,nonatomic) BOOL shouldIncludePrivateProperties;              //@synthesize shouldIncludePrivateProperties=_shouldIncludePrivateProperties - In the implementation block
-(id)init;
-(id)initWithHealthDaemon:(id)arg1 ;
-(void)activitySummariesWithPredicate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)shouldIncludePrivateProperties;
-(void)setShouldIncludePrivateProperties:(BOOL)arg1 ;
@end

