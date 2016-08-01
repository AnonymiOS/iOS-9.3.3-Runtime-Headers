/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol iAUPServerDelegate;
@class NSMutableData, FirmwareBundle;

@interface iAUPServer : NSObject {

	id<iAUPServerDelegate> _delegate;
	int _parserState;
	BOOL _escapeInProgress;
	unsigned _telegramLength;
	unsigned char _telegramChecksum;
	NSMutableData* _telegramDataIn;
	unsigned short objectBlockTransferSizes[4];
	unsigned _firmwareImageBaseTransferAddress;
	FirmwareBundle* firmwareBundle;

}

@property (assign) id<iAUPServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) FirmwareBundle * firmwareBundle; 
+(id)sharedServer;
-(void)setDelegate:(id<iAUPServerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<iAUPServerDelegate>)delegate;
-(void)appendToLog:(id)arg1 ;
-(void)setFirmwareBundle:(FirmwareBundle *)arg1 ;
-(void)processInByte:(unsigned char)arg1 ;
-(void)resetParser;
-(void)processInTelegram;
-(void)logCommand:(unsigned char)arg1 payload:(char*)arg2 length:(unsigned)arg3 ;
-(void)sendCommand:(unsigned char)arg1 payload:(char*)arg2 payload_length:(unsigned short)arg3 ;
-(unsigned char)appendByteWithEscaping:(unsigned char)arg1 toObject:(id*)arg2 ;
-(unsigned)supportedTargetProductIDCode;
-(void)processDataFromAccessory:(id)arg1 ;
-(void)setBootloaderEntry;
-(FirmwareBundle *)firmwareBundle;
@end

