/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUAbstractSerializer.h>

@interface VMUSimpleDeserializer : VMUAbstractSerializer {

	void* _cache;
	/*^block*/id _destructor;

}
-(void)dealloc;
-(id)copyDeserializedStringWithID:(unsigned)arg1 ;
-(id)initWithBuffer:(const void*)arg1 length:(unsigned)arg2 destructor:(/*^block*/id)arg3 ;
-(unsigned)deserialize32;
-(unsigned long long)deserialize64;
-(void)skipFields:(unsigned)arg1 ;
-(id)copyDeserializedString;
-(const char*)copyDeserializedNullTerminatedBytes;
-(unsigned*)_deserializeValues:(unsigned)arg1 ;
@end

