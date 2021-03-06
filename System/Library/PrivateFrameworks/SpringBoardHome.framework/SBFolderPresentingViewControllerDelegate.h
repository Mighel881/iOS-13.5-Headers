/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFolderPresentingViewControllerDelegate <NSObject>
@optional
-(id)folderPresentationController:(id)arg1 animationControllerForTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 animated:(BOOL)arg4;
-(id)folderPresentationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
-(void)folderPresentationController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id)arg4;
-(double)statusBarHeightForFolderPresentationController:(id)arg1;
-(double)minimumHomeScreenScaleForFolderPresentationController:(id)arg1;
-(id)folderPresentationController:(id)arg1 sourceViewForPresentingViewController:(id)arg2;

@end

