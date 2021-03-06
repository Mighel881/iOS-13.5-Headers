/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeSettingsUI/STGroupSpecifierProvider.h>

@class STUsageItem, PSSpecifier;

@interface STDrillInItemInfoGroupSpecifierProvider : STGroupSpecifierProvider {

	STUsageItem* _usageItem;
	PSSpecifier* _appIconSpecifier;
	PSSpecifier* _ageRatingSpecifier;
	PSSpecifier* _developerSpecifier;

}

@property (nonatomic,readonly) STUsageItem * usageItem;                       //@synthesize usageItem=_usageItem - In the implementation block
@property (nonatomic,readonly) PSSpecifier * appIconSpecifier;                //@synthesize appIconSpecifier=_appIconSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * ageRatingSpecifier;              //@synthesize ageRatingSpecifier=_ageRatingSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * developerSpecifier;              //@synthesize developerSpecifier=_developerSpecifier - In the implementation block
-(void)_didFetchAppInfo:(id)arg1 ;
-(STUsageItem *)usageItem;
-(id)initWithUsageItem:(id)arg1 ;
-(id)usageItem:(id)arg1 ;
-(id)category:(id)arg1 ;
-(id)ageRating:(id)arg1 ;
-(id)developer:(id)arg1 ;
-(PSSpecifier *)ageRatingSpecifier;
-(PSSpecifier *)developerSpecifier;
-(PSSpecifier *)appIconSpecifier;
@end

