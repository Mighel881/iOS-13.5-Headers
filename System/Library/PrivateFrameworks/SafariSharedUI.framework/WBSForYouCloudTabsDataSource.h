/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/WBSForYouRecommendationMediatorDataSource.h>

@protocol OS_dispatch_queue;
@class WBSCloudTabStore, NSObject;

@interface WBSForYouCloudTabsDataSource : WBSForYouRecommendationMediatorDataSource {

	WBSCloudTabStore* _tabsStore;
	NSObject*<OS_dispatch_queue> _internalQueue;

}
-(void)_createInternalQueueIfNecessary;
-(id)initWithTabStore:(id)arg1 ;
-(void)retrieveRecommendationsMatchingTopic:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

