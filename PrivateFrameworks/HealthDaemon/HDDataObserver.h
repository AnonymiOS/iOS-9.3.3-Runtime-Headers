/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDDataObserver <NSObject>
@optional
-(void)samplesJournaled:(id)arg1 type:(id)arg2;
-(void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@required
-(void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end

