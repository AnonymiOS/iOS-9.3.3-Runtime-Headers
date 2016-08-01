/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADBannerViewInternalDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ADAdSlotDelegate;
@class NSString, NSData, NSMutableArray, NSArray;

@interface ADAdSlot : NSObject <ADBannerViewInternalDelegate, NSSecureCoding> {

	id<ADAdSlotDelegate> _delegate;
	BOOL _gatewayAdSlot;
	BOOL _didBeginPlayback;
	BOOL _didRequest;
	BOOL _didReportFinish;
	NSString* _identifier;
	NSData* _stationData;
	NSData* _previousSongData;
	NSData* _followingSongData;
	NSMutableArray* _visuallyEngagedBanners;
	NSMutableArray* _visuallyDisengagedBanners;
	NSMutableArray* _pendingBannerLoads;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic,__weak) id<ADAdSlotDelegate> delegate; 
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL gatewayAdSlot;                                      //@synthesize gatewayAdSlot=_gatewayAdSlot - In the implementation block
@property (nonatomic,copy) NSData * stationData;                                      //@synthesize stationData=_stationData - In the implementation block
@property (nonatomic,copy) NSData * previousSongData;                                 //@synthesize previousSongData=_previousSongData - In the implementation block
@property (nonatomic,copy) NSData * followingSongData;                                //@synthesize followingSongData=_followingSongData - In the implementation block
@property (nonatomic,retain,readonly) NSArray * ads; 
@property (nonatomic,retain) NSMutableArray * visuallyEngagedBanners;                 //@synthesize visuallyEngagedBanners=_visuallyEngagedBanners - In the implementation block
@property (nonatomic,retain) NSMutableArray * visuallyDisengagedBanners;              //@synthesize visuallyDisengagedBanners=_visuallyDisengagedBanners - In the implementation block
@property (assign,nonatomic) BOOL didBeginPlayback;                                   //@synthesize didBeginPlayback=_didBeginPlayback - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingBannerLoads;                     //@synthesize pendingBannerLoads=_pendingBannerLoads - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL didRequest;                                         //@synthesize didRequest=_didRequest - In the implementation block
@property (assign,nonatomic) BOOL didReportFinish;                                    //@synthesize didReportFinish=_didReportFinish - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<ADAdSlotDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<ADAdSlotDelegate>)delegate;
-(NSString *)identifier;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)_visuallyEngagedDidChange;
-(BOOL)gatewayAdSlot;
-(NSData *)stationData;
-(NSData *)previousSongData;
-(NSData *)followingSongData;
-(NSMutableArray *)pendingBannerLoads;
-(void)setPendingBannerLoads:(NSMutableArray *)arg1 ;
-(id)_bannersForAds:(id)arg1 ;
-(void)setVisuallyEngagedBanners:(NSMutableArray *)arg1 ;
-(NSMutableArray *)visuallyEngagedBanners;
-(void)setVisuallyDisengagedBanners:(NSMutableArray *)arg1 ;
-(NSMutableArray *)visuallyDisengagedBanners;
-(void)_considerInvokingCompletionHandler;
-(BOOL)didBeginPlayback;
-(BOOL)didReportFinish;
-(void)setDidReportFinish:(BOOL)arg1 ;
-(void)loadVisuallyEngagedAds:(id)arg1 visuallyDisengagedAds:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)willBeginPlaybackOfAds:(id)arg1 forSpace:(int)arg2 ;
-(void)didFinishPlaybackOfAds:(id)arg1 skippedCount:(long long)arg2 ;
-(NSArray *)ads;
-(void)setGatewayAdSlot:(BOOL)arg1 ;
-(void)setStationData:(NSData *)arg1 ;
-(void)setPreviousSongData:(NSData *)arg1 ;
-(void)setFollowingSongData:(NSData *)arg1 ;
-(void)setDidBeginPlayback:(BOOL)arg1 ;
-(BOOL)didRequest;
-(void)setDidRequest:(BOOL)arg1 ;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
@end

