/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SyndromeHandlerProtocol.h>

@class NSString, ManagedEventHandler;

@interface FallbackUsageSyndromeHandler : NSObject <SyndromeHandlerProtocol> {

	NSString* _syndromeName;
	char* _syndromeUTF8Name;
	ManagedEventHandler* _eventHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)getHandlerByName:(id)arg1 ;
-(NSString *)description;
-(void)didReceiveSyndrome:(id)arg1 ;
@end

