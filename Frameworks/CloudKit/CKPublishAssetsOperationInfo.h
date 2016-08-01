/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface CKPublishAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _recordIDs;
	NSDictionary* _fileNamesByAssetFieldNames;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;

}

@property (nonatomic,retain) NSArray * recordIDs;                                    //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * fileNamesByAssetFieldNames;              //@synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                        //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                          //@synthesize URLOptions=_URLOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(NSDictionary *)fileNamesByAssetFieldNames;
-(unsigned long long)requestedTTL;
-(unsigned long long)URLOptions;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(void)setFileNamesByAssetFieldNames:(NSDictionary *)arg1 ;
@end

