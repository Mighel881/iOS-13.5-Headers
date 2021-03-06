/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _PASQueueLock : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id _guardedData;

}
-(void)runWithLockAcquired:(/*^block*/id)arg1 ;
-(id)guardedDataAssertingLockContext;
-(id)unsafeGuardedData;
-(id)initWithGuardedData:(id)arg1 serialQueue:(id)arg2 ;
-(void)runAsyncWithLockAcquired:(/*^block*/id)arg1 ;
@end

