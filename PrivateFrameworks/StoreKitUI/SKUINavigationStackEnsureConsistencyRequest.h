/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUINavigationStackEnsureConsistencyRequest : NSObject <NSCopying> {

	BOOL _operationDidComplete;
	long long _navigationControllerOperation;

}

@property (nonatomic,readonly) long long navigationControllerOperation;              //@synthesize navigationControllerOperation=_navigationControllerOperation - In the implementation block
@property (nonatomic,readonly) BOOL operationDidComplete;                            //@synthesize operationDidComplete=_operationDidComplete - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithNavigationControllerOperation:(long long)arg1 operationDidComplete:(BOOL)arg2 ;
-(long long)navigationControllerOperation;
-(BOOL)operationDidComplete;
@end

