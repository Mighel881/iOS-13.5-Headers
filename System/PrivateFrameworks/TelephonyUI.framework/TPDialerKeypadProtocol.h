/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPDialerKeypadProtocol <NSObject>
@optional
-(void)performTapActionDownForHighlightedKey;
-(void)performTapActionEndForHighlightedKey;
-(void)performTapActionCancelForHighlightedKey;
-(void)replaceButton:(id)arg1 atIndex:(unsigned long long)arg2;

@required
-(void)setDelegate:(id)arg1;
-(void)setPlaysSounds:(BOOL)arg1;
-(void)highlightKeyAtIndex:(long long)arg1;
-(long long)indexForHighlightedKey;

@end

