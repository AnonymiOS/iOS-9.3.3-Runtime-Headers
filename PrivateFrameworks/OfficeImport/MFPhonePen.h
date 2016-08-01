/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPen.h>

@interface MFPhonePen : MFPen {

	float m_PixelSize;

}
+(id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 LPToDPTransform:(CGAffineTransform)arg5 ;
-(id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
-(void)strokePath:(id)arg1 :(id)arg2 ;
-(void)applyDashedLinesToPath:(id)arg1 ;
-(void)applyLineCapStyleToPath:(id)arg1 ;
-(void)applyLineJoinStyleToPath:(id)arg1 :(id)arg2 ;
@end

