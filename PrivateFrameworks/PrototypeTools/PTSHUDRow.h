/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PTSHUDRow : NSObject {

	double _height;
	NSArray* _controls;

}

@property (assign,nonatomic) double height;                   //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSArray * controls;              //@synthesize controls=_controls - In the implementation block
+(id)rowWithHeight:(double)arg1 controls:(id)arg2 ;
+(id)rowWithControls:(id)arg1 ;
+(id)controlsModeHeaderRow;
+(id)controlsModeFooterRow;
+(id)savedModeHeaderRow;
+(id)savedModeTableRow;
+(id)savedModeFooterRow;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(void)setControls:(NSArray *)arg1 ;
-(NSArray *)controls;
@end
