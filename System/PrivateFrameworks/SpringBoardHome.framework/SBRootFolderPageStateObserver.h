/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBRootFolderPageStateObserver
@required
-(void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;
-(void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3;
-(void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(BOOL)arg3;
-(void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(BOOL)arg4;

@end
