/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>
+(void)setPreferredLanguages:(id)arg1 ;
+(void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3 ;
+(id)systemLanguages;
+(id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
+(id)autoupdatingCurrentLocale;
+(id)commonISOCurrencyCodes;
+(id)localeIdentifierFromWindowsLocaleCode:(unsigned)arg1 ;
+(unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)arg1 ;
+(unsigned long long)lineDirectionForLanguage:(id)arg1 ;
+(id)internetServicesRegion;
+(id)ISOLanguageCodes;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)currentLocale;
+(id)systemLocale;
+(id)localeIdentifierFromComponents:(id)arg1 ;
+(id)preferredLanguages;
+(unsigned long long)characterDirectionForLanguage:(id)arg1 ;
+(id)localeWithLocaleIdentifier:(id)arg1 ;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(id)ISOCountryCodes;
+(id)availableLocaleIdentifiers;
+(id)canonicalLocaleIdentifierFromString:(id)arg1 ;
+(id)ISOCurrencyCodes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(Class)classForCoder;
-(id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2 ;
-(unsigned long long)_cfTypeID;
-(id)_prefs;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)objectForKey:(id)arg1 ;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localeIdentifier;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)initWithLocaleIdentifier:(id)arg1 ;
@end

