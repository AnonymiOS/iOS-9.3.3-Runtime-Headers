/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:30 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MCProfileWarning : NSObject <NSSecureCoding> {

	NSString* _localizedTitle;
	NSString* _localizedBody;
	BOOL _isLongForm;

}

@property (nonatomic,retain) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) NSString * localizedBody;               //@synthesize localizedBody=_localizedBody - In the implementation block
@property (assign,nonatomic) BOOL isLongForm;                        //@synthesize isLongForm=_isLongForm - In the implementation block
+(id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3 ;
-(BOOL)isEqualToProfileWarning:(id)arg1 ;
-(NSString *)localizedBody;
-(void)setLocalizedBody:(NSString *)arg1 ;
-(BOOL)isLongForm;
-(void)setIsLongForm:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
@end

