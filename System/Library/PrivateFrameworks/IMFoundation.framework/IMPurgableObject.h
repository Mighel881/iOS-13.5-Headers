/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMPurgableObject : NSObject {

	id _instanceObject;
	/*^block*/id _setupBlock;
	/*^block*/id _cleanupBlock;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)instance;
-(void)_cleanupInstance;
-(void)_setupInstance;
-(id)initWithSetupBlock:(/*^block*/id)arg1 cleanupBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)_receivedMemoryWarning:(id)arg1 ;
@end

