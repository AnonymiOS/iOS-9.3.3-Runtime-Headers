/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Foundation/NSOperation.h>

@protocol PSSearchOperationDelegate;
@class NSString, NSSet, PSSearchResults;

@interface PSSearchOperation : NSOperation {

	BOOL _newQuery;
	NSString* _query;
	NSSet* _rootEntries;
	PSSearchResults* _currentResults;
	id<PSSearchOperationDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,copy,readonly) NSSet * rootEntries;                   //@synthesize rootEntries=_rootEntries - In the implementation block
@property (copy,readonly) PSSearchResults * currentResults;                //@synthesize currentResults=_currentResults - In the implementation block
@property (assign,getter=isNewQuery,nonatomic) BOOL newQuery;              //@synthesize newQuery=_newQuery - In the implementation block
@property (__weak) id<PSSearchOperationDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
+(CFStringTokenizerRef)_wordBoundaryTokenizer;
-(void)setDelegate:(id<PSSearchOperationDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id<PSSearchOperationDelegate>)delegate;
-(NSString *)query;
-(void)main;
-(PSSearchResults *)currentResults;
-(BOOL)isNewQuery;
-(id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2 ;
-(void)setNewQuery:(BOOL)arg1 ;
-(NSSet *)rootEntries;
-(BOOL)_searchEntries:(id)arg1 forQuery:(id)arg2 ;
-(id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2 ;
-(BOOL)_systemLanguageHasContinuousScript;
-(void)_didCancel;
@end

