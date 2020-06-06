/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSPolicy.h>

@class CSPolicy;

@interface CSSelfTriggerDetectorEnabledPolicyIOS : CSPolicy {

	CSPolicy* _voiceTriggerEnabledPolicy;

}

@property (nonatomic,retain) CSPolicy * voiceTriggerEnabledPolicy;              //@synthesize voiceTriggerEnabledPolicy=_voiceTriggerEnabledPolicy - In the implementation block
-(id)init;
-(void)_subscribeEventMonitors;
-(void)_addSelfTriggerDetectorEnabledConditions;
-(CSPolicy *)voiceTriggerEnabledPolicy;
-(void)setVoiceTriggerEnabledPolicy:(CSPolicy *)arg1 ;
@end
