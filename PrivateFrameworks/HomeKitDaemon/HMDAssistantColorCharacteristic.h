/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HMDAssistantColorCharacteristic : NSObject {

	BOOL _mandatory;
	NSString* _readCharacteristicType;
	NSString* _writeCharacteristicType;
	NSString* _format;

}

@property (nonatomic,readonly) NSString * readCharacteristicType;               //@synthesize readCharacteristicType=_readCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSString * writeCharacteristicType;              //@synthesize writeCharacteristicType=_writeCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSString * format;                               //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL mandatory;                                  //@synthesize mandatory=_mandatory - In the implementation block
-(NSString *)format;
-(id)initWithReadCharacteristicType:(id)arg1 writeCharacteristicType:(id)arg2 format:(id)arg3 mandatory:(BOOL)arg4 ;
-(NSString *)readCharacteristicType;
-(NSString *)writeCharacteristicType;
-(BOOL)mandatory;
@end
