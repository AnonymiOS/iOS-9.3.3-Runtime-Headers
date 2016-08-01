/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, AnalyticsWorkspace, NetworkAttachmentAnalytics, NSMutableDictionary, NSManagedObjectID, NSDictionary, NetworkAttachment, StopWatch, LiveRoutePerf, NSMutableSet, NSUUID;

@interface NetworkEpoch : NSObject <NSCopying> {

	NSDate* createdAt;
	NSString* identifier;
	BOOL fromRoamingEvent;
	AnalyticsWorkspace* workspace;
	NetworkAttachmentAnalytics* naspace;
	NSMutableDictionary* tickers;
	NSManagedObjectID* currentLiveRoutePerfObjectID;
	double lastBytesDelta;
	NSDate* lastBytesPartialUpdate;
	BOOL isSnapshot;
	NSDictionary* scores;
	BOOL isLowLqm;
	BOOL isLowq;
	BOOL isFaulty;
	BOOL isKnownGood;
	BOOL _active;
	BOOL _oncell;
	BOOL _supportsIPv4;
	BOOL _supportsIPv6;
	BOOL _knownGoodNotified;
	BOOL _deleteNetworkAttachmentsWhenDone;
	int _bars;
	unsigned _seqno;
	NetworkAttachment* _durable;
	NStatSourceRef _defRoute4;
	NStatSourceRef _defRoute6;
	NSString* _interfaceName;
	double _lqmTransitions;
	NSDate* _lastCountedDown;
	StopWatch* _overall;
	StopWatch* _lowLqm;
	StopWatch* _lowq;
	StopWatch* _fatal;
	LiveRoutePerf* _partial;
	LiveRoutePerf* _partial4;
	LiveRoutePerf* _partial6;
	double _initialRttAvg;
	double _initialRttVar;
	double _topDownlRate;
	NSMutableSet* _hasDNS;
	NSMutableSet* _impDNS;
	NSString* _hasGW;
	NSUUID* _uuid;

}

