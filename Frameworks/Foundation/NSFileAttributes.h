/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSMutableDictionary, NSDictionary;

@interface NSFileAttributes : NSDictionary {

	NSMutableDictionary* dict;
	stat statInfo;
	SCD_Struct_NS21 catInfo;
	NSDictionary* extendedAttrs;
	int fileProtectionClass;

}
+(id)_attributesAtPath:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
+(id)attributesWithStat:(stat*)arg1 ;
+(id)attributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
+(id)_attributesAtURL:(id)arg1 partialReturn:(BOOL)arg2 filterResourceFork:(BOOL)arg3 error:(id*)arg4 ;
-(id)fileOwnerAccountName;
-(unsigned long long)fileOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(unsigned long long)fileGroupOwnerAccountNumber;
-(long long)fileSystemNumber;
-(unsigned long long)fileSystemFileNumber;
-(BOOL)isDirectory;
-(void)dealloc;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)fileType;
-(id)fileModificationDate;
-(unsigned long long)fileSize;
-(unsigned long long)filePosixPermissions;
@end

