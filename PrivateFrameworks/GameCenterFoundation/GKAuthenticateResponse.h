/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSURL;

@interface GKAuthenticateResponse : GKInternalRepresentation {

	BOOL _loginDisabled;
	BOOL _passwordChangeRequired;
	BOOL _shouldShowLinkAccountsUI;
	GKPlayerCredential* _credential;
	NSURL* _passwordChangeURL;

}

@property (nonatomic,retain) GKPlayerCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) BOOL loginDisabled;                           //@synthesize loginDisabled=_loginDisabled - In the implementation block
@property (assign,nonatomic) BOOL passwordChangeRequired;                  //@synthesize passwordChangeRequired=_passwordChangeRequired - In the implementation block
@property (nonatomic,retain) NSURL * passwordChangeURL;                    //@synthesize passwordChangeURL=_passwordChangeURL - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLinkAccountsUI;                //@synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(GKPlayerCredential *)credential;
-(BOOL)loginDisabled;
-(void)setLoginDisabled:(BOOL)arg1 ;
-(BOOL)passwordChangeRequired;
-(void)setPasswordChangeRequired:(BOOL)arg1 ;
-(NSURL *)passwordChangeURL;
-(void)setPasswordChangeURL:(NSURL *)arg1 ;
-(BOOL)shouldShowLinkAccountsUI;
-(void)setShouldShowLinkAccountsUI:(BOOL)arg1 ;
-(void)setCredential:(GKPlayerCredential *)arg1 ;
@end

