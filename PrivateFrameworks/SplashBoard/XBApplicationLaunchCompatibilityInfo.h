/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class XBLaunchInterface, NSArray, NSString;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSCoding> {

	XBLaunchInterface* _defaultInterface;
	BOOL _launchesOpaque;
	NSArray* _launchInterfaces;
	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _sandboxPath;
	NSString* _bundleContainerPath;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                       //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * sandboxPath;                                      //@synthesize sandboxPath=_sandboxPath - In the implementation block
@property (nonatomic,readonly) XBLaunchInterface * defaultLaunchInterface; 
@property (nonatomic,copy,readonly) NSArray * launchInterfaces;                         //@synthesize launchInterfaces=_launchInterfaces - In the implementation block
@property (assign,nonatomic) BOOL launchesOpaque;                                       //@synthesize launchesOpaque=_launchesOpaque - In the implementation block
@property (nonatomic,readonly) BOOL allowsSavingLaunchImages; 
@property (nonatomic,copy) NSString * bundleContainerPath;                              //@synthesize bundleContainerPath=_bundleContainerPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_snapshotPredicateForRequest:(id)arg1 ;
+(id)_compatibilityInfoForAppInfo:(id)arg1 ;
+(void)removeCompatibilityInfoForBundleIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(id)initWithBundle:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setSandboxPath:(NSString *)arg1 ;
-(void)setBundleContainerPath:(NSString *)arg1 ;
-(XBLaunchInterface *)defaultLaunchInterface;
-(void)_generateLaunchImageForRequest:(id)arg1 remoteContextID:(unsigned)arg2 snapshotProvider:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)configureSnapshot:(id)arg1 forLaunchRequest:(id)arg2 ;
-(BOOL)allowsSavingLaunchImages;
-(void)_writeOutChanges;
-(id)launchInterfaceWithIdentifier:(id)arg1 ;
-(id)launchInterfaceIdentifierForRequest:(id)arg1 ;
-(id)existingLaunchImageForRequest:(id)arg1 ;
-(void)addLaunchImageForRequest:(id)arg1 remoteContextID:(unsigned)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)configureSnapshot:(id)arg1 withLaunchImageForRequest:(id)arg2 remoteContextID:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)launchInterfaces;
-(NSString *)sandboxPath;
-(BOOL)launchesOpaque;
-(void)setLaunchesOpaque:(BOOL)arg1 ;
-(NSString *)bundleContainerPath;
@end

