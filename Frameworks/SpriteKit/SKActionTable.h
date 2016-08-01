/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSMutableDictionary;

@interface SKActionTable : NSObject <NSCoding> {

	NSDictionary* _actionTableDictionary;
	NSMutableDictionary* __info;

}

@property (nonatomic,retain,readonly) NSDictionary * actionTableDictionary;              //@synthesize actionTableDictionary=_actionTableDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _info;                                //@synthesize _info=__info - In the implementation block
+(id)actionTableWithContentsOfDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableDictionary *)_info;
-(id)actionForName:(id)arg1 ;
-(NSDictionary *)actionTableDictionary;
-(id)initWithContentsOfDictionary:(id)arg1 ;
-(void)set_info:(NSMutableDictionary *)arg1 ;
@end

