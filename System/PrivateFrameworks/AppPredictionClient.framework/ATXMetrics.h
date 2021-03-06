/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PETScalarEventTracker;

@interface ATXMetrics : NSObject {

	NSObject*<OS_dispatch_queue> _loggingQueue;
	PETScalarEventTracker* _viewTracker;
	PETScalarEventTracker* _executeTracker;
	PETScalarEventTracker* _errorTracker;

}
+(id)_sharedInstance;
+(void)logError:(long long)arg1 inContext:(long long)arg2 ;
+(void)logActionViewForType:(long long)arg1 inContext:(long long)arg2 ;
+(void)logActionExecuteForType:(long long)arg1 inContext:(long long)arg2 ;
-(id)init;
-(void)_logError:(long long)arg1 inContext:(long long)arg2 ;
-(void)_logActionViewForType:(long long)arg1 inContext:(long long)arg2 ;
-(void)_logActionExecuteForType:(long long)arg1 inContext:(long long)arg2 ;
@end

