/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class STUsageDetailsViewModel, NSArray, NSString;


@protocol STUsageDetailsViewModelCoordinator <NSObject>
@property (nonatomic,readonly) STUsageDetailsViewModel * viewModel; 
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,copy) NSString * selectedDeviceIdentifier; 
@property (getter=isRefreshing,readonly) BOOL refreshing; 
@required
-(NSArray *)devices;
-(BOOL)isRefreshing;
-(STUsageDetailsViewModel *)viewModel;
-(void)startRefreshingUsageData;
-(void)stopRefreshingUsageData;
-(void)refreshUsageData;
-(NSString *)selectedDeviceIdentifier;
-(void)setSelectedDeviceIdentifier:(id)arg1;

@end

