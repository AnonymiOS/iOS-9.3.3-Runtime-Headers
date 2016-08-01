/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:36 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSDictionary, NSArray;

@interface CUINamedImageAtlas : CUINamedLookup {

	NSDictionary* _images;
	NSArray* _renditions;
	CFArrayRef _atlasImages;

}

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CFArrayRef images; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) NSArray * imageNames; 
-(id)_renditionForKey:(id)arg1 inThemeRef:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 withContents:(id)arg3 contentsFromCatalog:(id)arg4 fromTheme:(unsigned long long)arg5 withSourceThemeRef:(unsigned long long)arg6 ;
-(id)imageWithName:(id)arg1 ;
-(NSArray *)imageNames;
-(void)dealloc;
-(double)scale;
-(CFArrayRef)images;
-(CGImageRef)image;
@end

