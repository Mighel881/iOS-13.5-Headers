/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SFLinkPreviewHandler <BCSActionDelegate>
@optional
-(BOOL)isAutomationEnabledForLinkPreviewHelper:(id)arg1;
-(void)linkPreviewHelperWillOpenUniveralLinkLocally:(id)arg1;
-(BOOL)isPrivateBrowsingEnabledForPreviewHelper:(id)arg1;
-(void)linkPreviewHelper:(id)arg1 addURLToReadingList:(id)arg2;
-(void)linkPreviewHelperWillBeginDownload:(id)arg1;

@required
-(void)linkPreviewHelper:(id)arg1 commitPreviewViewControllerForAction:(long long)arg2;
-(void)linkPreviewHelper:(id)arg1 didProduceNavigationIntent:(id)arg2 forAction:(long long)arg3;
-(id)linkPreviewHelper:(id)arg1 previewViewControllerForURL:(id)arg2;
-(id)linkPreviewHelper:(id)arg1 resultOfLoadingURL:(id)arg2;
-(void)linkPreviewHelper:(id)arg1 redirectToExternalNavigationResult:(id)arg2;
-(BOOL)linkPreviewHelper:(id)arg1 supportsAction:(long long)arg2 forURL:(id)arg3;

@end

