/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKObstacle.h>

@interface GKPolygonObstacle : GKObstacle {

	GKCPolygonObstacle* _cPolygonObstacle;

}

@property (nonatomic,readonly) unsigned long long vertexCount; 
+(id)obstacleWithPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(2)vertexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)vertexCount;
-(GKCPolygonObstacle*)cPolygonObstacle;
-(Obstacle*)obstacle;
-(id)initWithPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)setCPolygonObstacle:(GKCPolygonObstacle*)arg1 ;
@end

