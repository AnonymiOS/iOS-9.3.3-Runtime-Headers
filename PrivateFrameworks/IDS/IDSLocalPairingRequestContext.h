/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSLocalPairingResponseHandler, IMTimer;

@interface IDSLocalPairingRequestContext : NSObject {

	IDSLocalPairingResponseHandler* _responseHandler;
	/*^block*/id _timeoutBlock;
	IMTimer* _systemTimer;

}
-(void)dealloc;
-(id)initWithResponseHandler:(id)arg1 timeoutBlock:(/*^block*/id)arg2 systemTimer:(id)arg3 ;
-(/*^block*/id)timeoutBlock;
-(id)systemTimer;
-(void)killSystemTimer;
-(id)responseHandler;
@end

