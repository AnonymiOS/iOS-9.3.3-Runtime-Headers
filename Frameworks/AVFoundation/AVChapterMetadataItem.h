/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:57 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataItem.h>

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {

	AVChapterMetadataItemInternal* _privChapter;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(SCD_Struct_CM5)duration;
-(id)key;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CM5)time;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)locale;
-(id)languageCode;
-(void)cancelLoading;
-(BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1 ;
-(long long)_valueStatus;
-(id)_initWithAsset:(id)arg1 chapterGroupIndex:(long long)arg2 chapterIndex:(long long)arg3 chapterType:(id)arg4 extendedLanguageTag:(id)arg5 languageCode:(id)arg6 chapterDataType:(id)arg7 time:(SCD_Struct_CM5)arg8 duration:(SCD_Struct_CM5)arg9 ;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(void)_ensureValueLoadedSync;
-(void)_setValueStatus:(long long)arg1 figErrorCode:(int)arg2 ;
-(void)_takeValueFrom:(id)arg1 ;
-(long long)_chapterGroupIndex;
-(long long)_chapterIndex;
-(id)keySpace;
-(id)extraAttributes;
-(id)commonKey;
-(id)extendedLanguageTag;
-(id)dataType;
-(id)startDate;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finalize;
@end

