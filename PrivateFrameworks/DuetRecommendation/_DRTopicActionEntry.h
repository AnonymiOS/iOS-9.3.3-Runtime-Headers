/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface _DRTopicActionEntry : NSObject {

	NSString* _topic;
	NSDate* _when;
	unsigned long long _action;

}

@property (retain,readonly) NSString * topic;                //@synthesize topic=_topic - In the implementation block
@property (retain,readonly) NSDate * when;                   //@synthesize when=_when - In the implementation block
@property (readonly) unsigned long long action;              //@synthesize action=_action - In the implementation block
-(id)description;
-(unsigned long long)action;
-(NSString *)topic;
-(NSDate *)when;
-(id)initWithTopic:(id)arg1 when:(id)arg2 action:(unsigned long long)arg3 ;
@end

