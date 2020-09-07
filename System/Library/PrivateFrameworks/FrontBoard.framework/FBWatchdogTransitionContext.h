/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol FBProcessWatchdogProviding;
@interface FBWatchdogTransitionContext : NSObject <NSCopying, NSMutableCopying> {

	long long _watchdogBehavior;
	id<FBProcessWatchdogProviding> _watchdogProvider;
	BOOL _runIndependently;

}

@property (assign,nonatomic) BOOL runIndependently;                                        //@synthesize runIndependently=_runIndependently - In the implementation block
@property (assign,nonatomic) long long watchdogBehavior;                                   //@synthesize watchdogBehavior=_watchdogBehavior - In the implementation block
@property (nonatomic,retain) id<FBProcessWatchdogProviding> watchdogProvider;              //@synthesize watchdogProvider=_watchdogProvider - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id<FBProcessWatchdogProviding>)watchdogProvider;
-(void)setWatchdogProvider:(id<FBProcessWatchdogProviding>)arg1 ;
-(long long)watchdogBehavior;
-(void)setWatchdogBehavior:(long long)arg1 ;
-(BOOL)runIndependently;
-(void)setRunIndependently:(BOOL)arg1 ;
@end
