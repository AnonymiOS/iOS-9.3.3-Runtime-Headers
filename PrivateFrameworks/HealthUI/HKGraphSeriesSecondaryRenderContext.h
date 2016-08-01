/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSMutableArray;

@interface HKGraphSeriesSecondaryRenderContext : NSObject {

	NSMutableArray* _aboveScreenRegions;
	NSMutableArray* _belowScreenRegions;

}
-(id)init;
-(void)drawInAxisRect:(CGRect)arg1 backgroundColor:(id)arg2 renderContext:(CGContextRef)arg3 ;
-(void)addOffScreenRegionAtLocation:(double)arg1 color:(id)arg2 aboveScreen:(BOOL)arg3 ;
-(void)addOffScreenRegionWithStartLocation:(double)arg1 endLocation:(double)arg2 color:(id)arg3 aboveScreen:(BOOL)arg4 ;
@end

