/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIBezierPath;


@protocol UIDynamicItem <NSObject>
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@optional
-(unsigned long long)collisionBoundsType;
-(UIBezierPath *)collisionBoundingPath;

@required
-(CGAffineTransform)transform;
-(CGRect)bounds;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1;
-(void)setTransform:(CGAffineTransform)arg1;

@end

