/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProxy.h>

@class SBDashBoardHostedAppViewController;

@interface _SBDashBoardHostedAppStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy {

	SBDashBoardHostedAppViewController* _hostedAppVCBackReference;

}

@property (assign,nonatomic,__weak) SBDashBoardHostedAppViewController * hostedAppVCBackReference;              //@synthesize hostedAppVCBackReference=_hostedAppVCBackReference - In the implementation block
-(double)_statusBarAlpha;
-(BOOL)_suppressInheritedPartStyles;
-(long long)_fallbackInterfaceOrientation;
-(void)setHostedAppVCBackReference:(SBDashBoardHostedAppViewController *)arg1 ;
-(SBDashBoardHostedAppViewController *)hostedAppVCBackReference;
@end

