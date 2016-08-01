/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, XBApplicationIdentity, NSMutableSet, NSSet;

@interface XBApplicationSnapshotGroup : NSObject <NSCoding, BSDescriptionProviding> {

	NSString* _identifier;
	XBApplicationIdentity* _appIdentity;
	NSMutableSet* _snapshots;

}

@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * containerPath; 
@property (nonatomic,copy,readonly) NSSet * snapshots;                     //@synthesize snapshots=_snapshots - In the implementation block
@property (copy) XBApplicationIdentity * appIdentity;                      //@synthesize appIdentity=_appIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addSnapshot:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)identifier;
-(id)_commonInit;
-(void)_invalidate;
-(NSSet *)snapshots;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)containerPath;
-(XBApplicationIdentity *)appIdentity;
-(void)setAppIdentity:(XBApplicationIdentity *)arg1 ;
-(BOOL)_validateWithAppIdentity:(id)arg1 ;
-(BOOL)removeSnapshot:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 appIdentity:(id)arg2 ;
@end

