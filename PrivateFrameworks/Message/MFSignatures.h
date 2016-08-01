/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFSignatures : NSObject
+(id)sharedInstance;
+(id)signaturePlainTextFormat:(id)arg1 ;
+(id)signatureMarkupFormat:(id)arg1 ;
+(id)stripSignatureMarkup:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(id)_getValue:(id)arg1 ;
-(void)_setValue:(id)arg1 value:(void*)arg2 ;
-(id)signatureForAccount:(id)arg1 ;
-(BOOL)useAccountSignatures;
-(void)setSignature:(id)arg1 forAccount:(id)arg2 ;
-(void)clearSignature;
-(void)setUseAccountSignatures:(BOOL)arg1 ;
-(void)setSignature:(id)arg1 forEmailAddress:(id)arg2 ;
-(id)signaturePlainTextForSendingEmailAddress:(id)arg1 ;
-(id)signatureForSendingEmailAddress:(id)arg1 ;
-(id)defaultSignature;
-(id)signatureMarkupForSendingEmailAddress:(id)arg1 ;
-(void)setSignature:(id)arg1 ;
-(id)signature;
@end

