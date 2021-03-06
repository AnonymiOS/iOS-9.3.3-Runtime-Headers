/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDSearchQueryDelegate.h>

@protocol OS_dispatch_group;
@class MDSearchQuery, NSArray, NSMutableDictionary, NSObject, NSString;

@interface CKSpotlightQuery : NSObject <MDSearchQueryDelegate> {

	MDSearchQuery* _currentQuery;
	unsigned long long _resultIndex;
	NSArray* _searchResults;
	NSMutableDictionary* _chatGUIDToLatestSearchResult;
	NSObject*<OS_dispatch_group> _searchResultLoadingGroup;
	/*^block*/id _completion;
	BOOL _processing;
	BOOL _cancelled;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(void)_cleanup;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)initWithSearchText:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_callCompletionIfNecessary;
-(void)_processSearchResults;
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2 ;
-(void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2 ;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2 ;
@end

