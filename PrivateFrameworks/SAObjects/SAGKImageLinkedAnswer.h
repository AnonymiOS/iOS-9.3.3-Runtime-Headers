/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKLinkedAnswer.h>

@class NSNumber, SAUIImageResource, NSArray;

@interface SAGKImageLinkedAnswer : SAGKLinkedAnswer

@property (nonatomic,copy) NSNumber * fileSize; 
@property (nonatomic,retain) SAUIImageResource * imageResource; 
@property (nonatomic,copy) NSArray * thumbnails; 
+(id)imageLinkedAnswer;
+(id)imageLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)fileSize;
-(id)groupIdentifier;
-(SAUIImageResource *)imageResource;
-(void)setImageResource:(SAUIImageResource *)arg1 ;
-(NSArray *)thumbnails;
-(void)setThumbnails:(NSArray *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

