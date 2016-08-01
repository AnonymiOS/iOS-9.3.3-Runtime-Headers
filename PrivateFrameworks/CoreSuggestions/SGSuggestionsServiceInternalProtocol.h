/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceInternalProtocol <_SGSuggestionsServiceBaseProtocol>
@required
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 error:(id*)arg5;
-(id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned)arg2 error:(id*)arg3;
-(void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)resetConfirmationAndRejectionHistory:(id*)arg1;
-(void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(id)suggestEventsInFutureLimitTo:(unsigned long long)arg1 error:(id*)arg2;
-(id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
-(void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(/*^block*/id)arg6;
-(BOOL)addSearchableItems:(id)arg1 error:(id*)arg2;
-(id)allContactsLimitedTo:(unsigned long long)arg1 error:(id*)arg2;
-(void)suggestEventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned)arg2 withCompletion:(/*^block*/id)arg3;
-(void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(/*^block*/id)arg6;
-(id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id*)arg6;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(id)emailAddressIsSignificant:(id)arg1 error:(id*)arg2;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned)arg4 withCompletion:(/*^block*/id)arg5;
-(id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
-(BOOL)clearCachesFully:(BOOL)arg1 error:(id*)arg2;
-(void)drainBothQueuesCompletelyWithCompletion:(/*^block*/id)arg1;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned)arg4 error:(id*)arg5;
-(void)emailAddressIsSignificant:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)removeAllStoredPseudoContacts:(id*)arg1;
-(BOOL)drainBothQueuesCompletely:(id*)arg1;
-(BOOL)sendRTCLogs:(id*)arg1;
-(void)removeAllStoredPseudoContactsWithCompletion:(/*^block*/id)arg1;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned)arg5 error:(id*)arg6;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned)arg5 withCompletion:(/*^block*/id)arg6;
-(void)clearCachesFully:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 error:(id*)arg4;
-(void)resetConfirmationAndRejectionHistoryWithCompletion:(/*^block*/id)arg1;
-(void)addSearchableItems:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 withCompletion:(/*^block*/id)arg5;

@end

