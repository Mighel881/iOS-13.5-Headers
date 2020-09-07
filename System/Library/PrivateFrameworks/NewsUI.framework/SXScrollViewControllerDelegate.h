/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXScrollViewControllerDelegate <NSObject>
@optional
-(void)scrollViewControllerDidScroll:(id)arg1;
-(void)scrollViewControllerWillLayoutContent:(id)arg1;
-(void)scrollViewControllerDidLayoutContent:(id)arg1;
-(void)scrollViewController:(id)arg1 didApplyDocumentStyle:(id)arg2;
-(void)scrollViewController:(id)arg1 triggerAction:(id)arg2;
-(void)scrollViewControllerRequestsFullscreen:(id)arg1;
-(double)navigationBarHeightForScrollViewController:(id)arg1;
-(double)toolBarHeightForScrollViewController:(id)arg1;
-(void)scrollViewControllerDismissFullscreen:(id)arg1;
-(void)scrollViewControllerDidStopScrolling:(id)arg1;
-(void)scrollViewController:(id)arg1 enableNavigation:(BOOL)arg2;
-(BOOL)scrollViewController:(id)arg1 shouldOccludeAccessibilityElement:(id)arg2;
-(BOOL)accessibilityShouldScrollForScrollViewController:(id)arg1 defaultValue:(BOOL)arg2;
-(BOOL)accessibilityShouldScrollForScrollViewController:(id)arg1;

@end
