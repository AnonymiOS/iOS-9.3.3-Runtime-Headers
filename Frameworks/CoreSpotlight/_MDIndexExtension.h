/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSExtension;

@interface _MDIndexExtension : NSObject {

	BOOL _entitlementVerified;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _containerPath;
	NSString* _containerID;
	NSString* _extensionID;
	NSExtension* _extension;

}

@property (readonly) BOOL isEnabled; 
@property (readonly) BOOL isInternal; 
@property (readonly) BOOL dontRunDuringMigration; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * containerPath;                        //@synthesize containerPath=_containerPath - In the implementation block
@property (nonatomic,retain) NSString * containerID;                          //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) NSString * extensionID;                          //@synthesize extensionID=_extensionID - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                         //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) BOOL entitlementVerified;                        //@synthesize entitlementVerified=_entitlementVerified - In the implementation block
-(id)description;
-(BOOL)isEnabled;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isInternal;
-(BOOL)dontRunDuringMigration;
-(BOOL)entitlementVerified;
-(void)setEntitlementVerified:(BOOL)arg1 ;
-(BOOL)_verifyIntegrityWithHostContext:(id)arg1 ;
-(void)_performJob:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithExtension:(id)arg1 queue:(id)arg2 containerPath:(id)arg3 containerID:(id)arg4 ;
-(NSString *)extensionID;
-(void)performJob:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setExtensionID:(NSString *)arg1 ;
-(void)setContainerPath:(NSString *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setContainerID:(NSString *)arg1 ;
-(NSString *)containerID;
-(NSString *)containerPath;
@end

