/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol MDIndexer;
@class NSObject, NSMutableSet, NSString;

@interface MDAgentDelegate : NSObject <NSXPCListenerDelegate> {

	NSObject*<MDIndexer> _indexer;
	Class _agentClass;
	NSMutableSet* _clients;

}

@property (retain) NSObject*<MDIndexer> indexer;                    //@synthesize indexer=_indexer - In the implementation block
@property (retain) Class agentClass;                                //@synthesize agentClass=_agentClass - In the implementation block
@property (retain) NSMutableSet * clients;                          //@synthesize clients=_clients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)allClients;
-(void)setClients:(NSMutableSet *)arg1 ;
-(NSMutableSet *)clients;
-(Class)agentClass;
-(void)_removeClientConnection:(id)arg1 ;
-(void)setIndexer:(NSObject*<MDIndexer>)arg1 ;
-(void)setAgentClass:(Class)arg1 ;
-(void)_addClientConnection:(id)arg1 clientLink:(id)arg2 ;
-(NSObject*<MDIndexer>)indexer;
@end

