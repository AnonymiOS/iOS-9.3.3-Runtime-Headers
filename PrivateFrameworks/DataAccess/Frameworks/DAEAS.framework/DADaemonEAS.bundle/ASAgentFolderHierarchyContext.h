/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:40 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ASAgentFolderHierarchyContext : NSObject {

	BOOL _isFirstSync;
	NSArray* _oldFolders;

}

@property (assign,nonatomic) BOOL isFirstSync;                  //@synthesize isFirstSync=_isFirstSync - In the implementation block
@property (nonatomic,retain) NSArray * oldFolders;              //@synthesize oldFolders=_oldFolders - In the implementation block
-(void)setIsFirstSync:(BOOL)arg1 ;
-(void)setOldFolders:(NSArray *)arg1 ;
-(BOOL)isFirstSync;
-(NSArray *)oldFolders;
@end

