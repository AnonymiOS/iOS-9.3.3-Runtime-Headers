/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:11:34 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUHTMLParserDelegate;
@interface MPUHTMLParser : NSObject {

	id<MPUHTMLParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPUHTMLParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)parser;
+(id)displayDelegateWithDefaultAttributes:(id)arg1 ;
+(id)sanitizedHTMLString:(id)arg1 ;
-(void)setDelegate:(id<MPUHTMLParserDelegate>)arg1 ;
-(id<MPUHTMLParserDelegate>)delegate;
-(id)attributedStringForHTMLString:(id)arg1 error:(id*)arg2 ;
@end

