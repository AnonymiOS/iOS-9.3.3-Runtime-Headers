/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:21 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MFMessageHeaders : NSObject <NSCopying> {

	NSData* _data;
	unsigned _preferredEncoding;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned preferredEncoding; 
+(id)copyAddressListFromEncodedData:(id)arg1 encoding:(unsigned)arg2 ;
+(id)uniqueHeaderKeyStringForString:(id)arg1 ;
+(BOOL)isStructuredHeaderKey:(id)arg1 ;
+(id)basicHeaders;
+(BOOL)shouldDecodeHeaderForKey:(id)arg1 ;
+(id)addressListFromEncodedString:(id)arg1 ;
+(id)encodedDataForAddressList:(id)arg1 splittingAtLength:(unsigned long long)arg2 firstLineBuffer:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)mutableCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)_decodeHeaderKeysFromData:(id)arg1 ;
-(unsigned)_contentTypeEncoding;
-(void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2 ;
-(id)copyFirstNonDecodedHeaderForKey:(id)arg1 ;
-(id)copyDecodedStringFromHeaderData:(id)arg1 withRange:(NSRange)arg2 ;
-(id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 decoded:(BOOL)arg3 ;
-(id)_copyHeaderValueForKey:(id)arg1 ;
-(id)_copyAddressListForKey:(id)arg1 ;
-(id)copyFirstHeaderForKey:(id)arg1 ;
-(id)_headerValueForKey:(id)arg1 offset:(unsigned long long*)arg2 ;
-(BOOL)_isStructuredHeaderKey:(id)arg1 ;
-(id)_headerValueForKey:(id)arg1 ;
-(BOOL)messageIsFromEntourage;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(id)encodedHeaders;
-(id)copyAddressListForResentFrom;
-(void)appendHeaderData:(id)arg1 andRecipients:(id)arg2 ;
-(id)copyHeadersForKey:(id)arg1 ;
-(id)copyFirstStringValueForKey:(id)arg1 ;
-(BOOL)hasHeaderForKey:(id)arg1 ;
-(id)headersDictionary;
-(id)initWithHeaderData:(id)arg1 encoding:(unsigned)arg2 ;
-(id)_capitalizedKeyForKey:(id)arg1 ;
-(id)firstHeaderForKey:(id)arg1 ;
-(id)copyAddressListForTo;
-(id)copyAddressListForCc;
-(id)copyAddressListForBcc;
-(id)firstSenderAddress;
-(id)allHeaderKeys;
-(unsigned)preferredEncoding;
-(id)headersForKey:(id)arg1 ;
-(id)copyAddressListForSender;
-(id)copyAddressListForReplyTo;
-(id)headerData;
-(id)references;
@end

