/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUICASpringAnimationParameters.h>

@interface CCUIMutableCASpringAnimationParameters : CCUICASpringAnimationParameters

@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double stiffness; 
@property (assign,nonatomic) double damping; 
@property (nonatomic,copy) id<CCUIAnimationTimingFunctionDescription> timingFunction; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setTimingFunction:(id<CCUIAnimationTimingFunctionDescription>)arg1 ;
@end