@property (readonly) BOOL active;                                                 //@synthesize active=_active - In the implementation block
@property (readonly) BOOL oncell;                                                 //@synthesize oncell=_oncell - In the implementation block
@property (assign,nonatomic) NStatSourceRef defRoute4;                            //@synthesize defRoute4=_defRoute4 - In the implementation block
@property (assign,nonatomic) NStatSourceRef defRoute6;                            //@synthesize defRoute6=_defRoute6 - In the implementation block
@property (assign,nonatomic) BOOL supportsIPv4;                                   //@synthesize supportsIPv4=_supportsIPv4 - In the implementation block
@property (assign,nonatomic) BOOL supportsIPv6;                                   //@synthesize supportsIPv6=_supportsIPv6 - In the implementation block
@property (readonly) NSString * primaryKey; 
@property (readonly) NSString * interfaceName;                                    //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) int bars;                                                      //@synthesize bars=_bars - In the implementation block
@property (assign) double lqmTransitions;                                         //@synthesize lqmTransitions=_lqmTransitions - In the implementation block
@property (nonatomic,retain) NSDate * lastCountedDown;                            //@synthesize lastCountedDown=_lastCountedDown - In the implementation block
@property (nonatomic,retain) StopWatch * overall;                                 //@synthesize overall=_overall - In the implementation block
@property (nonatomic,retain) StopWatch * lowLqm;                                  //@synthesize lowLqm=_lowLqm - In the implementation block
@property (nonatomic,retain) StopWatch * lowq;                                    //@synthesize lowq=_lowq - In the implementation block
@property (nonatomic,retain) StopWatch * fatal;                                   //@synthesize fatal=_fatal - In the implementation block
@property (nonatomic,retain) LiveRoutePerf * partial;                             //@synthesize partial=_partial - In the implementation block
@property (nonatomic,retain) LiveRoutePerf * partial4;                            //@synthesize partial4=_partial4 - In the implementation block
@property (nonatomic,retain) LiveRoutePerf * partial6;                            //@synthesize partial6=_partial6 - In the implementation block
@property (nonatomic,readonly) double initialRttAvg;                              //@synthesize initialRttAvg=_initialRttAvg - In the implementation block
@property (nonatomic,readonly) double initialRttVar;                              //@synthesize initialRttVar=_initialRttVar - In the implementation block
@property (assign,nonatomic) double topDownlRate;                                 //@synthesize topDownlRate=_topDownlRate - In the implementation block
@property (nonatomic,retain) NSMutableSet * hasDNS;                               //@synthesize hasDNS=_hasDNS - In the implementation block
@property (nonatomic,retain) NSMutableSet * impDNS;                               //@synthesize impDNS=_impDNS - In the implementation block
@property (nonatomic,retain) NSString * hasGW;                                    //@synthesize hasGW=_hasGW - In the implementation block
@property (nonatomic,readonly) NetworkAttachment * durable;                       //@synthesize durable=_durable - In the implementation block
@property (nonatomic,readonly) LiveRoutePerf * currentLiveRoutePerf; 
@property (nonatomic,retain) NSUUID * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
@property (assign) BOOL knownGoodNotified;                                        //@synthesize knownGoodNotified=_knownGoodNotified - In the implementation block
@property (readonly) unsigned seqno;                                              //@synthesize seqno=_seqno - In the implementation block
@property (assign,nonatomic) BOOL deleteNetworkAttachmentsWhenDone;               //@synthesize deleteNetworkAttachmentsWhenDone=_deleteNetworkAttachmentsWhenDone - In the implementation block
+(BOOL)parsePrimaryKeyStr:(const char*)arg1 majorIDLengthInBytes:(int*)arg2 minorIDLengthInBytes:(int*)arg3 ;
+(BOOL)parsePrimaryKey:(id)arg1 majorID:(id*)arg2 minorID:(id*)arg3 ;
+(void)resetDataForSSID:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3 ;
+(id)epochWithPrimaryKey:(id)arg1 interfaceName:(id)arg2 isCell:(BOOL)arg3 maxBars:(int)arg4 roamingEvent:(BOOL)arg5 roamingAttrs:(id)arg6 supportsIPv4:(BOOL)arg7 supportsIPv6:(BOOL)arg8 inWorkspace:(id)arg9 andQueue:(id)arg10 ;
+(unsigned long long)coalescingFactor;
+(BOOL)pruneDataOlderThan:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3 ;
+(id)snapshotsIn:(id)arg1 olderThan:(id)arg2 ;
+(void)resetDataFor:(id)arg1 exceptFor:(id)arg2 inWorkspace:(id)arg3 ;
-(NSString *)primaryKey;
-(void)dealloc;
-(id)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)active;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setPartial:(LiveRoutePerf *)arg1 ;
-(NSString *)interfaceName;
-(void)setSupportsIPv4:(BOOL)arg1 ;
-(void)setSupportsIPv6:(BOOL)arg1 ;
-(BOOL)supportsIPv4;
-(BOOL)supportsIPv6;
-(NSMutableSet *)hasDNS;
-(void)unloadDurableState;
-(BOOL)deleteNetworkAttachmentsWhenDone;
-(void)setDeleteNetworkAttachmentsWhenDone:(BOOL)arg1 ;
-(long long)getMatchingRTLocationOfInterestType;
-(StopWatch *)fatal;
-(int)compareToSnapshot:(id)arg1 ;
-(BOOL)oncell;
-(NetworkAttachment *)durable;
-(StopWatch *)lowq;
-(StopWatch *)lowLqm;
-(double)lqmTransitions;
-(void)setLqmTransitions:(double)arg1 ;
-(NSString *)hasGW;
-(void)setHasGW:(NSString *)arg1 ;
-(BOOL)hasCountDownActive:(id)arg1 ;
-(LiveRoutePerf *)partial;
-(void)updateMetrics:(id)arg1 source:(NStatSourceRef)arg2 wasProgress:(/*^block*/id)arg3 ;
-(NStatSourceRef)defRoute4;
-(NStatSourceRef)defRoute6;
-(void)setDefRoute4:(NStatSourceRef)arg1 ;
-(void)setDefRoute6:(NStatSourceRef)arg1 ;
-(double)topDownlRate;
-(void)setTopDownlRate:(double)arg1 ;
-(NSMutableSet *)impDNS;
-(StopWatch *)overall;
-(unsigned)seqno;
-(void)retire;
-(BOOL)knownGoodNotified;
-(BOOL)countDownStop:(id)arg1 eventTimeStamp:(id)arg2 ;
-(BOOL)createCountDown:(id)arg1 atTime:(id)arg2 nextTick:(unsigned long long)arg3 ticksTotal:(unsigned long long)arg4 onQueue:(id)arg5 withIterationBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(BOOL)hasTypicalShortStay;
-(void)setKnownGoodNotified:(BOOL)arg1 ;
-(BOOL)matchesLOI:(long long)arg1 ;
-(id)_initWithPrimaryKey:(id)arg1 interfaceName:(id)arg2 isCell:(BOOL)arg3 maxBars:(int)arg4 roamingEvent:(BOOL)arg5 roamingAttrs:(id)arg6 supportsIPv4:(BOOL)arg7 supportsIPv6:(BOOL)arg8 inWorkspace:(id)arg9 andQueue:(id)arg10 ;
-(id)_networkAttachmentDurableState;
-(void)_retrieveLOIAttrsForDurableStateWithPrimaryKey:(id)arg1 isCell:(BOOL)arg2 roamingEvent:(BOOL)arg3 roamingAttrs:(id)arg4 onQueue:(id)arg5 ;
-(void)setLastCountedDown:(NSDate *)arg1 ;
-(BOOL)_isLiveRoutePerfinScope:(id)arg1 forTime:(id)arg2 ;
-(id)establishPartials:(id)arg1 withFlag:(BOOL)arg2 ;
-(LiveRoutePerf *)currentLiveRoutePerf;
-(int)bars;
-(void)setBars:(int)arg1 ;
-(NSDate *)lastCountedDown;
-(void)setOverall:(StopWatch *)arg1 ;
-(void)setLowLqm:(StopWatch *)arg1 ;
-(void)setLowq:(StopWatch *)arg1 ;
-(void)setFatal:(StopWatch *)arg1 ;
-(LiveRoutePerf *)partial4;
-(void)setPartial4:(LiveRoutePerf *)arg1 ;
-(LiveRoutePerf *)partial6;
-(void)setPartial6:(LiveRoutePerf *)arg1 ;
-(double)initialRttAvg;
-(double)initialRttVar;
-(void)setHasDNS:(NSMutableSet *)arg1 ;
-(void)setImpDNS:(NSMutableSet *)arg1 ;
@end

