/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShade.h>

@interface OADLinearShade : OADShade {

	float mAngle;
	BOOL mIsAngleOverridden;
	BOOL mScaled;
	BOOL mIsScaledOverridden;

}
+(id)defaultProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)scaled;
-(void)setScaled:(BOOL)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isAngleOverridden;
-(BOOL)isScaledOverridden;
@end

