/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACHAchievementStoreObserving <NSObject>
@optional
-(void)achievementStoreDidFinishInitialFetch:(id)arg1;

@required
-(void)achievementStore:(id)arg1 didAddAchievements:(id)arg2;
-(void)achievementStore:(id)arg1 didUpdateAchievements:(id)arg2;
-(void)achievementStore:(id)arg1 didRemoveAchievements:(id)arg2;

@end

