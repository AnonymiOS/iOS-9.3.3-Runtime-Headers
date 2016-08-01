/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AceContext.h>

@class NSMutableDictionary, NSString;

@interface BasicAceContext : NSObject <AceContext> {

	NSMutableDictionary* _groupMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBasicAceContext;
-(void)dealloc;
-(id)init;
-(Class)classWithClassName:(id)arg1 group:(id)arg2 ;
-(id)aceObjectWithDictionary:(id)arg1 ;
-(void)registerGroupAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2 ;
@end

