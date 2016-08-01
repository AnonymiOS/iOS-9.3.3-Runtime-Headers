/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSAutomaticReadingListItem.h>

@class NSString;

@interface WBSAutomaticReadingListSinaWeiboItem : WBSAutomaticReadingListItem {

	NSString* _originatorProfileImageURLString;
	NSString* _profileURLComponent;

}

@property (nonatomic,copy) NSString * originatorProfileImageURLString;              //@synthesize originatorProfileImageURLString=_originatorProfileImageURLString - In the implementation block
@property (nonatomic,copy) NSString * profileURLComponent;                          //@synthesize profileURLComponent=_profileURLComponent - In the implementation block
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(id)socialSource;
-(id)originatorProfileImageURL;
-(id)biggerOriginatorProfileImageURL;
-(id)sourceRecordURL;
-(id)originatorProfileURL;
-(NSString *)originatorProfileImageURLString;
-(id)_profileImageURLWithImageSizeString:(id)arg1 ;
-(NSString *)profileURLComponent;
-(void)setOriginatorProfileImageURLString:(NSString *)arg1 ;
-(void)setProfileURLComponent:(NSString *)arg1 ;
@end

