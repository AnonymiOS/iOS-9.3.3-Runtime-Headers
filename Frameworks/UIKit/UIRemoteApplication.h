/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIRemoteApplication : NSObject {

	NSString* _machServiceName;
	unsigned _port;

}
-(void)dealloc;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)updatePort;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)statusBarWillChangeOrientation:(long long)arg1 duration:(float)arg2 ;
-(void)sheetWithRemoteViewIdentifierDidDismiss:(id)arg1 ;
-(void)wakeTimerFired;
-(void)didTakeScreenshot;
@end

