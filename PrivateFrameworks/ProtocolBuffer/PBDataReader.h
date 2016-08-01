/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:29 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
@class NSData;

@interface PBDataReader : NSObject {

	unsigned long long _pos;
	BOOL _error;
	const char* _bytes;
	NSData* _data;
	unsigned long long _length;

}

@property (assign) unsigned long long length;                //@synthesize length=_length - In the implementation block
@property (assign) unsigned long long position;              //@synthesize pos=_pos - In the implementation block
-(long long)readVarInt;
-(long long)readInt64;
-(int)readSfixed32;
-(BOOL)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2 ;
-(long long)readSfixed64;
-(unsigned)readBigEndianFixed32;
-(unsigned)readUint32;
-(char)readInt8;
-(unsigned long long)readUint64;
-(int)readSint32;
-(BOOL)readBOOL;
-(void)readTag:(unsigned short*)arg1 andType:(char*)arg2 ;
-(unsigned long long)readBigEndianFixed64;
-(double)readDouble;
-(long long)readSint64;
-(unsigned short)readBigEndianFixed16;
-(void)recall:(const SCD_Struct_PB0*)arg1 ;
-(unsigned)readFixed32;
-(int)readInt32;
-(BOOL)mark:(SCD_Struct_PB0*)arg1 ;
-(unsigned long long)readFixed64;
-(id)readBigEndianShortThenString;
-(void)updateData:(id)arg1 ;
-(id)readProtoBuffer;
-(void)dealloc;
-(unsigned long long)length;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(void)setPosition:(unsigned long long)arg1 ;
-(unsigned long long)position;
-(unsigned long long)offset;
-(void)setLength:(unsigned long long)arg1 ;
-(BOOL)isAtEnd;
-(id)readData;
-(id)readString;
-(float)readFloat;
-(BOOL)hasError;
-(BOOL)hasMoreData;
-(BOOL)seekToOffset:(unsigned long long)arg1 ;
-(id)readBytes:(unsigned)arg1 ;
@end

