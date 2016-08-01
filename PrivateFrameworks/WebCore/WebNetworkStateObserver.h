/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebNetworkStateObserver : NSObject {

	const NetworkStateNotifier* _notifier;

}

@property (assign,nonatomic) const NetworkStateNotifier* notifier;              //@synthesize notifier=_notifier - In the implementation block
-(void)networkStateChanged:(id)arg1 ;
-(id)initWithNotifier:(const NetworkStateNotifier*)arg1 ;
-(const NetworkStateNotifier*)notifier;
-(void)setNotifier:(const NetworkStateNotifier*)arg1 ;
-(void)dealloc;
@end

