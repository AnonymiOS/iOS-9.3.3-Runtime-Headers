/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Predicate.h>

@class NSArray;

@interface ML3PersistentIDsPredicate : ML3Predicate {

	NSArray* _persistentIDs;
	BOOL _shouldContain;

}

@property (nonatomic,readonly) BOOL shouldContain;              //@synthesize shouldContain=_shouldContain - In the implementation block
+(id)predicateWithPersistentIDs:(id)arg1 shouldContain:(BOOL)arg2 ;
+(id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 shouldContain:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(id)initWithPersistentIDs:(id)arg1 shouldContain:(BOOL)arg2 ;
-(BOOL)shouldContain;
@end

