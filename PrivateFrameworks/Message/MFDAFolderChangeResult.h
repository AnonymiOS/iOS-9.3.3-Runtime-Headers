/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString;

@interface MFDAFolderChangeResult : NSObject {

	NSError* _error;
	NSString* _folderID;
	NSString* _folderName;
	long long _statusCode;

}

@property (readonly) long long statusCode;               //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (readonly) NSString * folderID;                //@synthesize folderID=_folderID - In the implementation block
@property (readonly) NSString * folderName;              //@synthesize folderName=_folderName - In the implementation block
-(void)dealloc;
-(id)description;
-(long long)statusCode;
-(NSString *)folderID;
-(NSString *)folderName;
-(BOOL)wasSuccessful;
-(id)initWithStatusCode:(long long)arg1 error:(id)arg2 folderID:(id)arg3 folderName:(id)arg4 ;
-(NSError *)error;
@end

