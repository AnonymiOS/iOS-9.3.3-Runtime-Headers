/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:24 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask {

	CoreDAVAction* _backingAction;

}

@property (nonatomic,retain) CoreDAVAction * backingAction;              //@synthesize backingAction=_backingAction - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setBackingAction:(CoreDAVAction *)arg1 ;
-(CoreDAVAction *)backingAction;
@end

