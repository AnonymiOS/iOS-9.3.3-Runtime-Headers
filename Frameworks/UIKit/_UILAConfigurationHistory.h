/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UILAPropertySource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSMutableSet, NSString;

@interface _UILAConfigurationHistory : NSObject <_UILAPropertySource, NSCopying> {

	NSMutableSet* _newlyHiddenItems;
	NSMutableSet* _newlyUnhiddenItems;
	BOOL _layoutFillsCanvas;
	BOOL _layoutUsesCanvasMarginsWhenFilling;
	BOOL _hasEstablishedBaseValues;
	BOOL _inLayoutArrangementUpdateSection;
	long long _axis;

}

@property (assign,nonatomic) BOOL hasEstablishedBaseValues;                                                                //@synthesize hasEstablishedBaseValues=_hasEstablishedBaseValues - In the implementation block
@property (assign,getter=isInLayoutArrangementUpdateSection,nonatomic) BOOL inLayoutArrangementUpdateSection;              //@synthesize inLayoutArrangementUpdateSection=_inLayoutArrangementUpdateSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long axis;                                                                               //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) BOOL layoutFillsCanvas;                                                                       //@synthesize layoutFillsCanvas=_layoutFillsCanvas - In the implementation block
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;                                                      //@synthesize layoutUsesCanvasMarginsWhenFilling=_layoutUsesCanvasMarginsWhenFilling - In the implementation block
@property (nonatomic,readonly) NSSet * _newlyHiddenItems;                                                                  //@synthesize newlyHiddenItems=_newlyHiddenItems - In the implementation block
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems;                                                                //@synthesize newlyUnhiddenItems=_newlyUnhiddenItems - In the implementation block
-(id)init;
-(void)setAxis:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)axis;
-(BOOL)layoutFillsCanvas;
-(void)setLayoutFillsCanvas:(BOOL)arg1 ;
-(BOOL)layoutUsesCanvasMarginsWhenFilling;
-(void)setLayoutUsesCanvasMarginsWhenFilling:(BOOL)arg1 ;
-(NSSet *)_newlyHiddenItems;
-(NSSet *)_newlyUnhiddenItems;
-(void)setHasEstablishedBaseValues:(BOOL)arg1 ;
-(void)setInLayoutArrangementUpdateSection:(BOOL)arg1 ;
-(BOOL)hasEstablishedBaseValues;
-(BOOL)isInLayoutArrangementUpdateSection;
@end

