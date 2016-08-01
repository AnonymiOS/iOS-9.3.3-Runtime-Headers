/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:12 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducerBundle.h>

@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {

	Class _producerClass;
	long long _loadCounter;
	NSArray* _loadedClasses;
	OKProducerContent* _content;

}

@property (nonatomic,retain) OKProducerContent * content;              //@synthesize content=_content - In the implementation block
-(id)backgroundColor;
-(void)dealloc;
-(id)init;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)localizedName;
-(id)initWithURL:(id)arg1 ;
-(OKProducerContent *)content;
-(BOOL)isLoaded;
-(BOOL)_load;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(void)setContent:(OKProducerContent *)arg1 ;
-(id)audioURLs;
-(void)setupJavascriptContext:(id)arg1 ;
-(id)exportedClassNames;
-(id)contentIdentifier;
-(BOOL)hasLoadedClass:(Class)arg1 ;
-(double)minimumContentVersion;
-(id)producerWithPresentation:(id)arg1 ;
-(BOOL)loadRetain;
-(void)unloadRelease;
-(void)_bundleDidLoad:(id)arg1 ;
-(void)_unload;
-(id)supportedResolutions;
-(BOOL)hasExportedClass:(Class)arg1 ;
-(unsigned long long)family;
@end

