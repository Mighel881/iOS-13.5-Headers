/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWStillImageProcessorController.h>

@class NSMutableArray, BWDeferredProcessorRequest, FigStateMachine;

@interface BWDeferredProcessorController : BWStillImageProcessorController {

	NSMutableArray* _processorRequests;
	BWDeferredProcessorRequest* _currentRequest;
	FigStateMachine* _stateMachine;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(void)_process;
-(void)cancelProcessing;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(void)inputReadyForProcessing:(id)arg1 ;
@end

