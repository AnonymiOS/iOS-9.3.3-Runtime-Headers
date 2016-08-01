/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:44 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHOutlinedArrowSketchRecognitionResult : CHSketchRecognitionResult {

	CGPoint _center;
	CGSize _size;
	CGPoint _controlPoint;

}

@property (readonly) CGPoint center;                    //@synthesize center=_center - In the implementation block
@property (readonly) CGSize size;                       //@synthesize size=_size - In the implementation block
@property (readonly) CGPoint controlPoint;              //@synthesize controlPoint=_controlPoint - In the implementation block
-(CGSize)size;
-(CGPoint)center;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(CGPoint)arg4 size:(CGSize)arg5 controlPointLocation:(CGPoint)arg6 ;
-(CGPoint)controlPoint;
@end

