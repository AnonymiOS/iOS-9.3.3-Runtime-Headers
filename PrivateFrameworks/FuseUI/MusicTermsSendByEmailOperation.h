/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSError, NSString;

@interface MusicTermsSendByEmailOperation : SSVComplexOperation {

	NSError* _error;
	NSString* _emailAddress;

}

@property (copy,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) NSError * error; 
-(void)main;
-(NSString *)emailAddress;
-(NSError *)error;
-(id)initWithEmailAddress:(id)arg1 ;
@end

