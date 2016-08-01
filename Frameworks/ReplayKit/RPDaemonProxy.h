/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/RPDaemonProtocol.h>
#import <libobjc.A.dylib/RPClientProtocol.h>

@class NSXPCConnection, NSString;

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemonProxy;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(oneway void)pauseRecording;
-(oneway void)startRecordingWindowLayerContextID:(unsigned)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(oneway void)stopRecordingWithHandler:(/*^block*/id)arg1 ;
-(oneway void)discardRecordingWithHandler:(/*^block*/id)arg1 ;
-(oneway void)clientDidResignActiveWithBundleID:(id)arg1 ;
-(oneway void)clientDidBecomeActiveWithBundleID:(id)arg1 ;
-(oneway void)resumeRecordingWithWindowLayerContextID:(unsigned)arg1 ;
-(oneway void)stopRecordingWithError:(id)arg1 movieURL:(id)arg2 ;
@end

