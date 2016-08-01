/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSString, NSSet;

@interface _EARSpeechModelInfo : NSObject {

	SpeechModelInfo* _speechModelInfo;

}

@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSSet * samplingRates; 
@property (nonatomic,readonly) NSSet * tasks; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * phoneSetVersion; 
@property (nonatomic,readonly) NSString * acousticProfileVersion; 
-(NSString *)version;
-(NSString *)language;
-(id)initWithConfig:(id)arg1 ;
-(NSString *)acousticProfileVersion;
-(NSSet *)samplingRates;
-(NSString *)phoneSetVersion;
-(NSSet *)tasks;
@end

