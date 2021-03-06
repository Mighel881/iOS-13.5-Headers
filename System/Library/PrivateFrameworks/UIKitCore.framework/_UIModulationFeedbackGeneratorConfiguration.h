/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedback;

@interface _UIModulationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	_UIFeedback*<_UIFeedbackContinuousPlayable> _feedback;
	/*^block*/id _feedbackUpdateBlock;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,copy) id feedbackUpdateBlock;                                              //@synthesize feedbackUpdateBlock=_feedbackUpdateBlock - In the implementation block
+(id)defaultConfiguration;
+(id)sliderConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)feedback;
-(void)setFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(void)setFeedbackUpdateBlock:(id)arg1 ;
-(id)feedbackUpdateBlock;
@end

