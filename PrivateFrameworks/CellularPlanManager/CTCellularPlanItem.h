/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:49 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTCellularPlan, NSNumber;

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _iccid;
	BOOL _shouldDisplayType;
	BOOL _shouldAutoSelectWhenInRange;
	BOOL _isSimStateValid;
	BOOL _isSelectable;
	CTCellularPlan* _plan;
	long long _type;
	NSNumber* _isSelectedOverride;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CTCellularPlan * plan;                       //@synthesize plan=_plan - In the implementation block
@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayType;                        //@synthesize shouldDisplayType=_shouldDisplayType - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoSelectWhenInRange;              //@synthesize shouldAutoSelectWhenInRange=_shouldAutoSelectWhenInRange - In the implementation block
@property (assign,nonatomic) BOOL isSimStateValid;                          //@synthesize isSimStateValid=_isSimStateValid - In the implementation block
@property (nonatomic,readonly) BOOL isBackedByCellularPlan; 
@property (assign,nonatomic) BOOL isSelectable;                             //@synthesize isSelectable=_isSelectable - In the implementation block
@property (nonatomic,readonly) BOOL isSelected; 
@property (nonatomic,readonly) NSString * iccid; 
@property (nonatomic,retain) NSNumber * isSelectedOverride;                 //@synthesize isSelectedOverride=_isSelectedOverride - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSelected;
-(BOOL)isSelectable;
-(void)setIsSelectable:(BOOL)arg1 ;
-(id)initWithCellularPlan:(id)arg1 iccid:(id)arg2 name:(id)arg3 type:(long long)arg4 ;
-(NSNumber *)isSelectedOverride;
-(NSString *)iccid;
-(id)initWithCellularPlan:(id)arg1 ;
-(id)initWithCellularPlan:(id)arg1 type:(long long)arg2 ;
-(id)initWithIccid:(id)arg1 name:(id)arg2 ;
-(BOOL)shouldDisplayType;
-(void)setShouldDisplayType:(BOOL)arg1 ;
-(BOOL)shouldAutoSelectWhenInRange;
-(void)setShouldAutoSelectWhenInRange:(BOOL)arg1 ;
-(void)setIsSimStateValid:(BOOL)arg1 ;
-(void)setIsSelectedOverride:(NSNumber *)arg1 ;
-(BOOL)isBackedByCellularPlan;
-(CTCellularPlan *)plan;
-(BOOL)isSimStateValid;
@end

