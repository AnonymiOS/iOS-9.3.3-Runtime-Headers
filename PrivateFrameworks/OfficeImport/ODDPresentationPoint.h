/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/ODDPoint.h>

@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint {

	ODDPresentationPoint* mParent;
	NSMutableArray* mChildren;

}
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(id)parent;
-(id)children;
-(void)addChild:(id)arg1 order:(unsigned long long)arg2 ;
@end

