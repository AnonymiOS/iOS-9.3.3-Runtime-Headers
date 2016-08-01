/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IKCSSDeclaration : NSObject {

	BOOL _important;
	unsigned long long _type;
	NSString* _name;
	NSString* _aliasedName;
	NSString* _stringValue;

}

@property (assign) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * aliasedName;                //@synthesize aliasedName=_aliasedName - In the implementation block
@property (assign) BOOL important;                                  //@synthesize important=_important - In the implementation block
@property (nonatomic,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(id)typeString:(unsigned long long)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)stringValue;
-(BOOL)important;
-(void)setImportant:(BOOL)arg1 ;
-(NSString *)aliasedName;
-(void)setAliasedName:(NSString *)arg1 ;
@end

