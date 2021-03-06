/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKParticipant, NSString;

@interface EKParticipantForSorting : NSObject {

	EKParticipant* _participant;
	BOOL _isEmail;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _cachedDisplayName;

}
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)displayName;
-(BOOL)isEmail;
-(id)participant;
-(id)initWithEKParticipant:(id)arg1 ;
-(id)firstName;
-(id)lastName;
@end

