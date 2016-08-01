/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:50 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSDictionary;

@interface UIWatchKitExtensionRequestAction : BSAction

@property (nonatomic,retain,readonly) NSDictionary * request; 
-(long long)UIActionType;
-(void)sendResponse:(id)arg1 ;
-(NSDictionary *)request;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithRequest:(id)arg1 withHandler:(/*^block*/id)arg2 ;
@end

