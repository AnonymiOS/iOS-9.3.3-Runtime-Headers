/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SL_OOPAuthFlowDelegate
@required
-(BOOL)wantsInitialRedirect;
-(void)setAuthFlowCompletion:(/*^block*/id)arg1;
-(id)authURLForUsername:(id)arg1;
-(id)requestForAuthURL:(id)arg1;
-(BOOL)shouldHideWebViewForLoadWithRequest:(id)arg1;
-(void)webViewDidFinishLoadWithPageTitleSupplier:(/*^block*/id)arg1;

@end

