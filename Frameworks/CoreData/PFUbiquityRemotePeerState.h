/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, PFUbiquityPeer;

@interface PFUbiquityRemotePeerState : NSManagedObject

@property (nonatomic,retain) NSNumber * transactionNumber; 
@property (nonatomic,retain) NSString * peerID; 
@property (nonatomic,retain) NSString * storeName; 
@property (nonatomic,retain) PFUbiquityPeer * peer; 
+(id)remotePeerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)remotePeerStatesMatchingStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)initWithStoreName:(id)arg1 andRemotePeerID:(id)arg2 insertIntoManagedObjectContext:(id)arg3 ;
@end

