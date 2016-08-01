/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:16 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SALCMTvChannel;

@interface SALCMShowChannel : SABaseClientBoundCommand

@property (nonatomic,retain) SALCMTvChannel * channel; 
+(id)showChannel;
+(id)showChannelWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(void)setChannel:(SALCMTvChannel *)arg1 ;
-(SALCMTvChannel *)channel;
-(id)encodedClassName;
@end

