/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSRecursiveLock;

@interface IMDeviceSupport : NSObject {

	NSString* _model;
	NSString* _productName;
	NSString* _productVersion;
	NSString* _buildVersion;
	NSRecursiveLock* _lock;

}

@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * userAgentString; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * productBuildVersion; 
@property (nonatomic,readonly) NSString * deviceInformationString; 
+(id)sharedInstance;
+(id)marketingNameForModel:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)model;
-(void)_generateProductInformation;
-(NSString *)userAgentString;
-(NSString *)deviceInformationString;
-(NSString *)productName;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
@end

