/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:13 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDictionary, NSAttributedString;

@interface CNContactMatchInfo : NSObject {

	BOOL _matchedNameProperty;
	NSNumber* _relevanceScore;
	NSDictionary* _matchedProperties;
	NSAttributedString* _excerpt;

}

@property (nonatomic,copy) NSNumber * relevanceScore;                     //@synthesize relevanceScore=_relevanceScore - In the implementation block
@property (nonatomic,copy) NSDictionary * matchedProperties;              //@synthesize matchedProperties=_matchedProperties - In the implementation block
@property (nonatomic,retain) NSAttributedString * excerpt;                //@synthesize excerpt=_excerpt - In the implementation block
@property (assign,nonatomic) BOOL matchedNameProperty;                    //@synthesize matchedNameProperty=_matchedNameProperty - In the implementation block
-(void)dealloc;
-(NSDictionary *)matchedProperties;
-(void)setRelevanceScore:(NSNumber *)arg1 ;
-(void)setMatchedNameProperty:(BOOL)arg1 ;
-(void)setMatchedProperties:(NSDictionary *)arg1 ;
-(BOOL)matchedNameProperty;
-(NSAttributedString *)excerpt;
-(void)setExcerpt:(NSAttributedString *)arg1 ;
-(NSNumber *)relevanceScore;
@end

