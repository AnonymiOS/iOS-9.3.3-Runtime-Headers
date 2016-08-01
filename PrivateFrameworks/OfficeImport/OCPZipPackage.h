/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:53 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCPPackage.h>

@class OISFUZipArchive, NSMutableDictionary;

@interface OCPZipPackage : OCPPackage {

	OISFUZipArchive* mArchive;
	NSMutableDictionary* mParts;

}
-(id)initWithArchive:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)partForLocation:(id)arg1 ;
-(void)resetPartForLocation:(id)arg1 ;
@end
