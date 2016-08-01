/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:33 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSArray, NSString;

@interface MLMovieProperties : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSArray * castMembers; 
@property (nonatomic,copy) NSString * copyrightWarning; 
@property (nonatomic,copy) NSArray * directors; 
@property (nonatomic,copy) NSArray * producers; 
@property (nonatomic,copy) NSArray * screenwriters; 
@property (nonatomic,copy) NSString * studioName; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)directors;
-(void)setDirectors:(NSArray *)arg1 ;
-(id)initWithMoviePropertiesDictionary:(id)arg1 ;
-(id)copyMoviePropertiesDictionary;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)castMembers;
-(NSString *)copyrightWarning;
-(NSArray *)producers;
-(NSArray *)screenwriters;
-(void)setCastMembers:(NSArray *)arg1 ;
-(void)setCopyrightWarning:(NSString *)arg1 ;
-(void)setProducers:(NSArray *)arg1 ;
-(void)setScreenwriters:(NSArray *)arg1 ;
-(void)setStudioName:(NSString *)arg1 ;
-(NSString *)studioName;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
@end

