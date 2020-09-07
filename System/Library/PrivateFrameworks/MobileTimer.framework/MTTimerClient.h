/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTTimerClient <NSObject>
@required
-(void)timerFired:(id)arg1;
-(void)timersAdded:(id)arg1;
-(void)timersUpdated:(id)arg1;
-(void)timersRemoved:(id)arg1;
-(void)timerDismissed:(id)arg1;
-(void)nextTimerChanged:(id)arg1;

@end
