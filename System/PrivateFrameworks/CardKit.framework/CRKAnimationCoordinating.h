/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol CRKAnimationCoordinating <NSObject>
@property (getter=isAnimated,nonatomic,readonly) BOOL animated; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,copy) id initialSetup; 
@property (nonatomic,copy) id finalSetup; 
@property (nonatomic,copy) id animations; 
@property (nonatomic,copy) id completion; 
@property (assign,nonatomic) double duration; 
@required
-(double)duration;
-(id)animations;
-(void)setAnimations:(/*^block*/id)arg1;
-(void)setCompletion:(/*^block*/id)arg1;
-(id)completion;
-(void)setDuration:(double)arg1;
-(UIView *)containerView;
-(BOOL)isAnimated;
-(id)initialSetup;
-(void)setInitialSetup:(/*^block*/id)arg1;
-(id)finalSetup;
-(void)setFinalSetup:(/*^block*/id)arg1;

@end

