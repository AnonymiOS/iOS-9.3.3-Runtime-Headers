/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PSSpecifier, NSString, NSURL, NSArray, NSMutableSet, NSMutableArray, PSSpecifierAction;

@interface PSSearchEntry : NSObject {

	PSSpecifier* _specifier;
	NSString* _name;
	NSURL* _url;
	BOOL _isRootURL;
	NSString* _identifier;
	NSString* _sectionIdentifier;
	BOOL _isSection;
	BOOL _hasDetailController;
	BOOL _hasListController;
	NSArray* _additionalDetailTextComponents;
	PSSearchEntry* _parentEntry;
	NSMutableSet* _childEntries;
	NSString* _groupName;
	NSString* _plistName;
	NSString* _bundleName;
	NSString* _manifestBundleName;
	NSMutableArray* _keywords;
	PSSpecifierAction* _action;
	PSSpecifier* _groupSpecifier;

}

@property (assign,nonatomic,__weak) PSSearchEntry * parentEntry;               //@synthesize parentEntry=_parentEntry - In the implementation block
@property (nonatomic,readonly) NSMutableSet * childEntries;                    //@synthesize childEntries=_childEntries - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isRootURL;                                 //@synthesize isRootURL=_isRootURL - In the implementation block
@property (nonatomic,copy) NSString * groupName;                               //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * plistName;                               //@synthesize plistName=_plistName - In the implementation block
@property (nonatomic,copy) NSString * bundleName;                              //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,copy) NSString * manifestBundleName;                      //@synthesize manifestBundleName=_manifestBundleName - In the implementation block
@property (nonatomic,readonly) NSMutableArray * keywords;                      //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,retain) PSSpecifierAction * action;                       //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) PSSpecifier * specifier;                        //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * groupSpecifier;                     //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
-(id)description;
-(id)debugDescription;
-(NSString *)name;
-(NSString *)identifier;
-(NSURL *)url;
-(PSSpecifierAction *)action;
-(id)recursiveDescription;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setAction:(PSSpecifierAction *)arg1 ;
-(NSString *)groupName;
-(void)setParentEntry:(PSSearchEntry *)arg1 ;
-(PSSearchEntry *)parentEntry;
-(PSSpecifier *)specifier;
-(PSSpecifier *)groupSpecifier;
-(NSMutableSet *)childEntries;
-(id)rootEntry;
-(BOOL)isSectionEntry;
-(id)sectionEntry;
-(BOOL)hasListController;
-(BOOL)finishIndexing;
-(BOOL)isRootEntry;
-(id)ancestorEntries;
-(NSString *)plistName;
-(id)initWithSpecifier:(id)arg1 parent:(id)arg2 ;
-(void)setPlistName:(NSString *)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setManifestBundleName:(NSString *)arg1 ;
-(BOOL)isRootURL;
-(id)detailTextWithEffectiveTitle:(id*)arg1 ;
-(BOOL)_specifier:(id)arg1 hasDetailController:(BOOL)arg2 ;
-(BOOL)hasFinishedIndexing;
-(id)_prefsURLIsRoot:(BOOL*)arg1 ;
-(BOOL)hasDetailController;
-(id)hierarchyDescription;
-(id)recursiveDescriptionForLevel:(unsigned long long)arg1 ;
-(BOOL)isRootUrl;
-(NSString *)manifestBundleName;
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)bundleName;
-(NSString *)sectionIdentifier;
-(NSMutableArray *)keywords;
@end

