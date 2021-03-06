/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPCancellable.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSMutableArray;

@interface FPDActionOperationQueue : NSObject <FPCancellable> {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _maxLength;
	NSMutableArray* _fifo;
	NSObject*<OS_dispatch_semaphore> _enqueueSema;
	NSObject*<OS_dispatch_semaphore> _dequeueSema;
	BOOL _finishedEnqueuing;
	BOOL _cancelled;

}
-(void)cancel;
-(id)dequeue;
-(void)enqueue:(id)arg1 ;
-(void)dumpStateTo:(id)arg1 ;
-(id)initWithMoveInfo:(id)arg1 ;
-(void)finishedEnqueuing;
@end

