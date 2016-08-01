/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@class EKParticipant, NSString, NSOperationQueue;

@interface EKEventAttendeesEditItem : EKEventEditItem {

	EKParticipant* _selfOrganizer;
	NSString* _searchAccountID;
	NSOperationQueue* _availabilityQueue;
	long long _numberOfConflicts;

}
-(void)dealloc;
-(id)init;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)forceRefreshInviteesItemOnSave;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(BOOL)forceTableReloadOnSave;
-(id)injectableViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(id)attendeesWithoutSelfOrganizerAndLocations;
@end

