/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject {

	NSTextContentManager* _textContentManager;
	NSTextRange* _elementRange;

}

@property (__weak) NSTextContentManager * textContentManager; 
@property (retain) NSTextRange * elementRange;                             //@synthesize elementRange=_elementRange - In the implementation block
-(id)init;
-(void)dealloc;
-(NSTextRange *)elementRange;
-(NSTextContentManager *)textContentManager;
-(void)setTextContentManager:(NSTextContentManager *)arg1 ;
-(id)initWithTextContentManager:(id)arg1 ;
-(void)setElementRange:(NSTextRange *)arg1 ;
@end

