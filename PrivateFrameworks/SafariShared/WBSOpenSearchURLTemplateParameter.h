/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString;

@interface WBSOpenSearchURLTemplateParameter : NSObject {

	BOOL _optional;
	NSString* _name;
	NSString* _prefix;
	NSRange _range;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * prefix;                              //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) NSRange range;                                //@synthesize range=_range - In the implementation block
@property (assign,getter=isOptional,nonatomic) BOOL optional;              //@synthesize optional=_optional - In the implementation block
-(BOOL)isOptional;
-(void)setOptional:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)prefix;
@end

