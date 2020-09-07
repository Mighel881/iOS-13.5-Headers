/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDContentAnimationTiming.h>

@class NSString;

@interface TSDContentAnimation : NSObject <TSDContentAnimationTiming>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animation;
-(void)i_applyToLayer:(id)arg1 withTransformBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)i_canProduceAnimation;
-(id)i_endLocation;
-(id)i_animationWithTransformBlock:(/*^block*/id)arg1 ;
@end
