/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RMSServiceProvider <NSObject>
@property (assign,nonatomic,__weak) id<RMSServiceProviderDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<RMSServiceProviderDelegate>)delegate;
-(void)endDiscovery;
-(void)beginDiscovery;

@end

