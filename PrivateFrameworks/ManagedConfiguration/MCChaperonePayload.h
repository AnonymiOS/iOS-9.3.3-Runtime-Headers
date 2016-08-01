/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSNumber;

@interface MCChaperonePayload : MCPayload {

	NSData* _pairingCertificateData;
	BOOL _nonChaperonePairingAllowed;
	NSNumber* _nonChaperonePairingAllowedNum;

}

@property (nonatomic,retain,readonly) NSData * pairingCertificateData;                //@synthesize pairingCertificateData=_pairingCertificateData - In the implementation block
@property (nonatomic,readonly) BOOL nonChaperonePairingAllowed;                       //@synthesize nonChaperonePairingAllowed=_nonChaperonePairingAllowed - In the implementation block
@property (nonatomic,readonly) NSNumber * nonChaperonePairingAllowedNum;              //@synthesize nonChaperonePairingAllowedNum=_nonChaperonePairingAllowedNum - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Description;
-(NSData *)pairingCertificateData;
-(BOOL)nonChaperonePairingAllowed;
-(NSNumber *)nonChaperonePairingAllowedNum;
-(id)description;
-(id)subtitle2Label;
@end

