/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol SXViewControllerPresenting <NSObject>
@property (nonatomic,readonly) UIViewController * controller; 
@required
-(UIViewController *)controller;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4;
-(void)popOrDismissViewControllerAnimated:(BOOL)arg1;

@end
