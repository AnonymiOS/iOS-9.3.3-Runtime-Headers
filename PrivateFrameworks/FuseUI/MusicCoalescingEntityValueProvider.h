/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:58 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityValueProviding.h>

@protocol MusicEntityValueProviding;
@class NSDictionary, NSSet, MusicEntityViewContentDescriptor, NSString;

@interface MusicCoalescingEntityValueProvider : NSObject <MusicEntityValueProviding> {

	NSDictionary* _cachedPropertyValuesLoadedAsynchronously;
	NSDictionary* _cachedPropertyValuesLoadedSynchronously;
	NSSet* _propertiesToLoadAsynchronously;
	NSSet* _propertiesToPrefetchSynchronously;
	NSSet* _additionalPropertiesToPrefetchSynchronously;
	id<MusicEntityValueProviding> _baseEntityValueProvider;
	MusicEntityViewContentDescriptor* _contentDescriptor;

}

@property (nonatomic,copy) NSSet * additionalPropertiesToPrefetchSynchronously;                    //@synthesize additionalPropertiesToPrefetchSynchronously=_additionalPropertiesToPrefetchSynchronously - In the implementation block
@property (nonatomic,readonly) id<MusicEntityValueProviding> baseEntityValueProvider;              //@synthesize baseEntityValueProvider=_baseEntityValueProvider - In the implementation block
@property (nonatomic,readonly) MusicEntityViewContentDescriptor * contentDescriptor;               //@synthesize contentDescriptor=_contentDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reset;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(MusicEntityViewContentDescriptor *)contentDescriptor;
-(id)_cachedPropertyValuesLoadedSynchronously;
-(void)_invalidateCachedPropertyValuesLoadedSynchronously;
-(void)_updatePropertiesToLoadAndPrefetch;
-(void)_updateWithBaseEntityValueProvider:(id)arg1 contentDescriptor:(id)arg2 ;
-(void)_handleContentDescriptorDidInvalidateNotification:(id)arg1 ;
-(void)_invalidateCachedPropertyValuesLoadedAsynchronously;
-(void)setAdditionalPropertiesToPrefetchSynchronously:(NSSet *)arg1 ;
-(void)reloadWithBaseEntityValueProvider:(id)arg1 contentDescriptor:(id)arg2 ;
-(void)updateWithAsynchronouslyLoadedPropertyValues:(id)arg1 ;
-(NSSet *)additionalPropertiesToPrefetchSynchronously;
-(id<MusicEntityValueProviding>)baseEntityValueProvider;
@end

