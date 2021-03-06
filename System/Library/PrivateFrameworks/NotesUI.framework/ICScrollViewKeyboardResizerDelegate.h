/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICScrollViewKeyboardResizerDelegate <NSObject>
@optional
-(BOOL)keyboardResizerAutoscrollAboveKeyboard;
-(void)keyboardResizerAdjustInsetsWithKeyboardFrame:(CGRect)arg1 scrollAboveHeight:(double)arg2 duration:(double)arg3;
-(double)topInsetForResizer:(id)arg1;

@required
-(double)consumedBottomAreaForResizer:(id)arg1;
-(id)keyboardResizerScrollView;

@end

