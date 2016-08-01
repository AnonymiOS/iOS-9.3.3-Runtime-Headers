/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSSQLAliasGenerator : NSObject {

	unsigned _nextTableAlias;
	unsigned _nextVariableAlias;
	unsigned _nextTempTableAlias;
	NSString* _tableBase;
	NSString* _variableBase;

}
-(id)generateVariableAlias;
-(id)initWithNestingLevel:(unsigned)arg1 ;
-(id)generateTableAlias;
-(id)generateSubqueryVariableAlias;
-(id)generateTempTableName;
-(void)dealloc;
-(id)init;
@end

