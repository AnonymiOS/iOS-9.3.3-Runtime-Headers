/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:22 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/ASParsingNotifyOfUnknownTokens.h>

@class NSNumber, NSDictionary;

@interface ASTopLevelErrorChecker : ASItem <ASParsingNotifyOfUnknownTokens> {

	NSNumber* _foundStatus;
	NSDictionary* _parseRules;

}

@property (nonatomic,retain) NSNumber * foundStatus;                 //@synthesize foundStatus=_foundStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * parseRules;              //@synthesize parseRules=_parseRules - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(void)unknownToken:(int)arg1 receivedForCodePage:(int)arg2 ;
-(id)asParseRules;
-(id)initWithCodePage:(int)arg1 statusToken:(int)arg2 ;
-(NSNumber *)foundStatus;
-(void)setFoundStatus:(NSNumber *)arg1 ;
-(void)setParseRules:(NSDictionary *)arg1 ;
-(NSDictionary *)parseRules;
@end

