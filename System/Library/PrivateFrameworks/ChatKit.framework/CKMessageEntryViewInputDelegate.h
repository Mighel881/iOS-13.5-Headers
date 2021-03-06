/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKMessageEntryViewInputDelegate <NSObject>
@optional
-(void)messageEntryView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
-(void)messageEntryViewDidExpand:(id)arg1;
-(void)messageEntryViewDidCollapse:(id)arg1;
-(void)messageEntryViewPhotoButtonTouchDown:(id)arg1;

@required
-(BOOL)messageEntryShouldHideCaret:(id)arg1;
-(long long)messageEntryViewHighLightInputButton:(id)arg1;
-(void)messageEntryViewDidTakeFocus:(id)arg1;
-(void)messageEntryViewHandwritingButtonHit:(id)arg1;
-(void)messageEntryViewPhotoButtonHit:(id)arg1;
-(void)messageEntryViewBrowserButtonHit:(id)arg1;

@end

