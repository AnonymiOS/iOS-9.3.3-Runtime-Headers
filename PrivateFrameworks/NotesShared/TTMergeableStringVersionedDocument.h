/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/TTVersionedDocument.h>

@class TTMergeableAttributedString;

@interface TTMergeableStringVersionedDocument : TTVersionedDocument {

	TTMergeableAttributedString* _mergeableString;

}

@property (nonatomic,retain) TTMergeableAttributedString * mergeableString;              //@synthesize mergeableString=_mergeableString - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(TTMergeableAttributedString *)mergeableString;
-(id)initWithArchive:(const Document*)arg1 andReplicaID:(id)arg2 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(unsigned long long)mergeWithStringVersionedDocument:(id)arg1 ;
-(void)setMergeableString:(TTMergeableAttributedString *)arg1 ;
@end

