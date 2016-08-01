/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:39 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItemWithHrefChildItem.h>

@class CalDAVUpdateOwnerItem, NSURL;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem {

	CalDAVUpdateOwnerItem* _changedBy;

}

@property (nonatomic,readonly) NSURL * fullHrefURL; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * changedBy;              //@synthesize changedBy=_changedBy - In the implementation block
-(id)init;
-(id)copyParseRules;
-(void)setChangedBy:(CalDAVUpdateOwnerItem *)arg1 ;
-(NSURL *)fullHrefURL;
-(CalDAVUpdateOwnerItem *)changedBy;
@end

