/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString, NSArray, AVAudioFormat, NSData;

@interface AVAudioConverter : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long bitRate; 
@property (nonatomic,retain) NSString * bitRateStrategy; 
@property (nonatomic,readonly) long long maximumOutputPacketSize; 
@property (nonatomic,readonly) NSArray * availableEncodeBitRates; 
@property (nonatomic,readonly) NSArray * applicableEncodeBitRates; 
@property (nonatomic,readonly) NSArray * availableEncodeSampleRates; 
@property (nonatomic,readonly) NSArray * applicableEncodeSampleRates; 
@property (nonatomic,readonly) NSArray * availableEncodeChannelLayoutTags; 
@property (nonatomic,readonly) AVAudioFormat * inputFormat; 
@property (nonatomic,readonly) AVAudioFormat * outputFormat; 
@property (nonatomic,retain) NSArray * channelMap; 
@property (nonatomic,retain) NSData * magicCookie; 
@property (assign,nonatomic) BOOL downmix; 
@property (assign,nonatomic) BOOL dither; 
@property (assign,nonatomic) long long sampleRateConverterQuality; 
@property (nonatomic,retain) NSString * sampleRateConverterAlgorithm; 
@property (assign,nonatomic) long long primeMethod; 
@property (assign,nonatomic) AVAudioConverterPrimeInfo primeInfo; 
-(NSString *)bitRateStrategy;
-(void)setBitRateStrategy:(NSString *)arg1 ;
-(NSArray *)availableEncodeBitRates;
-(NSArray *)applicableEncodeBitRates;
-(NSArray *)availableEncodeSampleRates;
-(NSArray *)applicableEncodeSampleRates;
-(NSArray *)availableEncodeChannelLayoutTags;
-(void)setBitRate:(long long)arg1 ;
-(long long)bitRate;
-(AVAudioFormat *)outputFormat;
-(void)dealloc;
-(void)reset;
-(id)initFromFormat:(id)arg1 toFormat:(id)arg2 ;
-(AVAudioFormat *)inputFormat;
-(BOOL)dither;
-(BOOL)downmix;
-(void)setDither:(BOOL)arg1 ;
-(void)setDownmix:(BOOL)arg1 ;
-(long long)sampleRateConverterQuality;
-(void)setSampleRateConverterQuality:(long long)arg1 ;
-(NSString *)sampleRateConverterAlgorithm;
-(void)setSampleRateConverterAlgorithm:(NSString *)arg1 ;
-(NSData *)magicCookie;
-(void)setMagicCookie:(NSData *)arg1 ;
-(NSArray *)channelMap;
-(void)setChannelMap:(NSArray *)arg1 ;
-(long long)maximumOutputPacketSize;
-(long long)primeMethod;
-(void)setPrimeMethod:(long long)arg1 ;
-(AVAudioConverterPrimeInfo)primeInfo;
-(void)setPrimeInfo:(AVAudioConverterPrimeInfo)arg1 ;
-(BOOL)convertToBuffer:(id)arg1 fromBuffer:(id)arg2 error:(id*)arg3 ;
-(long long)convertToBuffer:(id)arg1 error:(id*)arg2 withInputFromBlock:(/*^block*/id)arg3 ;
@end

