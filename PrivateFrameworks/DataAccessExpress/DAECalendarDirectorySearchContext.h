/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DAECalendarDirectorySearchContext : NSObject {

	/*^block*/id _resultsBlock;
	/*^block*/id _completionBlock;

}
-(void)finishedWithError:(id)arg1 exceededResultLimit:(BOOL)arg2 ;
-(id)initWithResultsBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resultsReturned:(id)arg1 ;
@end

