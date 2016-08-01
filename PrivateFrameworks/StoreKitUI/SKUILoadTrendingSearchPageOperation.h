/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class SKUIClientContext, NSURL;

@interface SKUILoadTrendingSearchPageOperation : NSOperation {

	SKUIClientContext* _clientContext;
	/*^block*/id _outputBlock;
	NSURL* _url;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (copy) id outputBlock;                                             //@synthesize outputBlock=_outputBlock - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                      //@synthesize url=_url - In the implementation block
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)main;
-(void)setOutputBlock:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)outputBlock;
@end

