/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:09 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMParticipantChangeChatItem : IMTranscriptChatItem {

	IMHandle* _sender;
	IMHandle* _otherHandle;

}

@property (nonatomic,readonly) long long changeType; 
@property (nonatomic,retain,readonly) IMHandle * sender;                   //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain,readonly) IMHandle * otherHandle;              //@synthesize otherHandle=_otherHandle - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IMHandle *)sender;
-(long long)changeType;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3 ;
-(IMHandle *)otherHandle;
@end

