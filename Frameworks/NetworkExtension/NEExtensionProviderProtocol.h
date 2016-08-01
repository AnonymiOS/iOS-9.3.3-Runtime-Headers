/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEExtensionProviderProtocol <NSObject>
@required
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1;
-(void)wake;
-(void)dispose;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)stopWithReason:(int)arg1;

@end

