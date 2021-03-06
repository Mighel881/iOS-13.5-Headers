/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SKUIShelfPageSectionConfiguration, SKUIShelfPageComponent;


@protocol SKUIShelfPageSection <NSObject>
@property (nonatomic,readonly) SKUIShelfPageSectionConfiguration * configuration; 
@property (nonatomic,readonly) SKUIShelfPageComponent * pageComponent; 
@required
-(SKUIShelfPageSectionConfiguration *)configuration;
-(id)initWithPageComponent:(id)arg1 configuration:(id)arg2;
-(id)initWithPageComponent:(id)arg1;
-(SKUIShelfPageComponent *)pageComponent;

@end

