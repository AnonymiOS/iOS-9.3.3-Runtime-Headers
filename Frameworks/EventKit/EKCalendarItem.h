/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSString, EKCalendar, NSURL, NSDate, NSTimeZone, NSArray, EKStructuredLocation, EKAttendee, EKOrganizer, NSUserActivity;

@interface EKCalendarItem : EKObject {

	BOOL _haveCachedActionsState;
	unsigned long long _actionsStateCachedValue;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,retain) EKCalendar * calendar; 
@property (nonatomic,readonly) NSString * calendarItemIdentifier; 
@property (nonatomic,readonly) NSString * calendarItemExternalIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,readonly) BOOL hasAlarms; 
@property (nonatomic,readonly) BOOL hasRecurrenceRules; 
@property (nonatomic,readonly) BOOL hasAttendees; 
@property (nonatomic,readonly) BOOL hasNotes; 
@property (nonatomic,readonly) NSArray * attendees; 
@property (nonatomic,copy) NSArray * alarms; 
@property (nonatomic,copy) NSArray * recurrenceRules; 
@property (nonatomic,readonly) EKStructuredLocation * preferredLocation; 
@property (nonatomic,copy) EKStructuredLocation * structuredLocation; 
@property (nonatomic,copy) EKStructuredLocation * clientLocation; 
@property (nonatomic,copy) EKStructuredLocation * startLocation; 
@property (nonatomic,readonly) BOOL isFloating; 
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (nonatomic,copy) NSTimeZone * startTimeZone; 
@property (nonatomic,copy) NSTimeZone * endTimeZone; 
@property (assign,nonatomic) NSString * calendarScale; 
@property (nonatomic,readonly) BOOL isEditable; 
@property (nonatomic,readonly) BOOL isSelfOrganized; 
@property (nonatomic,readonly) BOOL isExternallyOrganizedInvitation; 
@property (nonatomic,readonly) BOOL isSelfOrganizedInvitation; 
@property (nonatomic,readonly) BOOL isOrganizedBySharedCalendarOwner; 
@property (nonatomic,readonly) long long selfParticipantStatus; 
@property (nonatomic,retain) EKAttendee * selfAttendee; 
@property (nonatomic,retain) EKOrganizer * organizer; 
@property (nonatomic,copy) NSURL * action; 
@property (nonatomic,retain) NSUserActivity * appLink; 
@property (assign,nonatomic) unsigned long long priority; 
@property (nonatomic,readonly) NSArray * attachments; 
@property (nonatomic,copy) NSString * sharedItemCreatedByDisplayName; 
@property (nonatomic,copy) NSString * sharedItemCreatedByEmailAddress; 
@property (nonatomic,copy) NSString * sharedItemCreatedByFirstName; 
@property (nonatomic,copy) NSString * sharedItemCreatedByLastName; 
@property (nonatomic,copy) NSDate * sharedItemCreatedDate; 
@property (nonatomic,copy) NSTimeZone * sharedItemCreatedTimeZone; 
@property (nonatomic,copy) NSString * sharedItemModifiedByDisplayName; 
@property (nonatomic,copy) NSString * sharedItemModifiedByEmailAddress; 
@property (nonatomic,copy) NSString * sharedItemModifiedByFirstName; 
@property (nonatomic,copy) NSString * sharedItemModifiedByLastName; 
@property (nonatomic,copy) NSDate * sharedItemModifiedDate; 
@property (nonatomic,copy) NSTimeZone * sharedItemModifiedTimeZone; 
@property (nonatomic,readonly) BOOL allowsCalendarModifications; 
@property (nonatomic,readonly) BOOL allowsRecurrenceModifications; 
@property (nonatomic,readonly) BOOL allowsAlarmModifications; 
@property (nonatomic,readonly) BOOL allowsAttendeeModifications; 
@property (nonatomic,copy) NSArray * allAlarms; 
@property (nonatomic,readonly) unsigned long long actionsState; 
@property (nonatomic,retain,readonly) EKCalendarItem * originalItem; 
@property (nonatomic,readonly) BOOL requiresDetach; 
@property (assign,getter=isDefaultAlarmRemoved,nonatomic) BOOL defaultAlarmRemoved; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSURL * externalURI; 
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSURL *)action;
-(NSString *)title;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(BOOL)isEditable;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(NSString *)UUID;
-(void)setAction:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setStartLocation:(EKStructuredLocation *)arg1 ;
-(NSString *)location;
-(void)setURL:(NSURL *)arg1 ;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(EKCalendar *)calendar;
-(void)setLocation:(NSString *)arg1 ;
-(NSArray *)attachments;
-(void)setAppLink:(NSUserActivity *)arg1 ;
-(NSUserActivity *)appLink;
-(int)sequenceNumber;
-(void)setAllDay:(BOOL)arg1 ;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(BOOL)hasAlarms;
-(NSURL *)externalURI;
-(void)updatePersistentObject;
-(BOOL)rebase;
-(id)_persistentItem;
-(BOOL)hasNotes;
-(id)_locationRelation;
-(id)_clientLocationRelation;
-(id)_startLocationRelation;
-(NSString *)calendarScale;
-(void)setCalendarScale:(NSString *)arg1 ;
-(BOOL)isOrganizedBySharedCalendarOwner;
-(id)_alarmsRelation;
-(BOOL)_excludeAlarmDueToConnectionTrigger:(id)arg1 ;
-(id)findOriginalAlarmStartingWith:(id)arg1 ;
-(NSArray *)allAlarms;
-(id)_recurrencesRelation;
-(id)_attendeesRelation;
-(id)_selfAttendeeRelation;
-(id)_organizerRelation;
-(NSString *)sharedItemCreatedByFirstName;
-(NSString *)sharedItemCreatedByLastName;
-(NSString *)sharedItemModifiedByFirstName;
-(NSString *)sharedItemModifiedByLastName;
-(id)_attachmentsRelation;
-(BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3 ;
-(void)updatePersistentObjectSkippingProperties:(id)arg1 ;
-(void)setOrganizer:(EKOrganizer *)arg1 ;
-(EKCalendarItem *)originalItem;
-(void)moveToCalendar:(id)arg1 ;
-(void)_moveToCalendarInternal:(id)arg1 ;
-(BOOL)isDefaultAlarmRemoved;
-(void)setDefaultAlarmRemoved:(BOOL)arg1 ;
-(BOOL)isSelfOrganizedInvitation;
-(BOOL)allowsCalendarModifications;
-(BOOL)allowsAlarmModifications;
-(void)setAllAlarms:(NSArray *)arg1 ;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(void)snoozeAlarm:(id)arg1 withLocation:(id)arg2 proximity:(long long)arg3 ;
-(BOOL)isAlarmAcknowledgedPropertyDirty;
-(void)removeAcknowledgedSnoozedAlarms;
-(void)removeAllSnoozedAlarms;
-(void)removeRecurrenceRule:(id)arg1 ;
-(void)setSharedItemCreatedByDisplayName:(NSString *)arg1 ;
-(void)setSharedItemCreatedByAddress:(id)arg1 ;
-(void)setSharedItemCreatedByFirstName:(NSString *)arg1 ;
-(void)setSharedItemCreatedByLastName:(NSString *)arg1 ;
-(void)setSharedItemCreatedDate:(NSDate *)arg1 ;
-(NSTimeZone *)sharedItemCreatedTimeZone;
-(void)setSharedItemCreatedTimeZone:(NSTimeZone *)arg1 ;
-(void)setSharedItemModifiedByDisplayName:(NSString *)arg1 ;
-(void)setSharedItemModifiedByEmailAddress:(NSString *)arg1 ;
-(void)setSharedItemModifiedByFirstName:(NSString *)arg1 ;
-(void)setSharedItemModifiedByLastName:(NSString *)arg1 ;
-(void)setSharedItemModifiedDate:(NSDate *)arg1 ;
-(NSTimeZone *)sharedItemModifiedTimeZone;
-(void)setSharedItemModifiedTimeZone:(NSTimeZone *)arg1 ;
-(void)updateWithAppLink:(id)arg1 usedSelectedText:(BOOL*)arg2 ;
-(NSDate *)lastModifiedDate;
-(void)setExternalID:(NSString *)arg1 ;
-(EKStructuredLocation *)clientLocation;
-(NSString *)calendarItemExternalIdentifier;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(NSArray *)attendees;
-(EKStructuredLocation *)structuredLocation;
-(void)setStructuredLocation:(EKStructuredLocation *)arg1 ;
-(BOOL)hasAttendees;
-(void)removeAttendee:(id)arg1 ;
-(void)addAttendee:(id)arg1 ;
-(void)setClientLocation:(EKStructuredLocation *)arg1 ;
-(NSTimeZone *)startTimeZone;
-(NSTimeZone *)endTimeZone;
-(BOOL)isAllDay;
-(void)setStartTimeZone:(NSTimeZone *)arg1 ;
-(void)setEndTimeZone:(NSTimeZone *)arg1 ;
-(id)suggestionInfo;
-(id)startDateForRecurrence;
-(EKOrganizer *)organizer;
-(void)setAttendees:(NSArray *)arg1 ;
-(NSString *)externalID;
-(BOOL)hasRecurrenceRules;
-(BOOL)isExternallyOrganizedInvitation;
-(unsigned long long)actionsState;
-(NSString *)calendarItemIdentifier;
-(NSString *)sharedItemModifiedByDisplayName;
-(NSDate *)sharedItemModifiedDate;
-(NSString *)sharedItemCreatedByDisplayName;
-(NSDate *)sharedItemCreatedDate;
-(NSString *)sharedItemModifiedByEmailAddress;
-(NSString *)sharedItemCreatedByEmailAddress;
-(NSArray *)alarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(id)sortedAlarms;
-(long long)indexForAlarm:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(BOOL)isSelfOrganized;
-(NSArray *)recurrenceRules;
-(long long)selfParticipantStatus;
-(void)removeAlarm:(id)arg1 ;
-(BOOL)allowsAttendeeModifications;
-(EKStructuredLocation *)preferredLocation;
-(BOOL)requiresDetach;
-(BOOL)allowsSpansOtherThanThisEvent;
-(EKAttendee *)selfAttendee;
-(BOOL)allowsRecurrenceModifications;
-(void)setRecurrenceRules:(NSArray *)arg1 ;
-(void)addRecurrenceRule:(id)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(EKStructuredLocation *)startLocation;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)isFloating;
@end

