/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:23 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVAction.h>

@class NSURL;

@interface CoreDAVOrderedAction : CoreDAVAction {

	int _absoluteOrder;
	NSURL* _priorURL;

}

@property (nonatomic,readonly) int absoluteOrder;              //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
@property (nonatomic,retain) NSURL * priorURL;                 //@synthesize priorURL=_priorURL - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithAction:(int)arg1 context:(id)arg2 absoluteOrder:(int)arg3 ;
-(int)absoluteOrder;
-(NSURL *)priorURL;
-(void)setPriorURL:(NSURL *)arg1 ;
@end

