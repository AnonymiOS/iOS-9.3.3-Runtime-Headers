/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIReusableObject : NSObject {

	BOOL _isPreparedForReuse;
	BOOL _isPreparingFromStatement;
	BOOL _isPreparedFromStatement;

}

@property (nonatomic,readonly) BOOL isPreparedFromStatement;              //@synthesize isPreparedFromStatement=_isPreparedFromStatement - In the implementation block
-(id)init;
-(void)prepareForReuse;
-(void)prepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(void)didPrepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)isPreparedFromStatement;
@end

