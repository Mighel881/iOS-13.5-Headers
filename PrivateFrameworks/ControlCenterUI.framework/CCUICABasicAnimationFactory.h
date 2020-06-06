/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCUICAAnimationFactory.h>

@class CCUICABasicAnimationParameters, NSString;

@interface CCUICABasicAnimationFactory : NSObject <CCUICAAnimationFactory> {

	CCUICABasicAnimationParameters* _parameters;
	double _speed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double animationDuration; 
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(double)animationDuration;
-(id)_animation;
-(id)initWithParameters:(id)arg1 speed:(double)arg2 ;
@end
