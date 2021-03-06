/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSLock;

@interface ISClient : NSObject {

	NSString* _appleClientApplication;
	NSString* _appleClientVersions;
	NSString* _identifier;
	NSLock* _lock;
	NSString* _partnerHeader;
	NSString* _userAgent;

}

@property (copy) NSString * appleClientApplication; 
@property (copy) NSString * userAgent; 
@property (readonly) NSString * appleClientVersions; 
@property (copy) NSString * identifier; 
@property (copy) NSString * partnerHeader; 
+(id)currentClient;
-(void)dealloc;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(NSString *)appleClientApplication;
-(NSString *)appleClientVersions;
-(void)setPartnerHeader:(NSString *)arg1 ;
-(void)_softwareMapInvalidatedNotification:(id)arg1 ;
-(id)_appleClientVersions;
-(id)localStoreFrontID;
-(NSString *)partnerHeader;
-(void)setAppleClientApplication:(NSString *)arg1 ;
@end

