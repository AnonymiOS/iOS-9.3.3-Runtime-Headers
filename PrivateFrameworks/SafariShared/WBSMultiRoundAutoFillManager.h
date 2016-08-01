/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:20 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSTimer, NSMutableSet;

@interface WBSMultiRoundAutoFillManager : NSObject {

	unsigned long long _autoFillAttemptTrigger;
	NSDictionary* _formMetadataFromPreviousAutoFillAttempt;
	BOOL _userDidInteractWithForm;
	unsigned long long _numberOfFollowUpAutoFillAttempts;
	NSTimer* _timerForFollowUpAutoFill;
	NSMutableSet* _controlUniqueIDToBeIgnoredByFollowUpAutoFill;

}
-(void)dealloc;
-(id)init;
-(unsigned long long)currentAutoFillAttemptTrigger;
-(BOOL)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(/*^block*/id)arg2 ;
-(void)didEditFormText;
-(BOOL)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(unsigned long long)arg2 ;
@end

