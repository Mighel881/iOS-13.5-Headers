/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUCommandCenterType
@required
-(void)removeContextProvider:(id)arg1;
-(void)executeCommand:(id)arg1;
-(BOOL)canExecuteCommand:(id)arg1;
-(void)addContextProvider:(id)arg1 forCommand:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeContextProvider:(id)arg1 forCommand:(id)arg2;
-(long long)stateForCommand:(id)arg1;

@end

