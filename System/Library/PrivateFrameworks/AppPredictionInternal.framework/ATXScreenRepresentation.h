/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableOrderedSet, NSObject;

@interface ATXScreenRepresentation : NSObject {

	NSMutableOrderedSet* _scr;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)getAllObjects;
-(unsigned long long)findPosition:(id)arg1 ;
@end

