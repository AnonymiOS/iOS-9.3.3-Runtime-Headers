/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:54 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BWFormatRequirements, BWFormat, BWNode, BWNodeConnection, BWVideoFormat;

@interface BWNodeInput : NSObject {

	BOOL _mediaTypeIsVideo;
	BWFormatRequirements* _formatRequirements;
	BWFormat* _format;
	long long _configurationID;
	unsigned _mediaType;
	BOOL _enabled;
	unsigned long long _index;
	BWNode* _node;
	BWNodeConnection* _connection;
	int _passthroughMode;
	int _retainedBufferCount;
	int _delayedBufferCount;
	int _indefinitelyHeldBufferCount;
	BWVideoFormat* _liveFormat;
	long long _liveConfigurationID;
	unsigned _numberOfBuffersReceived;
	unsigned _numberOfBuffersDropped;

}

@property (nonatomic,readonly) unsigned mediaType;                                 //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                           //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BWNode * node;                                      //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) BWNodeConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) BWFormatRequirements * formatRequirements; 
@property (nonatomic,copy) BWFormat * format; 
@property (nonatomic,readonly) BWVideoFormat * videoFormat; 
@property (assign,nonatomic) long long configurationID;                            //@synthesize configurationID=_configurationID - In the implementation block
@property (assign,nonatomic) int passthroughMode;                                  //@synthesize passthroughMode=_passthroughMode - In the implementation block
@property (assign,nonatomic) BOOL passesBuffersDownstream; 
@property (assign,nonatomic) int retainedBufferCount;                              //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
@property (assign,nonatomic) int delayedBufferCount;                               //@synthesize delayedBufferCount=_delayedBufferCount - In the implementation block
@property (assign,nonatomic) int indefinitelyHeldBufferCount;                      //@synthesize indefinitelyHeldBufferCount=_indefinitelyHeldBufferCount - In the implementation block
@property (nonatomic,retain) BWFormat * liveFormat;                                //@synthesize liveFormat=_liveFormat - In the implementation block
@property (nonatomic,readonly) long long liveConfigurationID;                      //@synthesize liveConfigurationID=_liveConfigurationID - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersReceived;                   //@synthesize numberOfBuffersReceived=_numberOfBuffersReceived - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersDropped;                    //@synthesize numberOfBuffersDropped=_numberOfBuffersDropped - In the implementation block
+(void)initialize;
-(void)handleMessage:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(unsigned long long)index;
-(BWNode *)node;
-(BWNodeConnection *)connection;
-(void)setConnection:(BWNodeConnection *)arg1 ;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 index:(unsigned long long)arg3 ;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 ;
-(BWVideoFormat *)videoFormat;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(void)_handleConfigurationLiveMessage:(id)arg1 ;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(void)setPassesBuffersDownstream:(BOOL)arg1 ;
-(BOOL)passesBuffersDownstream;
-(int)passthroughMode;
-(void)setPassthroughMode:(int)arg1 ;
-(int)retainedBufferCount;
-(int)delayedBufferCount;
-(void)setDelayedBufferCount:(int)arg1 ;
-(int)indefinitelyHeldBufferCount;
-(void)setIndefinitelyHeldBufferCount:(int)arg1 ;
-(BWFormat *)liveFormat;
-(long long)liveConfigurationID;
-(unsigned)numberOfBuffersReceived;
-(unsigned)numberOfBuffersDropped;
-(void)setRetainedBufferCount:(int)arg1 ;
-(void)setConfigurationID:(long long)arg1 ;
-(long long)configurationID;
-(unsigned)mediaType;
-(BWFormat *)format;
-(void)setFormat:(BWFormat *)arg1 ;
@end

