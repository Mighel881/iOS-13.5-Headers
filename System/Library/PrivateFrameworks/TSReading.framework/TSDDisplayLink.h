/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink;

@interface TSDDisplayLink : NSObject {

	CADisplayLink* _displayLink;
	/*^block*/id _tickBlock;
	/*^block*/id _completionBlock;
	double _startTime;
	double _lastTime;

}

@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double lastTime;               //@synthesize lastTime=_lastTime - In the implementation block
@property (nonatomic,copy) id tickBlock;                    //@synthesize tickBlock=_tickBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)dealloc;
-(void)start;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(double)startTime;
-(void)teardown;
-(void)setStartTime:(double)arg1 ;
-(double)lastTime;
-(void)setTickBlock:(id)arg1 ;
-(void)p_handleDisplayLink:(id)arg1 ;
-(id)tickBlock;
-(void)setLastTime:(double)arg1 ;
@end
