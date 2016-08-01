/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDeviceSettings.h>
@class NSString, IKJSRestrictions;


@protocol IKJSDeviceSettings <JSExport>
@property (nonatomic,retain,readonly) NSString * language; 
@property (nonatomic,retain,readonly) NSString * storefrontCountryCode; 
@property (nonatomic,readonly) IKJSRestrictions * restrictions; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * preferredVideoFormat; 
@property (nonatomic,retain,readonly) NSString * preferredVideoPreviewFormat; 
@property (nonatomic,readonly) CGSize Screen; 
@property (nonatomic,readonly) IKJSRestrictions * Restrictions; 
@property (nonatomic,readonly) CGSize screen; 
@required
-(NSString *)name;
-(CGSize)screen;
-(NSString *)language;
-(IKJSRestrictions *)restrictions;
-(NSString *)storefrontCountryCode;
-(CGSize)Screen;
-(IKJSRestrictions *)Restrictions;
-(NSString *)preferredVideoFormat;
-(NSString *)preferredVideoPreviewFormat;

@end

#import <libobjc.A.dylib/JSExport.h>

@protocol IKAppDeviceConfig;
@class NSString, IKJSRestrictions;

@interface IKJSDeviceSettings : IKJSObject <IKJSDeviceSettings, JSExport> {

	id _restrictionDidChangeToken;
	id<IKAppDeviceConfig> _deviceConfig;

}

@property (assign,nonatomic,__weak) id<IKAppDeviceConfig> deviceConfig;                    //@synthesize deviceConfig=_deviceConfig - In the implementation block
@property (nonatomic,retain,readonly) NSString * language; 
@property (nonatomic,retain,readonly) NSString * storefrontCountryCode; 
@property (nonatomic,readonly) IKJSRestrictions * restrictions; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * preferredVideoFormat; 
@property (nonatomic,retain,readonly) NSString * preferredVideoPreviewFormat; 
@property (nonatomic,readonly) CGSize Screen; 
@property (nonatomic,readonly) IKJSRestrictions * Restrictions; 
@property (nonatomic,readonly) CGSize screen; 
-(void)dealloc;
-(NSString *)name;
-(CGSize)screen;
-(NSString *)language;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
-(id<IKAppDeviceConfig>)deviceConfig;
-(IKJSRestrictions *)restrictions;
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(void)_restrictionsDidChangeNotification:(id)arg1 ;
-(id)_formatStringForVideoFormat:(unsigned long long)arg1 ;
-(NSString *)storefrontCountryCode;
-(CGSize)Screen;
-(IKJSRestrictions *)Restrictions;
-(NSString *)preferredVideoFormat;
-(NSString *)preferredVideoPreviewFormat;
@end

