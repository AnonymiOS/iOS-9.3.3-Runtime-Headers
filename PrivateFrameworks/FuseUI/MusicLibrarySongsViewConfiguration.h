/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class NSMutableSet;

@interface MusicLibrarySongsViewConfiguration : MusicLibraryBrowseTableViewConfiguration {

	NSMutableSet* _additionalQueryFilterPredicates;

}
-(id)init;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(long long)handleSelectionOfUnplayableEntityValueContext:(id)arg1 withPlayabilityResult:(unsigned long long)arg2 fromViewController:(id)arg3 ;
-(void)addQueryFilterPredicate:(id)arg1 ;
@end
