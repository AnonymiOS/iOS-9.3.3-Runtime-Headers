/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject {

	LSApplicationWorkspace* _lsWorkspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * lsWorkspace;              //@synthesize lsWorkspace=_lsWorkspace - In the implementation block
+(id)defaultWorkspace;
-(void)dealloc;
-(void)openSettings;
-(void)openICloudSettings;
-(BOOL)applicationIsInstalled:(id)arg1 ;
-(id)applicationProxyForBundleID:(id)arg1 ;
-(void)setLsWorkspace:(LSApplicationWorkspace *)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1 ;
-(id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1 ;
-(LSApplicationWorkspace *)lsWorkspace;
-(id)initWithWorkspace:(id)arg1 ;
@end

