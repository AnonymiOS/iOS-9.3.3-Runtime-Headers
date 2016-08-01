/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SLFacebookUpload : NSObject <NSSecureCoding> {

	NSString* _uploadID;
	long long _uploadType;
	unsigned long long _totalBytes;
	unsigned long long _transferredBytes;

}

@property (nonatomic,retain) NSString * uploadID;                              //@synthesize uploadID=_uploadID - In the implementation block
@property (assign,nonatomic) long long uploadType;                             //@synthesize uploadType=_uploadType - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                    //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long transferredBytes;              //@synthesize transferredBytes=_transferredBytes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)totalBytes;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(NSString *)uploadID;
-(void)setUploadID:(NSString *)arg1 ;
-(long long)uploadType;
-(void)setUploadType:(long long)arg1 ;
-(unsigned long long)transferredBytes;
-(void)setTransferredBytes:(unsigned long long)arg1 ;
@end

