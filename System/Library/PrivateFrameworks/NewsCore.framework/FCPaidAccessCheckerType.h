/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCPaidAccessCheckerType
@property (nonatomic,readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider; 
@property (nonatomic,readonly) id<FCPurchaseProviderType> purchaseProvider; 
@required
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;
-(id<FCPurchaseProviderType>)purchaseProvider;
-(BOOL)canGetAccessToItemPaid:(BOOL)arg1 bundlePaid:(BOOL)arg2 channel:(id)arg3;
-(BOOL)canGetSubscriptionToChannel:(id)arg1;
-(BOOL)canGetBundleSubscriptionToChannel:(id)arg1;
-(BOOL)isPreparedForUse;

@end
