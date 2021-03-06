/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableSet, UIView;

@interface MTUIFocusedTouchGestureRecognizer : UIGestureRecognizer {

	NSMutableSet* _activeTouches;
	BOOL _didTouchOutside;
	UIView* _focusedView;
	UIEdgeInsets _touchAllowance;

}

@property (nonatomic,readonly) UIView * focusedView;                   //@synthesize focusedView=_focusedView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets touchAllowance;              //@synthesize touchAllowance=_touchAllowance - In the implementation block
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)focusedView;
-(id)initWithFocusedView:(id)arg1 touchAllowance:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)touchAllowance;
-(void)setTouchAllowance:(UIEdgeInsets)arg1 ;
@end

