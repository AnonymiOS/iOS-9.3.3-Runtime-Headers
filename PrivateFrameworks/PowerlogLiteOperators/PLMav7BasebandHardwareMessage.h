/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:10 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogLiteOperators/PLMav5BasebandHardwareMessage.h>

@class NSMutableString;

@interface PLMav7BasebandHardwareMessage : PLMav5BasebandHardwareMessage {

	PLMav7BasebandHWStatsRFTech* _rf;
	PLMav7BasebandHWStatsProtocol* _protocol;
	PLMav7BasebandHWStatsMCPMVeto* _mcpm_sleep_veto;
	PLMav7BasebandHWStatsNPAVeto* _npa_sleep_veto;
	PLMav7BasebandHWStatsClockStateMask* _apps_clock_duration_mask;
	PLMav7BasebandHWStatsClockStateMask* _mpss_clock_duration_mask;
	NSMutableString* _apps_clock_duration;
	NSMutableString* _mpss_clock_duration;
	PLMav7BasebandHWStatsClockStateMask* _apps_clock_count_mask;
	PLMav7BasebandHWStatsClockStateMask* _mpss_clock_count_mask;
	PLMav7BasebandHWStatsHSICState* _hsic;
	PLMav7BasebandGPSDPOBin* _gps_dpo_bins;

}

@property (assign,nonatomic) PLMav7BasebandHWStatsRFTech* rf;                                            //@synthesize rf=_rf - In the implementation block
@property (assign,nonatomic) PLMav7BasebandHWStatsProtocol* protocol;                                    //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) PLMav7BasebandHWStatsMCPMVeto* mcpm_sleep_veto;                             //@synthesize mcpm_sleep_veto=_mcpm_sleep_veto - In the implementation block
@property (assign,nonatomic) PLMav7BasebandHWStatsNPAVeto* npa_sleep_veto;                               //@synthesize npa_sleep_veto=_npa_sleep_veto - In the implementation block
@property (assign,nonatomic) PLMav7BasebandHWStatsClockStateMask* apps_clock_duration_mask;              //@synthesize apps_clock_duration_mask=_apps_clock_duration_mask - In the implementation block
@property (assign,nonatomic) PLMav7BasebandHWStatsClockStateMask* mpss_clock_duration_mask;              //@synthesize mpss_clock_duration_mask=_mpss_clock_duration_mask - In the implementation block
@property (assign,nonatomic) NSMutableString * apps_clock_duration;                                      //@synthesize apps_clock_duration=_apps_clock_duration - In the implementation block
@property (assign,nonatomic) NSMutableString * mpss_clock_duration;                                      //@synthesize mpss_clock_duration=_mpss_clock_duration - In the implementation block
@property (assign,nonatomic) PLMav7BasebandHWStatsClockStateMask* apps_clock_count_mask;                 //@synthesize apps_clock_count_mask=_apps_clock_count_mask - In the implementation block
@property (assign,nonatomic) PLMav7BasebandHWStatsClockStateMask* mpss_clock_count_mask;                 //@synthesize mpss_clock_count_mask=_mpss_clock_count_mask - In the implementation block
@property (assign,nonatomic) PLMav7BasebandHWStatsHSICState* hsic;                                       //@synthesize hsic=_hsic - In the implementation block
@property (assign,nonatomic) PLMav7BasebandGPSDPOBin* gps_dpo_bins;                                      //@synthesize gps_dpo_bins=_gps_dpo_bins - In the implementation block
-(void)parseData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(PLMav7BasebandHWStatsProtocol*)protocol;
-(void)setProtocol:(PLMav7BasebandHWStatsProtocol*)arg1 ;
-(void)logPeripheralsWithLogger:(id)arg1 ;
-(void)logRFWithLogger2:(id)arg1 ;
-(id)indexToRAT:(unsigned long long)arg1 ;
-(void)logWithLogger:(id)arg1 ;
-(void)setGps_dpo_bins:(PLMav7BasebandGPSDPOBin*)arg1 ;
-(void)setRf:(PLMav7BasebandHWStatsRFTech*)arg1 ;
-(void)setNpa_sleep_veto:(PLMav7BasebandHWStatsNPAVeto*)arg1 ;
-(void)setApps_clock_duration_mask:(PLMav7BasebandHWStatsClockStateMask*)arg1 ;
-(PLMav7BasebandHWStatsClockStateMask*)apps_clock_duration_mask;
-(int)GetClockCount:(PLMav7BasebandHWStatsClockStateMask*)arg1 ;
-(void)setApps_clock_duration:(NSMutableString *)arg1 ;
-(void)SetClocks:(PLMav7BasebandHWStatsClockStateMask*)arg1 oftype:(int)arg2 withData:(char*)arg3 ;
-(void)setMpss_clock_duration_mask:(PLMav7BasebandHWStatsClockStateMask*)arg1 ;
-(PLMav7BasebandHWStatsClockStateMask*)mpss_clock_duration_mask;
-(void)setMpss_clock_duration:(NSMutableString *)arg1 ;
-(void)setApps_clock_count_mask:(PLMav7BasebandHWStatsClockStateMask*)arg1 ;
-(PLMav7BasebandHWStatsClockStateMask*)apps_clock_count_mask;
-(void)setMpss_clock_count_mask:(PLMav7BasebandHWStatsClockStateMask*)arg1 ;
-(PLMav7BasebandHWStatsClockStateMask*)mpss_clock_count_mask;
-(void)setHsic:(PLMav7BasebandHWStatsHSICState*)arg1 ;
-(void)logAPPSWithLogger:(id)arg1 ;
-(void)logMPSSWithLogger:(id)arg1 ;
-(void)logProtocolActiveWithLogger:(id)arg1 ;
-(void)logSleepVetoWithLogger:(id)arg1 ;
-(void)logClockWithLogger:(id)arg1 ;
-(void)logHSICWithLogger:(id)arg1 ;
-(PLMav7BasebandHWStatsNPAVeto*)npa_sleep_veto;
-(NSMutableString *)apps_clock_duration;
-(NSMutableString *)mpss_clock_duration;
-(void)setMcpm_sleep_veto:(PLMav7BasebandHWStatsMCPMVeto*)arg1 ;
-(PLMav7BasebandGPSDPOBin*)gps_dpo_bins;
-(PLMav7BasebandHWStatsRFTech*)rf;
-(PLMav7BasebandHWStatsMCPMVeto*)mcpm_sleep_veto;
-(PLMav7BasebandHWStatsHSICState*)hsic;
@end

