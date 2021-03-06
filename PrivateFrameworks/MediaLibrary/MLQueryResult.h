/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:08 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaLibrary.framework/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaLibrary/MediaLibrary-Structs.h>
@class NSArray;

@interface MLQueryResult : NSObject {

	shared_ptr<mlcore::EntityQuery::Result>* _coreQueryResult;

}

@property (nonatomic,readonly) NSArray * entities; 
@property (nonatomic,readonly) shared_ptr<mlcore::EntityQuery::Result>* coreQueryResult;              //@synthesize coreQueryResult=_coreQueryResult - In the implementation block
-(NSArray *)entities;
-(id)initWithCoreQueryResult:(shared_ptr<mlcore::EntityQuery::Result>*)arg1 ;
-(shared_ptr<mlcore::EntityQuery::Result>*)coreQueryResult;
@end

