/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:17 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SALocalSearchBusiness2, NSString;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * movieShowtimes; 
@property (nonatomic,copy) NSArray * showtimes; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)movieTheaterShowtimes;
+(id)movieTheaterShowtimesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)movieShowtimes;
-(void)setMovieShowtimes:(NSArray *)arg1 ;
-(NSArray *)showtimes;
-(void)setShowtimes:(NSArray *)arg1 ;
-(SALocalSearchBusiness2 *)theater;
-(void)setTheater:(SALocalSearchBusiness2 *)arg1 ;
-(id)encodedClassName;
@end

