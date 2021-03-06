/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIApplicationRouter : NSObject
+(void)dismissPresentedViewController;
+(void)_dismissPresentedViewControllerWithCompletion:(/*^block*/id)arg1 ;
+(id)currentNavigationController;
+(BOOL)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id*)arg4 ;
+(BOOL)handleAccountSettingsEvent:(id)arg1 urlString:(id)arg2 amsBagKey:(id)arg3 useAMSWebView:(BOOL)arg4 ;
+(id)topPresentedViewController;
+(id)_eventDataSourceForEvent:(id)arg1 routerDataSource:(id)arg2 ;
+(id)eventDataSourceForEvent:(id)arg1 viewElement:(id)arg2 ;
+(BOOL)_handleEvent:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 viewElement:(id)arg4 eventDataSource:(id)arg5 extraInfo:(id*)arg6 ;
+(id)topMostVisibleViewController;
+(void)_performForType:(long long)arg1 targetResponder:(id)arg2 appContext:(id)arg3 viewElement:(id)arg4 eventDataSource:(id)arg5 ;
+(BOOL)_handleDocumentDataSource:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 viewElement:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_handleAccountSettingsPresentationWithViewController:(id)arg1 shouldEmbedInNavController:(BOOL)arg2 ;
+(void)_amsBagURLForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)_viewControllerWithIdentifier:(id)arg1 ;
+(void)dismissOrPopViewControllerWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)dismissOrPopLastViewControllerWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)handleEvent:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 routerDataSource:(id)arg4 extraInfo:(id*)arg5 ;
@end

