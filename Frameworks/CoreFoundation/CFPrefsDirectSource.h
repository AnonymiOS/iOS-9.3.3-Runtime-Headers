/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsPlistSource.h>

@class CFPDSource;

@interface CFPrefsDirectSource : CFPrefsPlistSource {

	CFPDSource* _underlyingSource;
	unsigned long long _inode;
	BOOL _managed;

}
-(BOOL)managed;
-(void)sendFullyPreparedMessage:(id)arg1 settingValue:(void*)arg2 forKey:(CFStringRef)arg3 retryCount:(int)arg4 ;
-(id)createRequestNewContentMessageForDaemon:(BOOL)arg1 ;
-(unsigned char)alreadylocked_requestNewData;
-(void)setManaged:(BOOL)arg1 ;
-(void*)copyReplyForDirectMessage:(id)arg1 error:(BOOL*)arg2 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)sendMessage:(id)arg1 ;
@end

