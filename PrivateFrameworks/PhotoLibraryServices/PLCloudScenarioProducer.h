/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLCloudScenarioConsumer;
@class NSArray;

@interface PLCloudScenarioProducer : NSObject {

	NSArray* _triggers;
	id<PLCloudScenarioConsumer> _consumer;

}

@property (nonatomic,retain) NSArray * triggers;                                //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) id<PLCloudScenarioConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(void)dealloc;
-(void)activate;
-(void)setConsumer:(id<PLCloudScenarioConsumer>)arg1 ;
-(id<PLCloudScenarioConsumer>)consumer;
-(void)subscribeToTriggerType:(Class)arg1 withSelector:(SEL)arg2 ;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

