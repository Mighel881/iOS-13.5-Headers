/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneMonitorDelegate <NSObject>
@optional
-(void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3;
-(void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2;
-(void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3;
-(void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2;
-(void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2;

@end

