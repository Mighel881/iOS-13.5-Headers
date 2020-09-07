/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKThreadDispatcher.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher {

	NSObject*<OS_dispatch_queue> _queue;
	int _suspendCount;

}

@property (getter=isSuspended,readonly) BOOL suspended; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
+(id)sharedLowPriorityDispatcher;
-(id)init;
-(unsigned long long)retainCount;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resume;
-(BOOL)isSuspended;
-(void)suspend;
-(id)p_dispatchQueue;
@end
