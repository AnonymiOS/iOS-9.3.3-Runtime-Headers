/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:59 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsProtocol/SDFActivityInfo.h>

@class NSData;

@interface DCActivityInfo : SDFActivityInfo {

	NSData* _sharepointDocumentIdentifier;

}

@property (retain,readonly) NSData * sharepointDocumentIdentifier;              //@synthesize sharepointDocumentIdentifier=_sharepointDocumentIdentifier - In the implementation block
+(id)activityInfoWithQueue:(id)arg1 ;
+(id)activityInfoWithQueue:(id)arg1 sharepointDocumentIdentifier:(id)arg2 ;
-(id)description;
-(id)initWithQueue:(id)arg1 sharepointDocumentIdentifier:(id)arg2 ;
-(NSData *)sharepointDocumentIdentifier;
@end
