/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BBZeroingWeakReference, NSString;

@interface BBAssertion : NSObject {

	BBZeroingWeakReference* _delegate;
	NSString* _identifier;
	unsigned long long _transactionID;

}
-(void)dealloc;
-(id)identifier;
-(id)initWithDelegate:(id)arg1 identifier:(id)arg2 ;
-(void)increaseOrIgnoreTransactionID:(unsigned long long)arg1 ;
-(unsigned long long)transactionID;
@end

