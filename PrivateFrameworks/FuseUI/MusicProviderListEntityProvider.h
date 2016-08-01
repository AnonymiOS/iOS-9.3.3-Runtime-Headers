/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicEntityProviding.h>

@class MusicClientContext, NSArray, NSString;

@interface MusicProviderListEntityProvider : NSObject <MusicClientContextConsuming, MusicEntityProviding> {

	MusicClientContext* _clientContext;
	NSArray* _entityProviderList;

}

@property (nonatomic,retain) MusicClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) NSArray * entityProviderList;                      //@synthesize entityProviderList=_entityProviderList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(BOOL)setEditing:(BOOL)arg1 ;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(void)_entityProviderDidInvalidateNotification:(id)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(NSArray *)entityProviderList;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)hasEntities;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(id)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(void)setEntityProviderList:(NSArray *)arg1 ;
-(void)getEntityProvider:(id*)arg1 forSectionIndex:(unsigned long long)arg2 returningLocalSectionIndex:(unsigned long long*)arg3 ;
-(id)initWithEntityProviderList:(id)arg1 ;
-(void)_getEntityProvider:(id*)arg1 forIndexBarEntryIndex:(unsigned long long)arg2 returningLocalIndexBarEntryIndex:(unsigned long long*)arg3 ;
@end

