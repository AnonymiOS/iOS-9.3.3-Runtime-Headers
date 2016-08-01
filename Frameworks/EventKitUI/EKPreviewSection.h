/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:15 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface EKPreviewSection : NSObject {

	NSArray* _events;
	NSDate* _date;

}

@property (nonatomic,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
+(id)sectionWithDate:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(NSArray *)events;
@end

