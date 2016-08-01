/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class TDEffectRenditionSpec, NSSet, TDEffectType;

@interface TDEffectComponent : NSManagedObject

@property (nonatomic,retain) TDEffectRenditionSpec * rendition; 
@property (nonatomic,retain) NSSet * parameters; 
@property (nonatomic,retain) TDEffectType * effectType; 
@property (assign,nonatomic) BOOL isEnabled; 
-(void)setEffectParametersFromPreset:(id)arg1 atIndex:(unsigned long long)arg2 withDocument:(id)arg3 ;
-(void)updatePresetParameters:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

