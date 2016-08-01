/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_udp_listener;
@class NWEndpoint, NSError, NSObject, NWParameters;

@interface NWUDPListener : NSObject {

	NWEndpoint* _localEndpoint;
	NSError* _error;
	NSObject*<OS_nw_udp_listener> _internalListener;
	NWParameters* _parameters;
	NWEndpoint* _endpoint;
	id _delegate;

}

@property (retain) NWEndpoint * localEndpoint;                                  //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (retain) NSObject*<OS_nw_udp_listener> internalListener;              //@synthesize internalListener=_internalListener - In the implementation block
@property (retain) NWParameters * parameters;                                   //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                       //@synthesize endpoint=_endpoint - In the implementation block
@property (__weak) id delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(NWParameters *)parameters;
-(void)setParameters:(NWParameters *)arg1 ;
-(NWEndpoint *)endpoint;
-(void)handleError:(int)arg1 ;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(void)setInternalListener:(NSObject*<OS_nw_udp_listener>)arg1 ;
-(NSObject*<OS_nw_udp_listener>)internalListener;
-(void)handleNewSession:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NWEndpoint *)localEndpoint;
@end

