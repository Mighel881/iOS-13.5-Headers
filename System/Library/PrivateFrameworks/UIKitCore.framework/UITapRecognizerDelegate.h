/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITapRecognizerDelegate <NSObject>
@optional
-(void)resetTapCountForTapRecognizer:(id)arg1;

@required
-(double)_touchSloppinessFactor;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
-(void)tapRecognizerRecognizedTap:(id)arg1;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1;

@end

