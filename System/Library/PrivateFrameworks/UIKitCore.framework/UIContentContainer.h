/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIContentContainer <NSObject>
@property (nonatomic,readonly) CGSize preferredContentSize; 
@required
-(CGSize)preferredContentSize;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
-(CGSize*)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;

@end

