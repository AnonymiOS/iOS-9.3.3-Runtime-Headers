/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDS/IDS-Structs.h>
@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject {

	NSMutableSet* _delegateIdentifiers;
	opaque_pthread_mutex_t _delegateIdentifiersMutex;

}

@property (nonatomic,readonly) BOOL isAwaitingAcknowledgement; 
-(void)dealloc;
-(id)init;
-(void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(/*^block*/id)arg1 ;
-(id)identifierForServiceDelegate:(id)arg1 ;
-(BOOL)isAwaitingAcknowledgement;
-(id)awaitAcknowledgementFromServiceDelegate:(id)arg1 ;
-(void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg1 ;
-(void)stopAwaitingAcknowledgementFromAllServiceDelegates;
@end

