/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIFeedbackEngine.h>
#import <UIKitCore/_UIFeedbackPlayer_Internal.h>

@interface _UIFeedbackDummyEngine : _UIFeedbackEngine <_UIFeedbackPlayer_Internal> {

	/*^block*/id _invalidationBlock;

}

@property (nonatomic,copy) id invalidationBlock;              //@synthesize invalidationBlock=_invalidationBlock - In the implementation block
+(id)sharedEngine;
+(BOOL)_supportsPlayingIndividualFeedback:(id)arg1 ;
-(void)_stopFeedback:(id)arg1 ;
-(id)_stats_key;
-(void)_updateValueForParameters:(id)arg1 withKey:(id)arg2 ;
-(void)setInvalidationBlock:(id)arg1 ;
-(void)_internal_activateUnderlyingPlayerWithCompletion:(/*^block*/id)arg1 ;
-(void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3 ;
-(void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2 ;
-(void)_playFeedback:(id)arg1 atTime:(double)arg2 ;
-(id)invalidationBlock;
@end
