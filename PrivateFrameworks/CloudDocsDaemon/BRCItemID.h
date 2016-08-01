/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class NSString;

@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {

	unsigned char _kind;
	unsigned char _uuid[16];

}

@property (nonatomic,readonly) BOOL isRoot; 
@property (nonatomic,readonly) BOOL isDocuments; 
@property (nonatomic,readonly) NSString * itemIDString; 
@property (nonatomic,readonly) NSString * shortItemIDString; 
@property (nonatomic,readonly) const char* UTF8String; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)newFromSqliteValue:(MemRef)arg1 ;
+(id)documentsItemID;
+(id)rootItemID;
+(id)newItemIDFromEnclosureUUID:(id)arg1 ;
+(id)parseMangledItemID:(id)arg1 mangledContainerID:(id*)arg2 etag:(id*)arg3 ;
-(id)contentsRecordIDInZoneID:(id)arg1 ;
-(id)validatingDirectoryReferenceInZoneID:(id)arg1 ;
-(const char*)UTF8String;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(BOOL)isRoot;
-(BOOL)isEqualToItemID:(id)arg1 ;
-(NSString *)itemIDString;
-(BOOL)isDocuments;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(NSString *)shortItemIDString;
-(id)derivedAliasItemIDWithOwnerName:(id)arg1 ;
-(id)initWithKind:(unsigned char)arg1 bytes:(const void*)arg2 length:(unsigned long long)arg3 ;
-(id)itemUUIDString;
-(id)initWithItemID:(id)arg1 ;
@end

