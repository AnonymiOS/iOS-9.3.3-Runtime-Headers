/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 31, 2016 at 10:09:52 PM Australian Western Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol UIWebFindOnPageHighlighter <NSObject>
@property (nonatomic,copy,readonly) NSString * searchText; 
@property (assign,nonatomic) id<UIWebFindOnPageHighlighterDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long numberOfMatches; 
@property (nonatomic,readonly) unsigned long long highlightedMatchIndex; 
@required
-(void)setDelegate:(id)arg1;
-(id<UIWebFindOnPageHighlighterDelegate>)delegate;
-(NSString *)searchText;
-(void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(BOOL)arg4;
-(void)highlightNextMatch;
-(void)highlightPreviousMatch;
-(unsigned long long)numberOfMatches;
-(unsigned long long)highlightedMatchIndex;

@end

