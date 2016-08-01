/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:51 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCDDelayedMedia.h>

@class NSData;

@interface OADSubBlip : OCDDelayedMedia {

	int mType;
	NSData* mData;
	CGSize mSizeInPoints;
	int mSizeInBytes;
	CGRect mFrame;

}
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)data;
-(void)setData:(id)arg1 ;
-(BOOL)isLoaded;
-(id)initWithData:(id)arg1 type:(int)arg2 ;
-(void)setSizeInBytes:(int)arg1 ;
-(int)sizeInBytes;
-(void)setSizeInPoints:(CGSize)arg1 ;
-(CGSize)sizeInPoints;
@end
