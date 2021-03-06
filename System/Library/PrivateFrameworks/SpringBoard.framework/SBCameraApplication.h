/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBApplication.h>

@interface SBCameraApplication : SBApplication {

	BOOL _hasPreHeatInFlight;

}

@property (assign,nonatomic) BOOL hasPreHeatInFlight;              //@synthesize hasPreHeatInFlight=_hasPreHeatInFlight - In the implementation block
-(BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3 ;
-(void)preHeatForUserLaunchIfNecessaryWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2 ;
-(void)_cancelPreheatForUserLaunchIfNecessary;
-(BOOL)hasPreHeatInFlight;
-(void)setHasPreHeatInFlight:(BOOL)arg1 ;
@end

