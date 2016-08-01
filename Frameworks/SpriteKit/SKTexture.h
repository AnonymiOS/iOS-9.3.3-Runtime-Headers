/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:38 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, CIFilter, SKTextureCache;

@interface SKTexture : NSObject <NSCopying, NSCoding> {

	BOOL _shouldGenerateMipmaps;
	BOOL _didGenerateMipmaps;
	BOOL _isPath;
	BOOL _isData;
	NSString* _imgName;
	NSArray* _searchPaths;
	CGRect _textRect;
	CGRect _textCoords;
	BOOL _disableAlpha;
	BOOL _isRotated;
	CGPoint _cropScale;
	CGPoint _cropOffset;
	int _alignment;
	int _rowLength;
	CIFilter* _filter;
	SKTexture* _originalTexture;
	unsigned _textureTarget;
	NSString* _originalAtlasName;
	NSString* _subTextureName;
	SKTextureCache* _textureCache;
	jet_texture* _backingTexture;
	BOOL _performFullCapture;
	unsigned* _alphaMap;
	CGSize _alphaMapSize;

}

@property (assign,nonatomic) unsigned textureTarget; 
@property (assign,nonatomic) BOOL isRotated; 
@property (nonatomic,readonly) BOOL hasAlpha; 
@property (assign,nonatomic) int wrapMode; 
@property (nonatomic,readonly) NSString * imageNameOrPath; 
@property (assign,nonatomic) long long filteringMode; 
@property (assign,nonatomic) BOOL usesMipmaps; 
@property (assign) BOOL performFullCapture;                             //@synthesize performFullCapture=_performFullCapture - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) BOOL useAlpha; 
@property (assign,nonatomic) BOOL disableAlpha; 
@property (nonatomic,readonly) BOOL isRepeatable; 
@property (assign,nonatomic) CGPoint cropScale;                         //@synthesize cropScale=_cropScale - In the implementation block
@property (assign,nonatomic) CGPoint cropOffset;                        //@synthesize cropOffset=_cropOffset - In the implementation block
@property (nonatomic,copy) NSString * originalAtlasName;                //@synthesize originalAtlasName=_originalAtlasName - In the implementation block
@property (nonatomic,copy) NSString * subTextureName;                   //@synthesize subTextureName=_subTextureName - In the implementation block
@property (nonatomic,readonly) unsigned* alphaMap;                      //@synthesize alphaMap=_alphaMap - In the implementation block
@property (nonatomic,readonly) CGSize alphaMapSize;                     //@synthesize alphaMapSize=_alphaMapSize - In the implementation block
+(id)_textureByTransferingData:(char*)arg1 size:(CGSize)arg2 ;
+(void)_reloadTextureCacheForImageNamed:(id)arg1 ;
+(id)_cachedTextureNames;
+(id)compressedTextureWithData:(id)arg1 ;
+(id)compressedTextureWithData:(id)arg1 size:(CGSize)arg2 bitsPerPixel:(unsigned)arg3 hasAlpha:(BOOL)arg4 ;
+(id)textureWithImagePath:(id)arg1 ;
+(id)_textureByTransferingData:(char*)arg1 size:(CGSize)arg2 rowLength:(unsigned)arg3 alignment:(unsigned)arg4 ;
+(id)_textureWithGLTextureId:(unsigned)arg1 size:(CGSize)arg2 ;
+(void)updateTextures;
+(void)deleteUnusedTextures;
+(id)_textureWithImageNamed:(id)arg1 ;
+(id)textureWithImageNamed:(id)arg1 ;
+(id)textureWithRect:(CGRect)arg1 inTexture:(id)arg2 ;
+(void)registerTextureCache:(id)arg1 forName:(id)arg2 ;
+(void)preloadTextures:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)lookupTextureCacheForName:(id)arg1 ;
+(id)textureWithCGImage:(CGImageRef)arg1 pointSize:(CGSize)arg2 ;
+(id)textureWithData:(id)arg1 size:(CGSize)arg2 ;
+(void)_addTextureToPreloadlist:(id)arg1 ;
+(id)textureWithImageNamed:(id)arg1 rect:(CGRect)arg2 ;
+(id)textureVectorNoiseWithSmoothness:(double)arg1 size:(CGSize)arg2 ;
+(id)textureNoiseWithSmoothness:(double)arg1 size:(CGSize)arg2 grayscale:(BOOL)arg3 ;
+(id)textureWithCGImage:(CGImageRef)arg1 ;
+(id)textureWithData:(id)arg1 size:(CGSize)arg2 flipped:(BOOL)arg3 ;
+(id)textureWithData:(id)arg1 size:(CGSize)arg2 rowLength:(unsigned)arg3 alignment:(unsigned)arg4 ;
+(void)preloadTextures;
+(id)textureWithImage:(id)arg1 ;
-(BOOL)isRotated;
-(void)load;
-(NSString *)imageNameOrPath;
-(CGImageRef)_createCGImage;
-(id)_generateNormalMap:(double)arg1 contrast:(double)arg2 multiPass:(unsigned long long)arg3 ;
-(id)_copyImageData;
-(id)_initWithGLTextureId:(unsigned)arg1 size:(CGSize)arg2 ;
-(CGImageRef)_newTextureFromGLCache;
-(void)_setImageName:(id)arg1 ;
-(void)setIsRotated:(BOOL)arg1 ;
-(void)setTextureTarget:(unsigned)arg1 ;
-(CGImageRef)_rotateCGImage:(CGImageRef)arg1 ;
-(void)_savePngFromGLCache:(id)arg1 ;
-(id)metalTexture;
-(int)glTextureId;
-(unsigned)textureTarget;
-(shared_ptr<jet_texture>*)_backingTexture;
-(id)initWithBackingTetxure:(shared_ptr<jet_texture>*)arg1 logicalWidth:(float)arg2 height:(float)arg3 ;
-(id)initWithBackingTetxure:(shared_ptr<jet_texture>*)arg1 ;
-(id)imgName;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(void)commonInit;
-(BOOL)hasAlpha;
-(CGPoint)cropOffset;
-(CGPoint)cropScale;
-(void)setFilteringMode:(long long)arg1 ;
-(unsigned*)alphaMap;
-(CGSize)alphaMapSize;
-(int)wrapMode;
-(id)textureByGeneratingNormalMapWithSmoothness:(double)arg1 contrast:(double)arg2 ;
-(void)_ensureImageData;
-(BOOL)loadImageDataFromPVRData:(id)arg1 ;
-(void)loadImageData;
-(void)initTextureCacheWithImageData;
-(void)loadImageDataFromCGImage:(CGImageRef)arg1 pointsSize:(CGSize)arg2 ;
-(BOOL)loadImageDataFromPVRGZData:(id)arg1 ;
-(id)_textureCache;
-(BOOL)performFullCapture;
-(id)initWithImageNamed:(id)arg1 ;
-(id)textureByGeneratingNormalMap;
-(void)generateAlphaMapOfSize:(CGSize)arg1 fromImage:(CGImageRef)arg2 ;
-(BOOL)alphaTestX:(double)arg1 y:(double)arg2 ;
-(CGImageRef)alphaMask;
-(void)setTextureDimension:(const CGSize*)arg1 withPixelSize:(const CGSize*)arg2 ;
-(void)preloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithImagePath:(id)arg1 ;
-(BOOL)useAlpha;
-(void)setDisableAlpha:(BOOL)arg1 ;
-(BOOL)disableAlpha;
-(id)textureByApplyingCIFilter:(id)arg1 ;
-(void)setUsesMipmaps:(BOOL)arg1 ;
-(void)_loadOnTextureQueue;
-(BOOL)isRepeatable;
-(void)setCropScale:(CGPoint)arg1 ;
-(void)setCropOffset:(CGPoint)arg1 ;
-(NSString *)originalAtlasName;
-(void)setOriginalAtlasName:(NSString *)arg1 ;
-(NSString *)subTextureName;
-(void)setSubTextureName:(NSString *)arg1 ;
-(void)setPerformFullCapture:(BOOL)arg1 ;
-(long long)filteringMode;
-(BOOL)usesMipmaps;
-(CGRect)textureRect;
-(BOOL)isInMemory;
-(void)preload;
-(void)unload;
-(void)setWrapMode:(int)arg1 ;
-(CGSize)pixelSize;
@end

