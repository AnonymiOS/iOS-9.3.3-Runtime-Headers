/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppDataStoring.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject;

@interface IKAppDataStorage : NSObject <IKAppDataStoring> {

	unsigned long long _format;
	NSString* _filePath;
	NSString* _identifier;
	NSMutableDictionary* _storageDict;
	NSObject*<OS_dispatch_queue> _storageQueue;

}

@property (nonatomic,retain,readonly) NSString * filePath;                           //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * storageDict;                      //@synthesize storageDict=_storageDict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> storageQueue;              //@synthesize storageQueue=_storageQueue - In the implementation block
-(unsigned long long)count;
-(NSString *)identifier;
-(void)clear;
-(NSString *)filePath;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)storageQueue;
-(NSMutableDictionary *)storageDict;
-(void)_saveDict:(id)arg1 ;
-(id)getDataForKey:(id)arg1 ;
-(void)setStorageDict:(NSMutableDictionary *)arg1 ;
-(void)setStorageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithFilePath:(id)arg1 identifier:(id)arg2 ;
-(unsigned long long)setData:(id)arg1 forKey:(id)arg2 ;
-(void)removeDataForKey:(id)arg1 ;
@end

