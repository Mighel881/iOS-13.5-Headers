/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NTPBWidgetEngagement;

@interface TSAnalyticsReferral : NSObject {

	 userActivityType;
	 creativeID;
	 campaignID;
	 campaignType;
	 referringApplication;
	 referringURL;
	 widgetModeGroupID;
	 widgetEngagement;
	 appOpenedByUserActivity;
	 appSessionStartMethod;
	 appSessionStartNotificationType;

}

@property (readonly,nonatomic) NSString * userActivityType; 
@property (readonly,nonatomic) NSString * creativeID; 
@property (readonly,nonatomic) NSString * campaignID; 
@property (readonly,nonatomic) NSString * campaignType; 
@property (readonly,nonatomic) NSString * referringApplication; 
@property (readonly,nonatomic) NSString * referringURL; 
@property (readonly,nonatomic) NSString * widgetModeGroupID; 
@property (readonly,nonatomic) NTPBWidgetEngagement * widgetEngagement; 
@property (readonly,nonatomic) BOOL appOpenedByUserActivity; 
@property (readonly,nonatomic) long long appSessionStartMethod; 
@property (readonly,nonatomic) long long appSessionStartNotificationType; 
-(id)init;
-(NSString *)userActivityType;
-(NSString *)referringURL;
-(NSString *)campaignType;
-(NTPBWidgetEngagement *)widgetEngagement;
-(NSString *)creativeID;
-(NSString *)campaignID;
-(NSString *)referringApplication;
-(NSString *)widgetModeGroupID;
-(BOOL)appOpenedByUserActivity;
-(long long)appSessionStartMethod;
-(long long)appSessionStartNotificationType;
-(id)initWithUserActivityType:(id)arg1 creativeID:(id)arg2 campaignID:(id)arg3 campaignType:(id)arg4 referringApplication:(id)arg5 referringURL:(id)arg6 widgetModeGroupID:(id)arg7 widgetEngagement:(id)arg8 appOpenedByUserActivity:(BOOL)arg9 appSessionStartMethod:(long long)arg10 appSessionStartNotificationType:(long long)arg11 ;
@end

