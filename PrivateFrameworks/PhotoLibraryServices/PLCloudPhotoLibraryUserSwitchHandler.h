/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UMUserSwitchStakeholder.h>

@protocol PLCloudUserSessionHandling;
@class NSString;

@interface PLCloudPhotoLibraryUserSwitchHandler : NSObject <UMUserSwitchStakeholder> {

	id<PLCloudUserSessionHandling> _sessionHandler;

}

@property (retain) id<PLCloudUserSessionHandling> sessionHandler;              //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setSessionHandler:(id<PLCloudUserSessionHandling>)arg1 ;
-(id<PLCloudUserSessionHandling>)sessionHandler;
-(void)willSwitchUser;
@end

