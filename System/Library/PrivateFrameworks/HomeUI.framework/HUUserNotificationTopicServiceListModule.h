/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>

@class HMHome, HFUserNotificationServiceTopic, HFTransformItemProvider;

@interface HUUserNotificationTopicServiceListModule : HFItemModule {

	HMHome* _home;
	HFUserNotificationServiceTopic* _topic;
	HFTransformItemProvider* _transformServiceItemProvider;
	HFTransformItemProvider* _transformCameraItemProvider;

}

@property (nonatomic,readonly) HFTransformItemProvider * transformServiceItemProvider;              //@synthesize transformServiceItemProvider=_transformServiceItemProvider - In the implementation block
@property (nonatomic,readonly) HFTransformItemProvider * transformCameraItemProvider;               //@synthesize transformCameraItemProvider=_transformCameraItemProvider - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFUserNotificationServiceTopic * topic;                              //@synthesize topic=_topic - In the implementation block
+(id)_createTransformItemForItem:(id)arg1 notificationSettingsProvider:(id)arg2 ;
-(HFUserNotificationServiceTopic *)topic;
-(HMHome *)home;
-(id)itemProviders;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)_buildItemProviders;
-(id)initWithItemUpdater:(id)arg1 home:(id)arg2 topic:(id)arg3 ;
-(HFTransformItemProvider *)transformServiceItemProvider;
-(HFTransformItemProvider *)transformCameraItemProvider;
-(id)serviceLikeItemForItem:(id)arg1 ;
@end

