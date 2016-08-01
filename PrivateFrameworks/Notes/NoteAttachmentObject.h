/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NoteObject;

@interface NoteAttachmentObject : NSManagedObject

@property (nonatomic,retain) NSString * contentID; 
@property (nonatomic,retain) NSString * filename; 
@property (nonatomic,retain) NSString * mimeType; 
@property (nonatomic,retain) NoteObject * note; 
+(id)attachmentDirectoryURLForAttachmentObjectID:(id)arg1 error:(id*)arg2 ;
+(id)attachmentDirectoryPathForAttachmentObjectID:(id)arg1 error:(id*)arg2 ;
+(BOOL)migrateFileForAttachment:(id)arg1 toCurrentAttachmentPathWithError:(id*)arg2 ;
+(BOOL)applyFileAttributesForAttachment:(id)arg1 error:(id*)arg2 ;
+(BOOL)migrateAttachmentRelatedFilesInContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)persistAttachmentData:(id)arg1 error:(id*)arg2 ;
-(id)attachmentDataFileURLWithError:(id*)arg1 ;
-(id)attachmentDataWithError:(id*)arg1 ;
-(void)prepareForDeletion;
@end

