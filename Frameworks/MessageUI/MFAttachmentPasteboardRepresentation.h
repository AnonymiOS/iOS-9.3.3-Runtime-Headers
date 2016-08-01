/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:07 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/MFAttachmentPasteboardRepresentation.h>
@class NSData, NSString;


@protocol MFAttachmentPasteboardRepresentation
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * mimeType; 
@required
-(NSString *)name;
-(BOOL)isValid;
-(NSData *)data;
-(NSString *)mimeType;

@end


@class NSData, NSString;

@interface MFAttachmentPasteboardRepresentation : NSObject <NSCoding, MFAttachmentPasteboardRepresentation> {

	NSData* _data;
	NSString* _name;
	NSString* _mimeType;

}

@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * mimeType;                      //@synthesize mimeType=_mimeType - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isValid;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)mimeType;
-(id)initWithAttachment:(id)arg1 ;
-(id)initWithMFAttachment:(id)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
@end

