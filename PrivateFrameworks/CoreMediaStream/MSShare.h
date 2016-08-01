/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:42 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MSShare : NSObject <NSCoding> {

	NSString* _personID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSString* _UUID;
	int _sharingOurStream;
	int _sharingTheirStream;

}

@property (nonatomic,retain) NSString * personID;                      //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * firstName;                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                      //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                  //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * UUID;                          //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) int sharingOurStream;                     //@synthesize sharingOurStream=_sharingOurStream - In the implementation block
@property (assign,nonatomic) int sharingTheirStream;                   //@synthesize sharingTheirStream=_sharingTheirStream - In the implementation block
@property (nonatomic,retain) NSString * fullName; 
@property (assign,nonatomic) int sharingOurPhotostream; 
@property (assign,nonatomic) int sharingTheirPhotostream; 
+(id)share;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)UUID;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(int)sharingOurStream;
-(int)sharingTheirStream;
-(void)setSharingOurStream:(int)arg1 ;
-(void)setSharingTheirStream:(int)arg1 ;
-(int)sharingOurPhotostream;
-(void)setSharingOurPhotostream:(int)arg1 ;
-(int)sharingTheirPhotostream;
-(void)setSharingTheirPhotostream:(int)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)fullName;
@end

