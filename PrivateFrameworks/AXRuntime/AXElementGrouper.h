/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXRuntime/AXRuntime-Structs.h>
@interface AXElementGrouper : NSObject {

	unsigned long long _minimumGroupSize;
	unsigned long long _maximumGroupSize;
	unsigned long long _preferredGroupSize;
	double _thresholdForDeterminingEqualSize;

}

@property (assign,nonatomic) unsigned long long minimumGroupSize;                  //@synthesize minimumGroupSize=_minimumGroupSize - In the implementation block
@property (assign,nonatomic) unsigned long long maximumGroupSize;                  //@synthesize maximumGroupSize=_maximumGroupSize - In the implementation block
@property (assign,nonatomic) unsigned long long preferredGroupSize;                //@synthesize preferredGroupSize=_preferredGroupSize - In the implementation block
@property (assign,nonatomic) double thresholdForDeterminingEqualSize;              //@synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize - In the implementation block
-(id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned long long*)arg2 ;
-(id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(BOOL)arg2 ;
-(id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(BOOL)arg2 ;
-(unsigned long long)minimumGroupSize;
-(double)thresholdForDeterminingEqualSize;
-(unsigned long long)maximumGroupSize;
-(unsigned long long)preferredGroupSize;
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithPadInterfaceHeuristics:(BOOL)arg1 ;
-(id)groupElementsInRootGroup:(id)arg1 ;
-(BOOL)_frame:(CGRect)arg1 isApproximatelySameSizeAsFrame:(CGRect)arg2 ;
-(void)setMinimumGroupSize:(unsigned long long)arg1 ;
-(void)setMaximumGroupSize:(unsigned long long)arg1 ;
-(void)setPreferredGroupSize:(unsigned long long)arg1 ;
-(void)setThresholdForDeterminingEqualSize:(double)arg1 ;
@end

