/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:31 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUModelPerson.h>

@class NSString;

@interface MPUModelCurator : MPUModelPerson {

	NSString* _shortName;
	NSString* _editorNotes;
	long long _curatorKind;

}

@property (nonatomic,copy) NSString * shortName;                 //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy) NSString * editorNotes;               //@synthesize editorNotes=_editorNotes - In the implementation block
@property (assign,nonatomic) long long curatorKind;              //@synthesize curatorKind=_curatorKind - In the implementation block
+(id)__editorNotes__KEY;
+(id)__shortName__KEY;
+(id)__curatorKind__KEY;
-(long long)curatorKind;
-(NSString *)editorNotes;
-(NSString *)shortName;
-(void)setShortName:(NSString *)arg1 ;
-(void)setEditorNotes:(NSString *)arg1 ;
-(void)setCuratorKind:(long long)arg1 ;
@end

