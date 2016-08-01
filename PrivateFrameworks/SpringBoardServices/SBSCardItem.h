/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:25 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDictionary, UIImage;

@interface SBSCardItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _requiresPasscode;
	NSString* _identifier;
	NSData* _iconData;
	NSString* _title;
	NSString* _body;
	NSString* _bundleName;
	NSData* _attachmentData;
	NSDictionary* _userInfo;
	UIImage* _thumbnail;

}

@property (nonatomic,copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * iconData;                    //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * body;                      //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) BOOL requiresPasscode;              //@synthesize requiresPasscode=_requiresPasscode - In the implementation block
@property (nonatomic,copy) NSString * bundleName;                //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,copy) NSData * attachmentData;              //@synthesize attachmentData=_attachmentData - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) UIImage * thumbnail;                  //@synthesize thumbnail=_thumbnail - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequiresPasscode:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(BOOL)arg5 bundleName:(id)arg6 attachmentData:(id)arg7 userInfo:(id)arg8 ;
-(id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(BOOL)arg5 bundleName:(id)arg6 userInfo:(id)arg7 ;
-(BOOL)requiresPasscode;
-(NSData *)attachmentData;
-(void)setAttachmentData:(NSData *)arg1 ;
-(id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 classification:(long long)arg5 bundleName:(id)arg6 userInfo:(id)arg7 ;
-(NSData *)iconData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)sortDate;
-(NSString *)body;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)bundleName;
-(void)setIconData:(NSData *)arg1 ;
@end
