/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBSClientProtocol
@required
-(oneway void)async_didChangeInheritances:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)async_willExpireAssertionsSoon;
-(oneway void)async_assertionWillInvalidate:(id)arg1;
-(oneway void)async_assertionsDidInvalidate:(id)arg1 withError:(id)arg2;
-(oneway void)async_observedProcessStatesDidChange:(id)arg1 completion:(/*^block*/id)arg2;
-(oneway void)async_processDidExit:(id)arg1 withContext:(id)arg2;

@end

