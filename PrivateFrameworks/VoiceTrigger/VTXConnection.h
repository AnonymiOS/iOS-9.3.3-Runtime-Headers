/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTXService.h>

@class NSMutableSet, NSString;

@interface VTXConnection : NSObject <VTXService> {

	NSMutableSet* _activationAssertions;
	BOOL _isPhraseSpotterBypassed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(oneway void)getTestResponse:(/*^block*/id)arg1 ;
-(oneway void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2 timestamp:(double)arg3 ;
-(oneway void)setPhraseSpotterBypassing:(BOOL)arg1 timeout:(double)arg2 timestamp:(double)arg3 ;
-(oneway void)resetAssertions;
-(void)handleDisconnect;
-(void)_setPhraseSpotterBypassing:(BOOL)arg1 ;
@end

