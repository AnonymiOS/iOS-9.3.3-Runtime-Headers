/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSSiteMetadataProviderDelegate <NSObject>
@required
-(void)siteMetadataProvider:(id)arg1 didReceiveUpdateForRequest:(id)arg2;
-(void)siteMetadataProvider:(id)arg1 didFinishRequestWithoutReceivingNewData:(id)arg2;
-(void)siteMetadataProvider:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
-(id)siteMetadataProvider:(id)arg1 registerRequest:(id)arg2 priority:(long long)arg3 responseHandler:(/*^block*/id)arg4;
-(id)siteMetadataProvider:(id)arg1 registerOneTimeRequest:(id)arg2 priority:(long long)arg3 responseHandler:(/*^block*/id)arg4;
-(void)siteMetadataProvider:(id)arg1 cancelRequestsWithTokens:(id)arg2;

@end

