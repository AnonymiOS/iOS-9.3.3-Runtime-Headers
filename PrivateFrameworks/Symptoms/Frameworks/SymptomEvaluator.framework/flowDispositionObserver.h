/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol flowDispositionObserver <NSObject>
@property (assign,nonatomic) BOOL enabled; 
@required
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1;
-(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3;
-(unsigned)noteFlow:(id)arg1 withDisposition:(unsigned)arg2 present:(BOOL)arg3 trackedBy:(id)arg4;
-(void)configurePolicies:(id)arg1;

@end

