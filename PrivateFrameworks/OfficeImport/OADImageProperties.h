/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADGraphicProperties.h>

@class OADImageFill;

@interface OADImageProperties : OADGraphicProperties {

	OADImageFill* mImageFill;

}
+(id)defaultProperties;
-(void)dealloc;
-(id)description;
-(id)imageFill;
-(BOOL)hasImageFill;
-(void)setImageFill:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
@end

