/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol SBSwitcherLiveContentOverlay <NSObject>
@property (nonatomic,readonly) UIView * contentOverlayView; 
@optional
-(void)noteNeedsLayoutUpdateFor180DegreeRotation;

@required
-(UIView *)contentOverlayView;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
-(long long)rasterizationStyle;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2;

@end

