/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileCoordinator, NSURL, NSData;

@interface MFAttachmentSecurityScope : NSObject {

	NSFileCoordinator* _fileCoordinator;
	NSURL* _securityScopedURL;
	NSData* _securityScopeToken;
	NSURL* _secureReadURL;
	BOOL _securedRead;
	NSURL* _secureWriteURL;
	BOOL _securedWrite;

}
+(id)securityScopedURL:(id)arg1 ;
+(id)securityScopedURL:(id)arg1 withToken:(id)arg2 ;
-(void)dealloc;
-(id)data;
-(BOOL)isBundle;
-(id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2 ;
-(void)_attachSecurityScope;
-(id)_createTemporaryReadURL:(id)arg1 ;
-(void)_removeTemporaryReadURL;
-(id)securityScopeToken;
-(id)startReadAccess;
-(void)stopAccess;
-(id)startWriteAccess;
-(BOOL)isReadable;
@end

