/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:41 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DATrafficLogger : NSObject {

	NSString* _filename;

}

@property (nonatomic,retain) NSString * filename;              //@synthesize filename=_filename - In the implementation block
+(BOOL)enabled;
-(void)_ensureCustomLogFile;
-(void)logSnippet:(id)arg1 ;
-(void)slurpAndRemoveLookasideFile:(id)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
-(void)setFilename:(NSString *)arg1 ;
-(id)initWithFilename:(id)arg1 ;
-(NSString *)filename;
@end
