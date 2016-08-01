/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:38 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class NSArray, _TDPackerNode;

@interface TDPacker : NSObject {

	/*^block*/id _sizeHandler;
	NSArray* _objectsToPack;
	_TDPackerNode* _root;
	NSArray* _packedObjects;

}

@property (nonatomic,retain) NSArray * objectsToPack; 
@property (retain) _TDPackerNode * root;                           //@synthesize root=_root - In the implementation block
@property (retain) NSArray * packedObjects;                        //@synthesize packedObjects=_packedObjects - In the implementation block
-(void)dealloc;
-(void)setRoot:(_TDPackerNode *)arg1 ;
-(void)setPackedObjects:(NSArray *)arg1 ;
-(NSArray *)objectsToPack;
-(id)_findNode:(id)arg1 ofSize:(CGSize)arg2 ;
-(id)_splitNode:(id)arg1 toSize:(CGSize)arg2 ;
-(id)_growNodeToSize:(CGSize)arg1 ;
-(id)_growRight:(CGSize)arg1 ;
-(id)_growDown:(CGSize)arg1 ;
-(void)setSizeHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)sizeHandler;
-(void)setObjectsToPack:(NSArray *)arg1 ;
-(void)pack;
-(CGSize)enclosingSize;
-(BOOL)objectAtIndexFit:(long long)arg1 ;
-(CGPoint)fitPositionOfObjectAtIndex:(long long)arg1 ;
-(NSArray *)packedObjects;
-(_TDPackerNode *)root;
@end

