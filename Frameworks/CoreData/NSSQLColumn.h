/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:26 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLProperty.h>

@class NSString;

@interface NSSQLColumn : NSSQLProperty {

	NSString* _columnName;
	int _sqlType;
	unsigned _precision;
	int _scale;
	unsigned _fetchIndex;
	unsigned _slot;
	unsigned _allowAliasing;

}
-(id)initWithColumnName:(id)arg1 sqlType:(unsigned)arg2 ;
-(void)setAllowAliasing:(BOOL)arg1 ;
-(BOOL)allowAliasing;
-(id)columnName;
-(unsigned)sqlType;
-(unsigned)slot;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setSQLType:(unsigned)arg1 ;
-(id)initForReadOnlyFetching;
-(void)_setColumnName:(id)arg1 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(unsigned)roughSizeEstimate;
-(unsigned)fetchIndex;
-(void)_setFetchIndex:(unsigned)arg1 ;
-(void)_setSlotIfDefault:(unsigned)arg1 ;
-(id)cloneForReadOnlyFetching;
-(void)dealloc;
-(id)description;
-(void)setScale:(int)arg1 ;
-(int)scale;
-(void)setPrecision:(unsigned)arg1 ;
-(unsigned)precision;
@end

