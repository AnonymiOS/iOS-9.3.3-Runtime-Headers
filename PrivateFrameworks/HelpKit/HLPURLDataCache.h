/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:43 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HelpKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSString;

@interface HLPURLDataCache : NSObject <NSCopying, NSCoding> {

	unsigned long long _cacheType;
	long long _maxAge;
	unsigned long long _fileSize;
	NSDate* _updatedDate;
	NSString* _identifier;
	NSString* _lastModified;
	NSString* _locale;

}

@property (nonatomic,readonly) BOOL expired; 
@property (assign,nonatomic) unsigned long long cacheType;              //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) long long maxAge;                          //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;               //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSDate * updatedDate;                      //@synthesize updatedDate=_updatedDate - In the implementation block
@property (nonatomic,retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                   //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) NSString * locale;                         //@synthesize locale=_locale - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(unsigned long long)fileSize;
-(void)setCacheType:(unsigned long long)arg1 ;
-(unsigned long long)cacheType;
-(void)setMaxAge:(long long)arg1 ;
-(void)setLastModified:(NSString *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(BOOL)expired;
-(NSString *)lastModified;
-(long long)maxAge;
-(void)setUpdatedDate:(NSDate *)arg1 ;
-(NSDate *)updatedDate;
@end

