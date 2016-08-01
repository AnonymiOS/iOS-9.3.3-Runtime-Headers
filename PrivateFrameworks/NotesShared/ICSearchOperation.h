/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ICSearchString, ICSearchResult;

@interface ICSearchOperation : NSOperation {

	id _objectToSearch;
	ICSearchString* _searchString;
	ICSearchResult* _searchResult;

}

@property (nonatomic,readonly) id objectToSearch;                               //@synthesize objectToSearch=_objectToSearch - In the implementation block
@property (nonatomic,copy,readonly) ICSearchString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (copy) ICSearchResult * searchResult;                                 //@synthesize searchResult=_searchResult - In the implementation block
+(unsigned long long)numberOfMatchesOfString:(id)arg1 withinString:(id)arg2 ;
+(id)tokensFromString:(id)arg1 ;
+(unsigned long long)relevanceBySearchingForString:(id)arg1 withinString:(id)arg2 ;
-(ICSearchString *)searchString;
-(void)main;
-(void)setSearchResult:(ICSearchResult *)arg1 ;
-(ICSearchResult *)searchResult;
-(unsigned long long)relevanceByPerformingSearch;
-(id)objectToSearch;
-(id)initWithObjectToSearch:(id)arg1 searchString:(id)arg2 ;
-(unsigned long long)relevanceBySearchingWithinString:(id)arg1 ;
@end

