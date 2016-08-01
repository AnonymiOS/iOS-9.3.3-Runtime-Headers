/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:45 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSError;

@interface MCStoreAppMetadata : NSObject {

	BOOL _hasRetrievedMetadata;
	BOOL _success;
	NSString* _bundleID;
	NSNumber* _iTunesStoreID;
	NSNumber* _externalVersionIdentifer;
	NSString* _localizedAppTitle;
	long long _changeType;
	NSError* _error;

}

@property (nonatomic,retain) NSString * bundleID;                              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * iTunesStoreID;                         //@synthesize iTunesStoreID=_iTunesStoreID - In the implementation block
@property (nonatomic,retain) NSNumber * externalVersionIdentifer;              //@synthesize externalVersionIdentifer=_externalVersionIdentifer - In the implementation block
@property (nonatomic,retain) NSString * localizedAppTitle;                     //@synthesize localizedAppTitle=_localizedAppTitle - In the implementation block
@property (assign,nonatomic) BOOL hasRetrievedMetadata;                        //@synthesize hasRetrievedMetadata=_hasRetrievedMetadata - In the implementation block
@property (assign,nonatomic) long long changeType;                             //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) BOOL success;                                     //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
-(NSNumber *)iTunesStoreID;
-(void)setITunesStoreID:(NSNumber *)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(long long)changeType;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(id)initWithPurchase:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)updateWithMetadataResponse:(id)arg1 changeType:(long long)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(id)initWithBundleID:(id)arg1 iTunesStoreID:(id)arg2 ;
-(id)initWithMetadataResponse:(id)arg1 iTunesStoreID:(id)arg2 changeType:(long long)arg3 success:(BOOL)arg4 error:(id)arg5 ;
-(NSNumber *)externalVersionIdentifer;
-(void)setExternalVersionIdentifer:(NSNumber *)arg1 ;
-(NSString *)localizedAppTitle;
-(void)setLocalizedAppTitle:(NSString *)arg1 ;
-(BOOL)hasRetrievedMetadata;
-(void)setHasRetrievedMetadata:(BOOL)arg1 ;
@end

