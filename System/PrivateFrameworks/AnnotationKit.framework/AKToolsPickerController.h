/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AKController, UINavigationController, UIViewController;

@interface AKToolsPickerController : NSObject {

	AKController* _controller;
	UINavigationController* _navController;
	UIViewController* _toolsListController;

}

@property (nonatomic,retain) UINavigationController * navController;              //@synthesize navController=_navController - In the implementation block
@property (nonatomic,retain) UIViewController * toolsListController;              //@synthesize toolsListController=_toolsListController - In the implementation block
@property (__weak) AKController * controller;                                     //@synthesize controller=_controller - In the implementation block
-(UINavigationController *)navController;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)setToolsListController:(UIViewController *)arg1 ;
-(void)setNavController:(UINavigationController *)arg1 ;
-(UIViewController *)toolsListController;
@end

