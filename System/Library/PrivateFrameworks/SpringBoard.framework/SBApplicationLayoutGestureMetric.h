/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class PETScalarEventTracker, NSString;

@interface SBApplicationLayoutGestureMetric : NSObject <SBFAnalyticsBackendEventHandling> {

	PETScalarEventTracker* _pinGestureCompletionTracker;
	PETScalarEventTracker* _unpinGestureCompletionTracker;
	PETScalarEventTracker* _movePIPGestureCompletionTracker;
	PETScalarEventTracker* _moveSideGestureCompletionTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(unsigned long long)_moveActionForInitialFloatingConfig:(long long)arg1 finalConfig:(long long)arg2 ;
-(unsigned long long)_moveActionForInitialSpaceConfig:(long long)arg1 finalConfig:(long long)arg2 ;
@end
