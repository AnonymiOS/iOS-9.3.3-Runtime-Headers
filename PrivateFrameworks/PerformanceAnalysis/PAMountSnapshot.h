/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:56 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <libobjc.A.dylib/PASerializable.h>

@class NSArray, NSString;

@interface PAMountSnapshot : NSObject <PASerializable> {

	double _machTimestampWhenMeasured;
	double _machTimestampOfLastResponse;
	NSArray* _blockedThreadIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double machTimestampWhenMeasured;                //@synthesize machTimestampWhenMeasured=_machTimestampWhenMeasured - In the implementation block
@property (readonly) double machTimestampOfLastResponse;              //@synthesize machTimestampOfLastResponse=_machTimestampOfLastResponse - In the implementation block
@property (readonly) BOOL isUnresponsive; 
@property (readonly) NSArray * blockedThreadIDs;                      //@synthesize blockedThreadIDs=_blockedThreadIDs - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithSerializedMountSnapshot:(const SCD_Struct_PA4*)arg1 ;
-(void)dealloc;
-(id)initWithStatus:(netfs_status*)arg1 atMachTime:(double)arg2 ;
-(BOOL)isBlockingThread:(unsigned long long)arg1 ;
-(BOOL)isUnresponsive;
-(double)machTimestampWhenMeasured;
-(double)machTimestampOfLastResponse;
-(NSArray *)blockedThreadIDs;
@end

