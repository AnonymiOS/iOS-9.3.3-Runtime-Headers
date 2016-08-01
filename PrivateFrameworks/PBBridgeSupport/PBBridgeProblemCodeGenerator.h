/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
@class NSString, NSMutableString;

@interface PBBridgeProblemCodeGenerator : NSObject {

	NSString* _buildVersion;
	NSString* _payload;
	NSMutableString* _eventString;
	NSString* _errorCode;
	NSString* _advertisingName;

}

@property (nonatomic,readonly) NSString * buildVersion;                  //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy) NSString * payload;                           //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSMutableString * eventString;              //@synthesize eventString=_eventString - In the implementation block
@property (nonatomic,copy) NSString * errorCode;                         //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy) NSString * advertisingName;                   //@synthesize advertisingName=_advertisingName - In the implementation block
+(id)sharedReportHelper;
-(id)init;
-(NSString *)payload;
-(NSString *)buildVersion;
-(void)setPayload:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)errorCode;
-(id)_generateReportCodeForRange:(NSRange)arg1 forFrame:(long long)arg2 ofTotalFrames:(long long)arg3 ;
-(void)beginInstance;
-(id)generateReportCode;
-(NSMutableString *)eventString;
-(void)setEventString:(NSMutableString *)arg1 ;
-(NSString *)advertisingName;
-(void)setAdvertisingName:(NSString *)arg1 ;
@end

