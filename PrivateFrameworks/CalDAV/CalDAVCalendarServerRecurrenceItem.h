/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:38 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _master;
	CoreDAVLeafItem* _recurrenceID;
	CalDAVCalendarServerChangesItem* _changes;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * master;                     //@synthesize master=_master - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * recurrenceID;                         //@synthesize recurrenceID=_recurrenceID - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerChangesItem * changes;              //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) BOOL isMaster; 
-(id)init;
-(CoreDAVItemWithNoChildren *)master;
-(void)setMaster:(CoreDAVItemWithNoChildren *)arg1 ;
-(BOOL)isMaster;
-(id)copyParseRules;
-(void)setRecurrenceID:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)recurrenceID;
-(CalDAVCalendarServerChangesItem *)changes;
-(void)setChanges:(CalDAVCalendarServerChangesItem *)arg1 ;
@end

