/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMDrawableMapper.h>

@class ODDDiagram, CMDrawingContext;

@interface CMDiagramMapper : CMDrawableMapper {

	ODDDiagram* mDiagram;
	CMDrawingContext* mDrawingContext;

}
+(int)diagramTypeFromString:(id)arg1 ;
-(id)identifierFromLayoutTypeId:(id)arg1 ;
-(id)copyDiagramMapperForId:(id)arg1 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)styleMatrix;
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4 ;
-(id)diagram;
@end

