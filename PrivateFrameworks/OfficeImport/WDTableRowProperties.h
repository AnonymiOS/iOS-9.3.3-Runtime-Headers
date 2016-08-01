/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:55 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {

	WDTableProperties* mTableProperties;
	WDCharacterProperties* mCharacterProperties;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD112 mOriginalProperties;
	SCD_Struct_WD112 mTrackedProperties;

}
-(void)addPropertiesValues:(SCD_Struct_WD112*)arg1 to:(SCD_Struct_WD112*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)height;
-(id)initWithDocument:(id)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(id)characterProperties;
-(BOOL)isHeightOverridden;
-(id)tableProperties;
-(void)setResolveMode:(int)arg1 ;
-(int)resolveMode;
-(void)setWidthBefore:(short)arg1 ;
-(void)setWidthBeforeType:(int)arg1 ;
-(void)setWidthAfter:(short)arg1 ;
-(void)setWidthAfterType:(int)arg1 ;
-(void)setHeader:(BOOL)arg1 ;
-(void)setHeightType:(int)arg1 ;
-(BOOL)isWidthBeforeOverridden;
-(short)widthBefore;
-(BOOL)isWidthBeforeTypeOverridden;
-(int)widthBeforeType;
-(BOOL)isWidthAfterOverridden;
-(short)widthAfter;
-(BOOL)isWidthAfterTypeOverridden;
-(int)widthAfterType;
-(BOOL)isHeaderOverridden;
-(BOOL)header;
-(BOOL)isHeightTypeOverridden;
-(int)heightType;
-(void)addProperties:(id)arg1 ;
@end

