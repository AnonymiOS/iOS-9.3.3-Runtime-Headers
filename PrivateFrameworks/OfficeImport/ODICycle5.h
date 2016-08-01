/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ODICycle.h>

@interface ODICycle5 : ODICycle
+(float)normalizedAngle:(float)arg1 ;
+(BOOL)map1NodeWithState:(id)arg1 ;
+(BOOL)map2NodeWithState:(id)arg1 ;
+(CGRect)mapGSpaceWithState:(id)arg1 ;
+(void)mapNode:(id)arg1 index:(unsigned)arg2 state:(id)arg3 ;
+(void)mapTransition:(id)arg1 index:(unsigned)arg2 state:(id)arg3 ;
+(CGSize)nodeSizeWithState:(id)arg1 ;
+(void)addShapeForNode:(id)arg1 relativeBounds:(CGRect)arg2 state:(id)arg3 ;
+(void)mapStyleForTransition:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(float)intersectionAngleNextToAngle:(float)arg1 isAfter:(BOOL)arg2 state:(id)arg3 ;
+(void)addShapeForTransition:(id)arg1 startAngle:(float)arg2 endAngle:(float)arg3 state:(id)arg4 ;
@end

