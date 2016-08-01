/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:12:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADProperties.h>

@class OADTextBodyAutoFit, OADTextWarp;

@interface OADTextBodyProperties : OADProperties {

	OADTextBodyAutoFit* mAutoFit;
	OADTextWarp* mTextWarp;
	float mTopInset;
	float mLeftInset;
	float mBottomInset;
	float mRightInset;
	float mRotation;
	float mColumnSpacing;
	unsigned short mColumnCount;
	unsigned short mTextBodyId;
	unsigned char mTextAnchorType;
	unsigned char mFlowType;
	unsigned char mWrapType;
	unsigned char mVerticalOverflowType;
	unsigned char mHorizontalOverflowType;
	unsigned mRepectFirstLastParagraphSpacing : 1;
	unsigned mIsUpright : 1;
	unsigned mIsAnchorCenter : 1;
	unsigned mIsLeftToRightColumns : 1;
	unsigned mHasVerticalOverflowType : 1;
	unsigned mHasHorizontalOverflowType : 1;
	unsigned mHasTextBodyId : 1;
	unsigned mHasFlowType : 1;
	unsigned mHasWrapType : 1;
	unsigned mHasTextAnchorType : 1;
	unsigned mHasIsAnchorCenter : 1;
	unsigned mHasIsUpright : 1;
	unsigned mHasRotation : 1;
	unsigned mHasColumnCount : 1;
	unsigned mHasColumnSpacing : 1;
	unsigned mHasIsLeftToRightColumns : 1;
	unsigned mHasRepectFirstLastParagraphSpacing : 1;
	unsigned mHasTopInset : 1;
	unsigned mHasLeftInset : 1;
	unsigned mHasRightInset : 1;
	unsigned mHasBottomInset : 1;

}
+(id)defaultProperties;
+(id)defaultEscherWordArtProperties;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(int)columnCount;
-(void)setColumnCount:(int)arg1 ;
-(BOOL)hasTopInset;
-(float)topInset;
-(BOOL)hasLeftInset;
-(float)leftInset;
-(BOOL)hasBottomInset;
-(float)bottomInset;
-(BOOL)hasRightInset;
-(float)rightInset;
-(unsigned char)textAnchorType;
-(void)setLeftInset:(float)arg1 ;
-(void)setTopInset:(float)arg1 ;
-(void)setRightInset:(float)arg1 ;
-(void)setBottomInset:(float)arg1 ;
-(void)setColumnSpacing:(float)arg1 ;
-(void)setIsLeftToRightColumns:(BOOL)arg1 ;
-(void)setRespectLastFirstLineSpacing:(BOOL)arg1 ;
-(void)setIsAnchorCenter:(BOOL)arg1 ;
-(void)setTextAnchorType:(unsigned char)arg1 ;
-(void)setIsUpright:(BOOL)arg1 ;
-(void)setAutoFit:(id)arg1 ;
-(void)setTextWarp:(id)arg1 ;
-(void)setFlowType:(unsigned char)arg1 ;
-(void)setWrapType:(unsigned char)arg1 ;
-(void)setVerticalOverflowType:(unsigned char)arg1 ;
-(void)setHorizontalOverflowType:(unsigned char)arg1 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(BOOL)hasRespectLastFirstLineSpacing;
-(BOOL)hasColumnCount;
-(BOOL)hasColumnSpacing;
-(BOOL)hasIsLeftToRightColumns;
-(BOOL)hasAutoFit;
-(BOOL)hasFlowType;
-(BOOL)hasWrapType;
-(BOOL)hasVerticalOverflowType;
-(BOOL)hasHorizontalOverflowType;
-(BOOL)hasTextWarp;
-(id)textWarp;
-(BOOL)hasIsAnchorCenter;
-(BOOL)hasTextAnchorType;
-(BOOL)hasIsUpright;
-(BOOL)hasRotation;
-(id)autoFit;
-(float)columnSpacing;
-(int)textBodyId;
-(void)setTextBodyId:(int)arg1 ;
-(unsigned char)flowType;
-(unsigned char)wrapType;
-(unsigned char)verticalOverflowType;
-(unsigned char)horizontalOverflowType;
-(BOOL)respectLastFirstLineSpacing;
-(BOOL)isUpright;
-(BOOL)isAnchorCenter;
-(BOOL)isLeftToRightColumns;
-(BOOL)hasTextBodyId;
-(BOOL)isWarped;
@end

