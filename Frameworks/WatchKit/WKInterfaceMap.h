/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <WatchKit/WKInterfaceObject.h>

@interface WKInterfaceMap : WKInterfaceObject
-(void)setRegion:(SCD_Struct_WK7)arg1 ;
-(void)removeAllAnnotations;
-(void)setVisibleMapRect:(SCD_Struct_WK7)arg1 ;
-(void)addAnnotation:(CGPoint)arg1 withImage:(id)arg2 centerOffset:(CGPoint)arg3 ;
-(void)addAnnotation:(CGPoint)arg1 withImageNamed:(id)arg2 centerOffset:(CGPoint)arg3 ;
-(void)addAnnotation:(CGPoint)arg1 withPinColor:(long long)arg2 ;
@end

