/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSString;

@interface MPUDataSource : NSObject <NSCoding> {

	long long _invalidationIgnoreCount;
	long long _numberOfIgnoredInvalidations;
	long long _entityType;

}

@property (nonatomic,readonly) long long entityType;                               //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) BOOL usesSections; 
@property (nonatomic,readonly) BOOL showsIndexBar; 
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@property (nonatomic,readonly) BOOL showsEntityCountFooter; 
@property (nonatomic,readonly) NSString * entityCountFormat; 
+(Class)invalidationContextClass;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(unsigned long long)numberOfSections;
-(void)invalidate;
-(BOOL)isEmpty;
-(long long)entityType;
-(id)entities;
-(id)initWithEntityType:(long long)arg1 ;
-(unsigned long long)_globalIndexForIndexPath:(id)arg1 ;
-(id)_indexPathForGlobalIndex:(unsigned long long)arg1 ;
-(BOOL)isIgnoringInvalidation;
-(void)invalidateWithContext:(id)arg1 ;
-(BOOL)canEditEntityAtIndex:(unsigned long long)arg1 ;
-(void)deleteEntityAtIndex:(unsigned long long)arg1 ;
-(long long)editingTypeForEntityAtIndex:(unsigned long long)arg1 ;
-(BOOL)showsEntityCountFooter;
-(id)anyEntity;
-(void)deleteEntityAtIndexPath:(id)arg1 ;
-(id)entityAtIndexPath:(id)arg1 ;
-(NSString *)entityCountFormat;
-(BOOL)entityIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfEntity:(id)arg1 ;
-(void)preloadEntities;
-(void)preloadSectionEntities;
-(unsigned long long)indexOfSectionEntity:(id)arg1 ;
-(BOOL)canSelectEntityAtIndex:(unsigned long long)arg1 ;
-(BOOL)canEditEntityAtIndexPath:(id)arg1 ;
-(long long)editingTypeForEntityAtIndexPath:(id)arg1 ;
-(void)beginIgnoringInvalidation;
-(void)endIgnoringInvalidation;
-(void)_didInvalidateWithContext:(id)arg1 ;
-(void)_willInvalidateWithContext:(id)arg1 ;
-(id)entityAtIndex:(unsigned long long)arg1 ;
-(id)playbackContextForIndex:(unsigned long long)arg1 ;
-(BOOL)showsIndexBar;
-(BOOL)usesSections;
-(id)sectionEntityAtIndex:(unsigned long long)arg1 ;
-(id)sectionEntities;
-(void)_invalidateCalculatedEntities;
-(id)localizedSectionTitleAtIndex:(unsigned long long)arg1 ;
-(NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1 ;
-(NSArray *)localizedSectionIndexTitles;
@end

