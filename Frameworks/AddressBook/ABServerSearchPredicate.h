/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/ABPredicate.h>
#import <libobjc.A.dylib/DASearchQueryConsumer.h>

@protocol ABPredicateDelegate;
@class DADConnection, DAContactsSearchQuery, NSMutableArray, NSConditionLock, NSString;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer> {

	void* _source;
	DADConnection* _connection;
	DAContactsSearchQuery* _searchQuery;
	NSMutableArray* _searchResults;
	NSConditionLock* _doneLock;
	int _error;
	BOOL _includeSourceInResults;
	BOOL _includePhotosInResults;
	NSString* _accountIdentifier;
	NSString* _searchString;
	id<ABPredicateDelegate> _delegate;

}

@property (assign,nonatomic) void* source; 
@property (nonatomic,copy) NSString * accountIdentifier;                    //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * searchString;                         //@synthesize searchString=_searchString - In the implementation block
@property (assign,nonatomic) BOOL includeSourceInResults;                   //@synthesize includeSourceInResults=_includeSourceInResults - In the implementation block
@property (assign,nonatomic) BOOL includePhotosInResults;                   //@synthesize includePhotosInResults=_includePhotosInResults - In the implementation block
@property (assign,nonatomic) id<ABPredicateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int error; 
@property (nonatomic,retain) DADConnection * connection; 
-(void)setDelegate:(id<ABPredicateDelegate>)arg1 ;
-(void)dealloc;
-(id<ABPredicateDelegate>)delegate;
-(void)setSource:(void*)arg1 ;
-(void*)source;
-(NSString *)searchString;
-(DADConnection *)connection;
-(void)setConnection:(DADConnection *)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(BOOL)arg4 includePhotosInResults:(BOOL)arg5 ;
-(void)ab_runPredicateWithSortOrder:(unsigned)arg1 ranked:(BOOL)arg2 inAddressBook:(void*)arg3 withDelegate:(id)arg4 ;
-(void)setIncludeSourceInResults:(BOOL)arg1 ;
-(void)setIncludePhotosInResults:(BOOL)arg1 ;
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 includeSourceInResults:(BOOL)arg4 ;
-(BOOL)includePhotosInResults;
-(void)runPredicate;
-(void)runPredicateWithDelegate:(id)arg1 ;
-(BOOL)includeSourceInResults;
-(void)_searchQueryIsDone;
-(int)_errorForDAStatusCode:(long long)arg1 ;
-(id)initWithSearchString:(id)arg1 source:(void*)arg2 account:(id)arg3 ;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(int)error;
@end

