/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray, NSString;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSMutableArray* _connections;
	long long _configurationID;
	BOOL _usesAppAudioSession;
	BOOL _configuresAppAudioSession;
	BOOL _allowedToRunInWindowedLayout;

}

@property (assign,nonatomic) long long configurationID;                         //@synthesize configurationID=_configurationID - In the implementation block
@property (nonatomic,readonly) NSArray * connectionConfigurations; 
@property (nonatomic,readonly) NSArray * sourceConfigurations; 
@property (nonatomic,readonly) NSArray * sinkConfigurations; 
@property (assign,nonatomic) BOOL usesAppAudioSession;                          //@synthesize usesAppAudioSession=_usesAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL configuresAppAudioSession;                    //@synthesize configuresAppAudioSession=_configuresAppAudioSession - In the implementation block
@property (assign,nonatomic) BOOL allowedToRunInWindowedLayout;                 //@synthesize allowedToRunInWindowedLayout=_allowedToRunInWindowedLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowedToRunInWindowedLayout;
-(NSArray *)connectionConfigurations;
-(BOOL)usesAppAudioSession;
-(BOOL)configuresAppAudioSession;
-(void)removeConnectionConfiguration:(id)arg1 ;
-(NSArray *)sourceConfigurations;
-(NSArray *)sinkConfigurations;
-(void)setUsesAppAudioSession:(BOOL)arg1 ;
-(void)setConfiguresAppAudioSession:(BOOL)arg1 ;
-(void)setAllowedToRunInWindowedLayout:(BOOL)arg1 ;
-(void)addConnectionConfiguration:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setConfigurationID:(long long)arg1 ;
-(long long)configurationID;
@end

