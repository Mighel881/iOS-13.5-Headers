/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

@class _UIStatusBarRoundedCornerView;

@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView {

	_UIStatusBarRoundedCornerView* _pillView;

}
-(long long)textStyle;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(long long)buttonType;
-(BOOL)showsTouchWhenHighlighted;
-(BOOL)allowsUserInteraction;
-(double)extraRightPadding;
-(void)_updatePillFrame;
-(CGRect)_pillFrame;
-(void)movedToSuperview:(id)arg1 ;
-(BOOL)usesAdvancedActions;
@end
