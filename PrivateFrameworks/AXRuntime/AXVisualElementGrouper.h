/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:00 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXElementGrouper.h>

@interface AXVisualElementGrouper : AXElementGrouper {

	double _maximumNeighbourDistance;
	double _maximumDistanceForAligningEdges;

}

@property (assign,nonatomic) double maximumNeighbourDistance;                     //@synthesize maximumNeighbourDistance=_maximumNeighbourDistance - In the implementation block
@property (assign,nonatomic) double maximumDistanceForAligningEdges;              //@synthesize maximumDistanceForAligningEdges=_maximumDistanceForAligningEdges - In the implementation block
-(id)init;
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithPadInterfaceHeuristics:(BOOL)arg1 ;
-(void)setMaximumNeighbourDistance:(double)arg1 ;
-(void)setMaximumDistanceForAligningEdges:(double)arg1 ;
-(double)maximumDistanceForAligningEdges;
-(double)maximumNeighbourDistance;
@end

