/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class PKDiscoveryDriver, NSString;

@interface PKDiscoveryLSWatcher : NSObject <LSApplicationWorkspaceObserverProtocol> {

	PKDiscoveryDriver* _wdriver;

}

@property (__weak) PKDiscoveryDriver * wdriver;                     //@synthesize wdriver=_wdriver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)update;
-(void)stopUpdates;
-(void)setWdriver:(PKDiscoveryDriver *)arg1 ;
-(PKDiscoveryDriver *)wdriver;
-(void)pluginsDidInstall:(id)arg1 ;
-(void)pluginsDidUninstall:(id)arg1 ;
-(id)initWithDriver:(id)arg1 ;
@end

