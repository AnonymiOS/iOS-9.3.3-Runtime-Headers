/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFZlibDataCompressionOptions : NSObject {

	int _compressionLevel;
	int _strategy;
	int _windowBits;
	int _memoryLevel;
	int _chunkSize;

}

@property (assign,nonatomic) int compressionLevel;              //@synthesize compressionLevel=_compressionLevel - In the implementation block
@property (assign,nonatomic) int strategy;                      //@synthesize strategy=_strategy - In the implementation block
@property (assign,nonatomic) int windowBits;                    //@synthesize windowBits=_windowBits - In the implementation block
@property (assign,nonatomic) int memoryLevel;                   //@synthesize memoryLevel=_memoryLevel - In the implementation block
@property (assign,nonatomic) int chunkSize;                     //@synthesize chunkSize=_chunkSize - In the implementation block
+(id)defaultOptions;
-(void)setCompressionLevel:(int)arg1 ;
-(void)setCompressionStrategy:(int)arg1 ;
-(int)compressionLevel;
-(int)strategy;
-(void)setStrategy:(int)arg1 ;
-(int)windowBits;
-(void)setWindowBits:(int)arg1 ;
-(int)memoryLevel;
-(void)setMemoryLevel:(int)arg1 ;
-(int)chunkSize;
-(void)setChunkSize:(int)arg1 ;
@end

