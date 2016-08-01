/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BLEMIDIAccessor : NSObject
+(id)uuidForMIDIDevice:(unsigned)arg1 ;
+(unsigned)midiDeviceForUUID:(id)arg1 ;
+(BOOL)deviceIsLocalPeripheral:(unsigned)arg1 ;
+(BOOL)deviceIsRemotePeripheral:(unsigned)arg1 ;
+(unsigned)localPeripheral;
+(id)nameForMIDIDevice:(unsigned)arg1 ;
+(unsigned)midiDeviceForUUID:(id)arg1 isLocalPeripheral:(BOOL)arg2 isRemotePeripheral:(BOOL)arg3 ;
+(BOOL)deviceIsOnline:(unsigned)arg1 ;
+(unsigned)nullDevice;
+(id)localPeripheralName;
+(BOOL)deviceIsNullDevice:(unsigned)arg1 ;
+(BOOL)uuidIsForgettable:(id)arg1 ;
+(unsigned short)timeStampOffset:(unsigned long long)arg1 ;
+(unsigned short)reconstructWithHighByte:(unsigned char)arg1 lowByte:(unsigned char)arg2 overflow:(BOOL)arg3 ;
+(unsigned long long)timeStampWithEpoch:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
+(void)splitOffset:(unsigned short)arg1 intoHeaderByte:(char*)arg2 timeStampByte:(char*)arg3 ;
+(id)logEvent:(char*)arg1 length:(unsigned short)arg2 timeStamp:(unsigned long long)arg3 ;
@end

