/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSMutableDictionary, NSURL;

@interface BRQueryItem : NSObject <NSSecureCoding, NSCopying> {

	SCD_Union_BR5 _flags;
	unsigned short _diffs;
	NSString* _containerID;
	NSString* _parentPath;
	NSString* _logicalName;
	NSString* _physicalName;
	NSNumber* _fileObjectID;
	NSNumber* _size;
	NSNumber* _mtime;
	NSNumber* _btime;
	NSMutableDictionary* _attrs;
	NSURL* _url;
	NSURL* _localRepresentationURL;
	id _replacement;
	BOOL _isNetworkOffline;
	long long _logicalHandle;
	long long _physicalHandle;

}

@property (nonatomic,readonly) unsigned short diffs;                        //@synthesize diffs=_diffs - In the implementation block
@property (nonatomic,readonly) unsigned downloadStatus; 
@property (nonatomic,readonly) unsigned uploadStatus; 
@property (nonatomic,readonly) unsigned shareOptions; 
@property (nonatomic,readonly) BOOL isInTransfer; 
@property (nonatomic,readonly) BOOL isConflicted; 
@property (nonatomic,readonly) BOOL isLive; 
@property (nonatomic,readonly) BOOL isDead; 
@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL hasTransferStatuses; 
@property (assign,nonatomic) BOOL isPreCrash; 
@property (nonatomic,readonly) BOOL isUploadActive; 
@property (nonatomic,readonly) BOOL isDownloadActive; 
@property (nonatomic,readonly) BOOL isDownloadRequested; 
@property (nonatomic,readonly) BOOL isAlias; 
@property (nonatomic,readonly) NSString * containerID;                      //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) NSString * parentPath;                       //@synthesize parentPath=_parentPath - In the implementation block
@property (nonatomic,readonly) NSString * logicalName;                      //@synthesize logicalName=_logicalName - In the implementation block
@property (nonatomic,readonly) NSString * physicalName;                     //@synthesize physicalName=_physicalName - In the implementation block
@property (nonatomic,readonly) NSNumber * fileObjectID;                     //@synthesize fileObjectID=_fileObjectID - In the implementation block
@property (nonatomic,readonly) NSNumber * size;                             //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSNumber * mtime;                            //@synthesize mtime=_mtime - In the implementation block
@property (nonatomic,readonly) NSNumber * btime;                            //@synthesize btime=_btime - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSURL * localRepresentationURL;              //@synthesize localRepresentationURL=_localRepresentationURL - In the implementation block
@property (nonatomic,readonly) NSString * path; 
@property (assign,nonatomic) BOOL isNetworkOffline;                         //@synthesize isNetworkOffline=_isNetworkOffline - In the implementation block
@property (assign,nonatomic) id replacement; 
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)askDaemonQueryItemForURL:(id)arg1 ;
-(id)attributesForNames:(id)arg1 ;
-(BOOL)isLive;
-(id)valueForKey:(id)arg1 ;
-(NSNumber *)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)url;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isShared;
-(NSString *)containerID;
-(void)setIsNetworkOffline:(BOOL)arg1 ;
-(BOOL)isUploadActive;
-(BOOL)isDownloadActive;
-(void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2 ;
-(NSNumber *)btime;
-(BOOL)isConflicted;
-(NSURL *)localRepresentationURL;
-(id)sharedItemRole;
-(id)initWithQueryItem:(id)arg1 ;
-(BOOL)isEqualToQueryItem:(id)arg1 ;
-(void)_mergeURL:(id)arg1 ;
-(void)_mergeAttrs:(id)arg1 ;
-(unsigned)shareOptions;
-(void)clearDiffs;
-(BOOL)isPreCrash;
-(void)setIsPreCrash:(BOOL)arg1 ;
-(void)_setAttr:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasTransferStatuses;
-(id)replacement;
-(void)setReplacement:(id)arg1 ;
-(BOOL)isNetworkOffline;
-(BOOL)isDocument;
-(NSNumber *)fileObjectID;
-(BOOL)isAlias;
-(BOOL)isDead;
-(NSString *)logicalName;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(unsigned)uploadStatus;
-(BOOL)isHiddenExt;
-(NSString *)physicalName;
-(NSNumber *)mtime;
-(unsigned)downloadStatus;
-(BOOL)isDownloadRequested;
-(id)subclassDescription;
-(BOOL)canMerge:(id)arg1 ;
-(void)markDead;
-(NSString *)parentPath;
-(unsigned short)diffs;
-(BOOL)isInTransfer;
-(id)attributeForName:(id)arg1 ;
-(void)merge:(id)arg1 ;
-(id)attributeNames;
@end

