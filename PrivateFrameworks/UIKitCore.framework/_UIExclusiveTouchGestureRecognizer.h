/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface _UIExclusiveTouchGestureRecognizer : UIGestureRecognizer {

	BOOL _achievedMaximumAbsoluteAccumulatedMovement;
	CGPoint _maximumAbsoluteAccumulatedMovement;
	CGPoint _accumulatedMovement;

}

@property (assign,nonatomic,__weak) id<_UIExclusiveTouchGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic) CGPoint maximumAbsoluteAccumulatedMovement;                                  //@synthesize maximumAbsoluteAccumulatedMovement=_maximumAbsoluteAccumulatedMovement - In the implementation block
@property (nonatomic,readonly) BOOL achievedMaximumAbsoluteAccumulatedMovement;                           //@synthesize achievedMaximumAbsoluteAccumulatedMovement=_achievedMaximumAbsoluteAccumulatedMovement - In the implementation block
@property (nonatomic,readonly) CGPoint accumulatedMovement;                                               //@synthesize accumulatedMovement=_accumulatedMovement - In the implementation block
-(id)description;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)maximumAbsoluteAccumulatedMovement;
-(void)setMaximumAbsoluteAccumulatedMovement:(CGPoint)arg1 ;
-(BOOL)achievedMaximumAbsoluteAccumulatedMovement;
-(CGPoint)accumulatedMovement;
@end
