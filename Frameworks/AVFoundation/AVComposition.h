/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVCompositionInternal, NSArray, NSDictionary;

@interface AVComposition : AVAsset <NSSecureCoding, NSMutableCopying> {

	AVCompositionInternal* _priv;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,copy,readonly) NSDictionary * URLAssetInitializationOptions; 
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(id)_mediaSelectionGroupDictionaries;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(NSDictionary *)URLAssetInitializationOptions;
-(id)_initWithComposition:(id)arg1 ;
-(void)_loadAssetInspectorAndLoaderOnce;
-(id)_newTrackForIndex:(long long)arg1 ;
-(id)_mutableTracks;
-(BOOL)_clientProvidesNaturalSize;
-(int)_createEmptyMutableCompositionIfNeeded;
-(void)_setNaturalSize:(CGSize)arg1 ;
-(BOOL)_setURLAssetInitializationOptions:(id)arg1 error:(id*)arg2 ;
-(id)trackWithTrackID:(int)arg1 ;
-(NSArray *)tracks;
-(id)tracksWithMediaType:(id)arg1 ;
-(void)finalize;
@end

