/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBHomeGesturePanGestureRecognizer.h>

@class SBFluidSwitcherViewController;

@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer {

	long long _touchInterfaceOrientationWhenGestureBegan;
	SBFluidSwitcherViewController* _switcherViewController;

}

@property (assign,nonatomic,__weak) SBFluidSwitcherViewController * switcherViewController;              //@synthesize switcherViewController=_switcherViewController - In the implementation block
-(void)reset;
-(void)setState:(long long)arg1 ;
-(long long)_touchInterfaceOrientation;
-(SBFluidSwitcherViewController *)switcherViewController;
-(void)setSwitcherViewController:(SBFluidSwitcherViewController *)arg1 ;
-(id)viewForTouchHistory;
@end
