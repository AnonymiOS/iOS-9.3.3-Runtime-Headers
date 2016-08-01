/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol CRKClassSessionAdvertiserDelegate;
@class NSString, NSNetService, CRKClassSessionBeacon, NSTimer, DMFControlSessionIdentifier;

@interface CRKClassSessionAdvertiser : NSObject <NSNetServiceDelegate> {

	NSString* mServiceType;
	NSNetService* mNetService;
	CRKClassSessionBeacon* mSessionBeacon;
	NSTimer* mBeaconToggleTimer;
	BOOL _includeNearbyStudents;
	id<CRKClassSessionAdvertiserDelegate> _delegate;
	DMFControlSessionIdentifier* _classSessionIdentifier;

}

@property (assign,nonatomic,__weak) id<CRKClassSessionAdvertiserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) DMFControlSessionIdentifier * classSessionIdentifier;                 //@synthesize classSessionIdentifier=_classSessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL includeNearbyStudents;                                         //@synthesize includeNearbyStudents=_includeNearbyStudents - In the implementation block
@property (nonatomic,readonly) BOOL isAdvertising; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)setDelegate:(id<CRKClassSessionAdvertiserDelegate>)arg1 ;
-(id)init;
-(id<CRKClassSessionAdvertiserDelegate>)delegate;
-(id)initWithServiceType:(id)arg1 ;
-(void)stopBeacon;
-(BOOL)isAdvertising;
-(void)registerDefaults;
-(DMFControlSessionIdentifier *)classSessionIdentifier;
-(void)updateSessionBeacon;
-(void)startClassBeacon;
-(void)scheduleBeaconToggle:(id)arg1 ;
-(id)instructorSocketOptions;
-(void)setClassSessionIdentifier:(DMFControlSessionIdentifier *)arg1 ;
-(void)setIncludeNearbyStudents:(BOOL)arg1 ;
-(BOOL)includeNearbyStudents;
@end

