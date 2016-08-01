/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:06 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteNetworkActivityPolicy.h>

@protocol CNAutocompleteNetworkActivityPolicy <NSObject>
@required
-(BOOL)shouldSearchServers;
-(double)delayBeforeBeginningNetworkActivity;

@end


@class NSString;

@interface CNAutocompleteNetworkActivityPolicy : NSObject <CNAutocompleteNetworkActivityPolicy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyWithNoDelay;
+(id)policyWithThrottlingDelayForString:(id)arg1 ;
-(BOOL)shouldSearchServers;
-(double)delayBeforeBeginningNetworkActivity;
@end

