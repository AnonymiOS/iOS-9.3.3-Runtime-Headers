/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSNumber, SAUIImageResource, NSString;

@interface SAAnswerObjectLine : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSNumber * imageInverted; 
@property (nonatomic,retain) SAUIImageResource * imageResource; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectLine;
+(id)objectLineWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setImage:(NSURL *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSURL *)image;
-(id)groupIdentifier;
-(SAUIImageResource *)imageResource;
-(void)setImageResource:(SAUIImageResource *)arg1 ;
-(NSNumber *)imageInverted;
-(void)setImageInverted:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

