/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:01 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSArray;

@interface CRSearchQuery : NSObject <NSSecureCoding> {

	NSPredicate* _predicate;
	NSArray* _domains;
	unsigned long long _implicitGroupThreshold;
	unsigned long long _options;
	/*^block*/id _weightDecayer;
	/*^block*/id _comparator;

}

@property (nonatomic,retain) NSPredicate * predicate;                                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * domains;                                        //@synthesize domains=_domains - In the implementation block
@property (assign,nonatomic) unsigned long long implicitGroupThreshold;              //@synthesize implicitGroupThreshold=_implicitGroupThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id weightDecayer;                                         //@synthesize weightDecayer=_weightDecayer - In the implementation block
@property (nonatomic,copy) id comparator;                                            //@synthesize comparator=_comparator - In the implementation block
+(BOOL)supportsSecureCoding;
+(/*^block*/id)rankedFrecencyComparatorWithPreferredSources:(id)arg1 ;
+(id)searchQueryForSearchTerm:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 recentsDomain:(id)arg4 ;
+(/*^block*/id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4 ;
+(/*^block*/id)frecencyComparator;
-(id)comparator;
-(NSArray *)domains;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(unsigned long long)implicitGroupThreshold;
-(id)weightDecayer;
-(void)setWeightDecayer:(id)arg1 ;
-(void)setImplicitGroupThreshold:(unsigned long long)arg1 ;
-(void)setDomains:(NSArray *)arg1 ;
-(void)setComparator:(id)arg1 ;
@end

