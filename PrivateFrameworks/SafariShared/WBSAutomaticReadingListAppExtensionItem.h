/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:19 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSAutomaticReadingListItem.h>

@class UIImage, NSString;

@interface WBSAutomaticReadingListAppExtensionItem : WBSAutomaticReadingListItem {

	UIImage* _profileImage;
	NSString* _title;

}

@property (nonatomic,retain) UIImage * profileImage;              //@synthesize profileImage=_profileImage - In the implementation block
@property (nonatomic,copy) NSString * title;                      //@synthesize title=_title - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(id)displayString;
-(NSString *)title;
-(id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2 ;
-(id)socialSource;
-(id)originatorProfileImageURL;
-(id)biggerOriginatorProfileImageURL;
-(id)sourceRecordURL;
-(id)originatorProfileURL;
-(id)continuousBannerDisplayString;
-(id)continuousBannerTitle;
-(NSRange)emphasizedTextRange;
-(id)bestOriginatorProfileImageForSize:(CGSize)arg1 ;
-(void)setProfileImage:(UIImage *)arg1 ;
-(UIImage *)profileImage;
@end

