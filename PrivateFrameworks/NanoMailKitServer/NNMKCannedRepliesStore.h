/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:48 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager, NPSDomainAccessor;

@interface NNMKCannedRepliesStore : NSObject {

	NPSManager* _npsManager;
	NPSDomainAccessor* _domainAccessor;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;              //@synthesize domainAccessor=_domainAccessor - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)customReplies;
-(void)setCustomReply:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_handleMessagesStoreChanged;
-(id)_defaultRepliesWithFormat:(id)arg1 forLanguage:(id)arg2 ;
-(NPSDomainAccessor *)domainAccessor;
-(id)defaultRepliesForLanguage:(id)arg1 ;
-(id)formalDefaultRepliesForLanguage:(id)arg1 ;
-(id)cannedRepliesForLanguage:(id)arg1 ;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
@end

