/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OAXClient.h>

@interface EXOfficeArtClient : OAXClient {

	BOOL mAutoChartFillIsHollow;
	BOOL mAutoChartStrokeIsHollow;

}

@property (assign) BOOL autoChartFillIsHollow; 
@property (assign) BOOL autoChartStrokeIsHollow; 
-(void)readClientDataFromNode:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
-(BOOL)chartAutoFillIsHollow;
-(BOOL)chartAutoStrokeIsHollow;
-(void)setAutoChartFillIsHollow:(BOOL)arg1 ;
-(void)setAutoChartStrokeIsHollow:(BOOL)arg1 ;
-(BOOL)autoChartFillIsHollow;
-(BOOL)autoChartStrokeIsHollow;
@end

