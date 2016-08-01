/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteObservableBuilderBatchingHelper <NSObject>
@required
-(BOOL)batchAtIndexIncludesServer:(unsigned long long)arg1;
-(id)batchedObservables;
-(void)addContactsObservable:(id)arg1;
-(void)addCoreRecentsObservable:(id)arg1;
-(void)addSuggestionsObservable:(id)arg1;
-(void)addDuetObservable:(id)arg1;
-(void)addSupplementalObservable:(id)arg1;
-(void)addDirectoryServerObservable:(id)arg1;
-(void)addCalendarServerObservable:(id)arg1;

@end

