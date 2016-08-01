/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class EDString, EDStyle;

@interface EMCellTextMapper : CMMapper {

	EDString* edString;
	EDStyle* edStyle;

}
-(void)mapVerticalTextAt:(id)arg1 withState:(id)arg2 width:(double)arg3 height:(double)arg4 ;
-(double)contentWidth;
-(id)initWithEDString:(id)arg1 style:(id)arg2 parent:(id)arg3 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 columnWidth:(double)arg3 height:(double)arg4 spreadLeft:(BOOL)arg5 ;
-(void)mapTextRunsAt:(id)arg1 ;
@end

