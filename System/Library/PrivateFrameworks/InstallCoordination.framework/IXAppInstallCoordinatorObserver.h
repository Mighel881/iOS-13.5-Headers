/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IXAppInstallCoordinatorObserver <NSObject>
@optional
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2;
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1;
-(void)coordinatorShouldPrioritize:(id)arg1;
-(void)coordinatorShouldResume:(id)arg1;
-(void)coordinatorShouldPause:(id)arg1;
-(void)promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;
-(void)coordinator:(id)arg1 configuredPromisePromiseDidBeginFulfillment:(unsigned long long)arg2;
-(void)coordinator:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
-(void)coordinatorShouldBeginRestoringUserData:(id)arg1;
-(void)coordinatorDidInstallPlaceholder:(id)arg1;

@end

