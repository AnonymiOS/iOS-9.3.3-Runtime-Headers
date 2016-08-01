/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPDProtectedCloudStorageProxy;
@class CDPContext;

@interface CDPDPCSController : NSObject {

	CDPContext* _context;
	id<CDPDProtectedCloudStorageProxy> _pcsProxy;

}

@property (nonatomic,retain) id<CDPDProtectedCloudStorageProxy> pcsProxy;              //@synthesize pcsProxy=_pcsProxy - In the implementation block
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(void)_checkiCDPStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_enableCDPWithCompletion:(/*^block*/id)arg1 ;
-(void)_disableCDPWithCompletion:(/*^block*/id)arg1 ;
-(void)checkiCDPStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)enableCDPWithCompletion:(/*^block*/id)arg1 ;
-(void)disableCDPWithCompletion:(/*^block*/id)arg1 ;
-(id<CDPDProtectedCloudStorageProxy>)pcsProxy;
-(void)setPcsProxy:(id<CDPDProtectedCloudStorageProxy>)arg1 ;
@end

