/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSData, NSString;

@interface NEFlowMetaData : NSObject {

	BOOL _fastOpenRequested;
	BOOL _multipathRequested;
	NSData* _sourceAppUniqueIdentifier;
	NSString* _sourceAppSigningIdentifier;

}

@property (readonly) NSData * sourceAppUniqueIdentifier;                 //@synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier - In the implementation block
@property (readonly) NSString * sourceAppSigningIdentifier;              //@synthesize sourceAppSigningIdentifier=_sourceAppSigningIdentifier - In the implementation block
@property (readonly) BOOL fastOpenRequested;                             //@synthesize fastOpenRequested=_fastOpenRequested - In the implementation block
@property (readonly) BOOL multipathRequested;                            //@synthesize multipathRequested=_multipathRequested - In the implementation block
-(id)description;
-(id)initFromFlow:(NEFlowRef)arg1 ;
-(NSString *)sourceAppSigningIdentifier;
-(NSData *)sourceAppUniqueIdentifier;
-(BOOL)fastOpenRequested;
-(BOOL)multipathRequested;
@end

