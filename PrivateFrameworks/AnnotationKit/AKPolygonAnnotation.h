/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:04 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularShapeAnnotation.h>
#import <libobjc.A.dylib/AKFlippableAnnotationProtocol.h>

@class NSString;

@interface AKPolygonAnnotation : AKRectangularShapeAnnotation <AKFlippableAnnotationProtocol> {

	BOOL _verticallyFlipped;
	unsigned long long _pointCount;

}

@property (assign) unsigned long long pointCount;                   //@synthesize pointCount=_pointCount - In the implementation block
@property (assign) BOOL verticallyFlipped;                          //@synthesize verticallyFlipped=_verticallyFlipped - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL horizontallyFlipped; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)displayName;
-(unsigned long long)pointCount;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(id)keysForValuesToObserveForAdornments;
-(BOOL)verticallyFlipped;
-(void)setVerticallyFlipped:(BOOL)arg1 ;
-(void)setPointCount:(unsigned long long)arg1 ;
@end

