/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewControllerPresenting.h>
#import <libobjc.A.dylib/SWViewControllerPresentingManager.h>

@class UIViewController, NSString;

@interface SXViewControllerPresentingManager : NSObject <SXViewControllerPresenting, SWViewControllerPresentingManager> {

	UIViewController* _presentingViewController;

}

@property (nonatomic,readonly) UIViewController * controller; 
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentingViewController;
-(UIViewController *)controller;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(void)popOrDismissViewControllerAnimated:(BOOL)arg1 ;
@end
