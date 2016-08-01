/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNPrimitiveUserDefaults.h>

@class NSString;

@interface CNCFPreferencesPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {

	NSString* _applicationID;
	long long _autosyncTimerIsActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)synchronize;
-(id)initWithApplicationID:(id)arg1 ;
-(id)primitiveObjectForKey:(id)arg1 ;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2 ;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(void)primitiveRemoveObjectForKey:(id)arg1 ;
-(void)setupAutosync;
-(CFStringRef)CFApplicationID;
@end

