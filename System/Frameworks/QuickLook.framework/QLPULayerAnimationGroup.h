/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPUTimedAnimationGroup.h>

@class CALayer;

@interface QLPULayerAnimationGroup : QLPUTimedAnimationGroup {

	BOOL _areTrackedAnimationsPaused;
	CALayer* _referenceLayer;

}

@property (nonatomic,readonly) CALayer * referenceLayer;              //@synthesize referenceLayer=_referenceLayer - In the implementation block
-(id)init;
-(double)currentTime;
-(id)initWithReferenceLayer:(id)arg1 ;
-(CALayer *)referenceLayer;
-(void)updateAnimations;
@end
