/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _HDSourceManagerCacheItem : NSObject {

	BOOL _userOrdered;
	NSArray* _sources;
	NSArray* _sourceIDs;

}

@property (nonatomic,retain) NSArray * sources;                //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSArray * sourceIDs;              //@synthesize sourceIDs=_sourceIDs - In the implementation block
@property (assign,nonatomic) BOOL userOrdered;                 //@synthesize userOrdered=_userOrdered - In the implementation block
-(id)init;
-(id)description;
-(void)setSources:(NSArray *)arg1 ;
-(NSArray *)sources;
-(NSArray *)sourceIDs;
-(id)initWithSources:(id)arg1 IDs:(id)arg2 userOrdered:(BOOL)arg3 ;
-(BOOL)userOrdered;
-(void)setSourceIDs:(NSArray *)arg1 ;
-(void)setUserOrdered:(BOOL)arg1 ;
@end

