/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class MPSparseArray;

@interface _MPUAVPlaylistIteration : NSObject <NSCoding> {

	MPSparseArray* _sourceContexts;
	unsigned long long _iterationIndex;
	unsigned long long _count;
	unsigned long long _indexToFaultIn;

}

@property (nonatomic,retain) MPSparseArray * sourceContexts;                 //@synthesize sourceContexts=_sourceContexts - In the implementation block
@property (assign,nonatomic) unsigned long long iterationIndex;              //@synthesize iterationIndex=_iterationIndex - In the implementation block
@property (assign,nonatomic) unsigned long long count;                       //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long indexToFaultIn;              //@synthesize indexToFaultIn=_indexToFaultIn - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(void)setCount:(unsigned long long)arg1 ;
-(MPSparseArray *)sourceContexts;
-(void)setIndexToFaultIn:(unsigned long long)arg1 ;
-(void)setIterationIndex:(unsigned long long)arg1 ;
-(void)setSourceContexts:(MPSparseArray *)arg1 ;
-(unsigned long long)indexToFaultIn;
-(unsigned long long)iterationIndex;
@end

