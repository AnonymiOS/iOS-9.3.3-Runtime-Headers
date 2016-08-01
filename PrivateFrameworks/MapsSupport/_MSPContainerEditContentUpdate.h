/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:46 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/_MSPContainerEdit.h>
#import <libobjc.A.dylib/MSPContainerEditContentUpdate.h>

@protocol MSPMutableObject, MSPImmutableObject;
@class NSString;

@interface _MSPContainerEditContentUpdate : _MSPContainerEdit <MSPContainerEditContentUpdate> {

	id<MSPMutableObject> _updatedObject;
	id<MSPImmutableObject> _updatedImmutableObject;

}

@property (nonatomic,readonly) id<MSPMutableObject> updatedObject;                         //@synthesize updatedObject=_updatedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<MSPImmutableObject> updatedImmutableObject;              //@synthesize updatedImmutableObject=_updatedImmutableObject - In the implementation block
-(NSString *)description;
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(id<MSPMutableObject>)updatedObject;
-(id)initWithUpdatedObject:(id)arg1 ;
-(id<MSPImmutableObject>)updatedImmutableObject;
-(id)initWithUpdatedImmutableObject:(id)arg1 ;
@end

