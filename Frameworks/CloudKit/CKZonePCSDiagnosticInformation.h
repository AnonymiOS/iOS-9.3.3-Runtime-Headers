/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:37 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding> {

	BOOL _wasRepaired;
	int _pcsStatus;
	NSString* _pcsDiagnosticString;
	NSError* _pcsError;

}

@property (assign,nonatomic) BOOL wasRepaired;                            //@synthesize wasRepaired=_wasRepaired - In the implementation block
@property (assign,nonatomic) int pcsStatus;                               //@synthesize pcsStatus=_pcsStatus - In the implementation block
@property (nonatomic,retain) NSString * pcsDiagnosticString;              //@synthesize pcsDiagnosticString=_pcsDiagnosticString - In the implementation block
@property (nonatomic,retain) NSError * pcsError;                          //@synthesize pcsError=_pcsError - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)wasRepaired;
-(NSString *)pcsDiagnosticString;
-(NSError *)pcsError;
-(void)setPcsError:(NSError *)arg1 ;
-(void)setPcsStatus:(int)arg1 ;
-(void)setPcsDiagnosticString:(NSString *)arg1 ;
-(int)pcsStatus;
-(void)setWasRepaired:(BOOL)arg1 ;
@end

