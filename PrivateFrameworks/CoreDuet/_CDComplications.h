/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CDSession, CDDevice, NSMutableDictionary, NSDictionary;

@interface _CDComplications : NSObject {

	NSObject*<OS_dispatch_queue> complicationQueue;
	CDSession* session;
	CDDevice* remoteDevice;
	int deviceChangeToken;
	int dataChangeToken;
	NSMutableDictionary* meterTokens;
	NSDictionary* _activeComplications;
	NSMutableDictionary* localAttributes;
	NSMutableDictionary* remoteAttributes;

}

@property (nonatomic,copy,readonly) NSDictionary * activeComplications;              //@synthesize activeComplications=_activeComplications - In the implementation block
+(id)sharedComplication;
+(id)initializeForAdmissionChecking:(BOOL)arg1 ;
-(id)initForComplications;
-(void)readOutActiveComplications;
-(NSDictionary *)activeComplications;
-(void)updateRemoteDevice;
-(BOOL)admissionCheckOnComplication:(id)arg1 forRemote:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isBundleActiveComplication:(id)arg1 ;
-(void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(id)CDAttributeForComplication:(id)arg1 error:(id*)arg2 ;
@end

