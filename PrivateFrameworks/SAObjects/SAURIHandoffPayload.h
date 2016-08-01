/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:18 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAHandoffPayload.h>

@class NSURL, NSString;

@interface SAURIHandoffPayload : AceObject <SAHandoffPayload>

@property (nonatomic,copy) NSURL * link; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uRIHandoffPayload;
+(id)uRIHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

