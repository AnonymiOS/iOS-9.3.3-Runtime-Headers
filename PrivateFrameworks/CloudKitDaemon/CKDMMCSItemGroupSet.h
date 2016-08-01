/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSError;

@interface CKDMMCSItemGroupSet : NSObject {

	NSMutableDictionary* _itemsByGroupTuple;

}

@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,retain) NSMutableDictionary * itemsByGroupTuple;              //@synthesize itemsByGroupTuple=_itemsByGroupTuple - In the implementation block
-(id)init;
-(id)description;
-(id)initWithItems:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(NSError *)error;
-(id)CKPropertiesDescription;
-(id)allItemGroups;
-(NSMutableDictionary *)itemsByGroupTuple;
-(void)setItemsByGroupTuple:(NSMutableDictionary *)arg1 ;
@end
