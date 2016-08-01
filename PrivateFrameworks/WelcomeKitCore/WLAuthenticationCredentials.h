/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:13:02 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@interface WLAuthenticationCredentials : NSObject {

	SecKeyRef _privateKey;
	SecKeyRef _publicKey;
	SecCertificateRef _localCertificate;
	SecCertificateRef _remoteCertificate;

}

@property (assign,nonatomic) SecKeyRef privateKey;                             //@synthesize privateKey=_privateKey - In the implementation block
@property (assign,nonatomic) SecKeyRef publicKey;                              //@synthesize publicKey=_publicKey - In the implementation block
@property (assign,nonatomic) SecCertificateRef localCertificate;               //@synthesize localCertificate=_localCertificate - In the implementation block
@property (assign,nonatomic) SecCertificateRef remoteCertificate;              //@synthesize remoteCertificate=_remoteCertificate - In the implementation block
-(SecKeyRef)privateKey;
-(void)setPublicKey:(SecKeyRef)arg1 ;
-(SecKeyRef)publicKey;
-(void)setPrivateKey:(SecKeyRef)arg1 ;
-(void)setLocalCertificate:(SecCertificateRef)arg1 ;
-(void)setRemoteCertificate:(SecCertificateRef)arg1 ;
-(SecCertificateRef)localCertificate;
-(SecCertificateRef)remoteCertificate;
@end

