/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:32 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface TUCallGroup : NSObject {

	NSArray* _calls;

}

@property (retain) NSArray * calls;              //@synthesize calls=_calls - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)displayName;
-(int)status;
-(NSArray *)calls;
-(void)setCalls:(NSArray *)arg1 ;
@end
