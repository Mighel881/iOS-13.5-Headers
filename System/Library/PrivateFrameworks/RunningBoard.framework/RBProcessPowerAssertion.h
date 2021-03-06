/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RBPowerAssertion.h>

@class RBProcessState, RBProcess;

@interface RBProcessPowerAssertion : RBPowerAssertion {

	RBProcessState* _state;
	RBProcess* _process;

}

@property (nonatomic,readonly) RBProcess * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,copy) RBProcessState * state;               //@synthesize state=_state - In the implementation block
-(RBProcessState *)state;
-(void)setState:(RBProcessState *)arg1 ;
-(RBProcess *)process;
-(id)initWithProcess:(id)arg1 ;
-(id)_preventIdleSleepIdentifiers;
-(int)_targetPid;
@end

