/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3DatabaseConnection;

@interface ML3PersistentIDGenerator : NSObject {

	ML3DatabaseConnection* _connection;
	long long _currentPersistentID;
	long long _nextUsedPersistentID;

}
-(id)initWithDatabaseConnection:(id)arg1 ;
-(long long)nextPersistentID;
-(void)_calculateNewRun;
@end

