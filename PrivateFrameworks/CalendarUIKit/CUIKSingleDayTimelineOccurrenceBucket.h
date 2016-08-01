/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:14 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineLayoutScreenUtils;
@class CUIKSingleDayTimelineLayoutPartition, NSMutableArray, NSArray;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {

	id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtBeginning;
	id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtEnd;
	id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
	BOOL _useTemporaryFitnessLevel;
	BOOL _temporaryFitnessLevelRequiresCalculation;
	double _temporaryFitnessLevel;
	BOOL _originalFitnessLevelRequiresCalculation;
	double _originalFitnessLevel;
	BOOL _ignoreFirstOccurrenceInFitnessCalculations;
	BOOL _ignoreLastOccurrenceInFitnessCalculations;
	BOOL _isOnlyBucket;
	CUIKSingleDayTimelineLayoutPartition* _correspondingPartition;
	NSMutableArray* _currentOccurrences;

}

@property (nonatomic,retain) CUIKSingleDayTimelineLayoutPartition * correspondingPartition;              //@synthesize correspondingPartition=_correspondingPartition - In the implementation block
@property (nonatomic,readonly) NSArray * occurrences; 
@property (assign,nonatomic) BOOL isOnlyBucket;                                                          //@synthesize isOnlyBucket=_isOnlyBucket - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentOccurrences;                                        //@synthesize currentOccurrences=_currentOccurrences - In the implementation block
-(CUIKSingleDayTimelineLayoutPartition *)correspondingPartition;
-(id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 ;
-(void)addOccurrenceTemporarilyToEnd:(id)arg1 ;
-(void)makeTemporaryChangesPermanent;
-(void)setIsOnlyBucket:(BOOL)arg1 ;
-(void)stampFramesOntoOccurrences;
-(id)earliestOccurrence;
-(id)_occurrencesForFitnessLevel;
-(BOOL)isOnlyBucket;
-(void)addOccurrenceTemporarilyToBeginning:(id)arg1 ;
-(void)removeOccurrenceAtBeginningTemporarily;
-(void)removeOccurrenceAtEndTemporarily;
-(void)revertTemporaryChanges;
-(void)setCorrespondingPartition:(CUIKSingleDayTimelineLayoutPartition *)arg1 ;
-(NSMutableArray *)currentOccurrences;
-(void)setCurrentOccurrences:(NSMutableArray *)arg1 ;
-(NSArray *)occurrences;
@end

