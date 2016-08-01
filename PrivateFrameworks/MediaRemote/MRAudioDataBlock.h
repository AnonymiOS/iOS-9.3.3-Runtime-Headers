/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:11 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class MRAudioBuffer, _MRAudioDataBlockProtobuf, NSData;

@interface MRAudioDataBlock : NSObject <NSMutableCopying> {

	MRAudioBuffer* _buffer;
	SCD_Struct_MR20 _time;
	float _gain;

}

@property (nonatomic,readonly) MRAudioBuffer * buffer;                            //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MR20 time;                              //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) float gain;                                        //@synthesize gain=_gain - In the implementation block
@property (nonatomic,readonly) _MRAudioDataBlockProtobuf * protobuf; 
@property (nonatomic,readonly) NSData * data; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(SCD_Struct_MR20)time;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(float)gain;
-(_MRAudioDataBlockProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(void)_parseBuffer:(id)arg1 ;
-(void)_parseTimestamp:(id)arg1 ;
-(void)_parseGain:(id)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(MRAudioBuffer *)buffer;
@end

