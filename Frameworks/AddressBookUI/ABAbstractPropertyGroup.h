/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ABStyleProvider;
@class NSArray, ABUIPerson;

@interface ABAbstractPropertyGroup : NSObject {

	NSArray* _people;
	id<ABStyleProvider> _styleProvider;
	BOOL _hasChanges;
	ABUIPerson* _preinsertedPerson;

}

@property (nonatomic,retain) NSArray * people;                               //@synthesize people=_people - In the implementation block
@property (nonatomic,retain) ABUIPerson * preinsertedPerson;                 //@synthesize preinsertedPerson=_preinsertedPerson - In the implementation block
@property (assign,nonatomic) BOOL hasChanges;                                //@synthesize hasChanges=_hasChanges - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(void)dealloc;
-(id)init;
-(void)reloadFromModel;
-(void)setHasChanges:(BOOL)arg1 ;
-(void)updateRecord;
-(ABUIPerson *)preinsertedPerson;
-(void)setPreinsertedPerson:(ABUIPerson *)arg1 ;
-(void)setPeople:(NSArray *)arg1 ;
-(NSArray *)people;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(int)property;
-(BOOL)hasChanges;
-(BOOL)canSave;
@end

