/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <libobjc.A.dylib/ABPersonImageDataDelegate.h>

@class NSMutableDictionary, ABUIPerson, ABPersonTableViewDataSource;

@interface ABPersonTableViewImageDataDelegate : NSObject <ABPersonImageDataDelegate> {

	NSMutableDictionary* _currentImageData;
	ABUIPerson* _personForImageData;
	BOOL _hasImageChanges;
	BOOL _didChangePreferredPersonForImage;
	ABPersonTableViewDataSource* _dataSource;

}

@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)setDataSource:(ABPersonTableViewDataSource *)arg1 ;
-(void)dealloc;
-(ABPersonTableViewDataSource *)dataSource;
-(id)writablePeople;
-(BOOL)hasImageDataForPerson:(id)arg1 ;
-(id)personForImageData;
-(id)imageDataWithFormat:(int)arg1 cropRect:(CGRect*)arg2 forPerson:(id)arg3 ;
-(void)setPersonForImageData:(id)arg1 ;
-(void)refreshImageData;
-(void)removeImageDataForPerson:(id)arg1 ;
-(void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(CGRect)arg3 forPerson:(id)arg4 ;
-(id)currentImageData;
-(id)imageDataWithFormat:(int)arg1 cropRect:(CGRect*)arg2 forPerson:(id)arg3 isRemoved:(BOOL*)arg4 ;
-(void)markImagesWith:(id)arg1 forPerson:(id)arg2 ;
-(id)personForImageDataExcludingPeople:(id)arg1 ;
-(void)reloadImageData;
-(void)setCurrentImageData:(id)arg1 ;
-(void)resetImageData;
-(void)imageWillSave;
-(BOOL)hasImageChanges;
-(void)updateRecordImages;
-(BOOL)didChangePreferredPersonForImage;
-(id)people;
@end

