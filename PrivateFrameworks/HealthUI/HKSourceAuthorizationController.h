/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:05 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKHealthStore, HKSource, NSArray, NSMutableSet, NSSet;

@interface HKSourceAuthorizationController : NSObject {

	HKHealthStore* _healthStore;
	HKSource* _source;
	NSArray* _orderedTypesForSharing;
	NSArray* _orderedTypesForReading;
	NSMutableSet* _typesEnabledForSharing;
	NSMutableSet* _typesEnabledForReading;
	NSSet* _requestedTypesForSharing;
	NSSet* _requestedTypesForReading;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKSource * source;                                //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSArray * orderedTypesForSharing;                   //@synthesize orderedTypesForSharing=_orderedTypesForSharing - In the implementation block
@property (nonatomic,retain) NSArray * orderedTypesForReading;                   //@synthesize orderedTypesForReading=_orderedTypesForReading - In the implementation block
@property (nonatomic,retain) NSMutableSet * typesEnabledForSharing;              //@synthesize typesEnabledForSharing=_typesEnabledForSharing - In the implementation block
@property (nonatomic,retain) NSMutableSet * typesEnabledForReading;              //@synthesize typesEnabledForReading=_typesEnabledForReading - In the implementation block
@property (nonatomic,retain) NSSet * requestedTypesForSharing;                   //@synthesize requestedTypesForSharing=_requestedTypesForSharing - In the implementation block
@property (nonatomic,retain) NSSet * requestedTypesForReading;                   //@synthesize requestedTypesForReading=_requestedTypesForReading - In the implementation block
-(void)reload;
-(HKSource *)source;
-(HKHealthStore *)healthStore;
-(void)_reload;
-(id)typesInSection:(long long)arg1 ;
-(id)_enabledTypesInSection:(long long)arg1 ;
-(void)_updateAuthorizationStatusWithTypes:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forType:(id)arg2 inSection:(long long)arg3 commit:(BOOL)arg4 ;
-(long long)_authorizationStatusWithType:(id)arg1 ;
-(void)_setAuthorizationStatuses:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 source:(id)arg2 typesForSharing:(id)arg3 typesForReading:(id)arg4 ;
-(unsigned long long)countOfTypesInSection:(long long)arg1 ;
-(BOOL)isTypeEnabled:(id)arg1 inSection:(long long)arg2 ;
-(BOOL)allTypesEnabled;
-(BOOL)anyTypeEnabled;
-(void)setEnabled:(BOOL)arg1 forAllTypesInSection:(long long)arg2 commit:(BOOL)arg3 ;
-(void)commitAuthorizationStatuses;
-(NSArray *)orderedTypesForSharing;
-(void)setOrderedTypesForSharing:(NSArray *)arg1 ;
-(NSArray *)orderedTypesForReading;
-(void)setOrderedTypesForReading:(NSArray *)arg1 ;
-(NSMutableSet *)typesEnabledForSharing;
-(void)setTypesEnabledForSharing:(NSMutableSet *)arg1 ;
-(NSMutableSet *)typesEnabledForReading;
-(void)setTypesEnabledForReading:(NSMutableSet *)arg1 ;
-(NSSet *)requestedTypesForSharing;
-(void)setRequestedTypesForSharing:(NSSet *)arg1 ;
-(NSSet *)requestedTypesForReading;
-(void)setRequestedTypesForReading:(NSSet *)arg1 ;
@end

