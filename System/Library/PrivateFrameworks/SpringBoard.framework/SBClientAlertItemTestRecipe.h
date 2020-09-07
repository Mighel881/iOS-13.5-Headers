/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class SBAlertItem, NSString;

@interface SBClientAlertItemTestRecipe : NSObject <SBTestRecipe> {

	SBAlertItem* _item;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)_nextAlertItemToTest;
-(void)_dismissCurrentItem;
-(id)_mapsApp;
-(id)_anySUDescriptor;
-(id)_chatCarrierSMSAlert;
-(id)_chatMMSDelayedDownloadAlert;
-(id)_chatMMSInformationMissingAlert;
-(id)_mapsThermalAlert;
-(id)_wifiBTSSPAlert;
-(id)_wifiDontAskAlert;
-(id)_wifiErrorAlert;
-(id)_wifiIsEnterpriseAlert;
-(id)_wifiPasswordAlert;
-(id)_wifiTrustAlert;
-(void)educationAlertWasDeactivated:(id)arg1 ;
-(id)_currentAssistantLanguage;
@end
