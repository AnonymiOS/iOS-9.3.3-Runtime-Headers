/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:10:27 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface PSMagnifyMode : NSObject <NSCopying> {

	BOOL _zoomed;
	NSString* _localizedName;
	NSString* _name;
	NSArray* _previewHTMLStrings;
	NSArray* _previewStyleSheets;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                  //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,getter=isZoomed,nonatomic) BOOL zoomed;               //@synthesize zoomed=_zoomed - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * previewHTMLStrings;              //@synthesize previewHTMLStrings=_previewHTMLStrings - In the implementation block
@property (nonatomic,retain) NSArray * previewStyleSheets;              //@synthesize previewStyleSheets=_previewStyleSheets - In the implementation block
+(id)magnifyModeWithSize:(CGSize)arg1 name:(id)arg2 localizedName:(id)arg3 isZoomed:(BOOL)arg4 ;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSString *)localizedName;
-(BOOL)isZoomed;
-(void)setZoomed:(BOOL)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSArray *)previewHTMLStrings;
-(void)setPreviewHTMLStrings:(NSArray *)arg1 ;
-(NSArray *)previewStyleSheets;
-(void)setPreviewStyleSheets:(NSArray *)arg1 ;
@end

