/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AnalyticsWorkspace, NSString;

@interface ObjectAnalytics : NSObject {

	AnalyticsWorkspace* wspace;
	NSString* entityName;
	BOOL managedCache;

}
-(id)fetchEntitiesFreeForm:(id)arg1 sortDesc:(id)arg2 ;
-(void)refresh:(id)arg1 ;
-(void)save;
-(id)_fetch:(id)arg1 sortDesc:(id)arg2 ;
-(id)_firstLastHappened:(BOOL)arg1 ;
-(id)firstHappened;
-(id)lastHappened;
-(id)initWithWorkspace:(id)arg1 entityName:(id)arg2 withCache:(BOOL)arg3 ;
-(id)getDescriptionForName:(id)arg1 ;
-(id)createTemporaryEntityForEntityName:(id)arg1 ;
-(void)removeEntities:(id)arg1 ;
-(id)createEntity;
-(id)createEntityForEntityName:(id)arg1 ;
-(long long)removeEntitiesMatching:(id)arg1 ;
@end

