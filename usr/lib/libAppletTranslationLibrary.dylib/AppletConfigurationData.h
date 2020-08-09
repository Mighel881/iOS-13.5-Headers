/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:02:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@class NSObject, NSUserDefaults, NSDictionary, NSMutableDictionary;

@interface AppletConfigurationData : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	NSUserDefaults* userDefaults;
	NSDictionary* config;
	NSMutableDictionary* pluginCache;
	unsigned long long maErrorCount;
	BOOL retryInProgress;
	double maMetadataQueryInterval;

}
+(void)init;
+(BOOL)setConfiguration:(id)arg1 ;
+(os_state_data_s*)dumpState;
+(id)getInstance;
+(id)getWuluSettings;
+(id)extraDebugScriptForModule:(id)arg1 ;
+(BOOL)isValidConfigData:(id)arg1 ;
+(id)getOverrideConfig;
+(id)getStaticConfig;
+(id)getConfig;
+(void)registerStateHandler;
+(id)pluginDecoderForMid:(id)arg1 ;
+(id)dataHash;
+(id)scriptForModule:(id)arg1 ;
+(id)plasticCardScriptForModule:(id)arg1 ;
+(id)getNFCSettings;
+(id)getExpressModeSettings;
+(id)getStaticNFCSettings;
+(id)getStaticWuluSettings;
+(id)getStaticExpressModeSettings;
-(id)init;
-(void)tsmScriptPerformed:(id)arg1 ;
-(void)queryMA;
-(void)maybeQueryMetadata;
-(void)queryMetadata;
-(id)optionsForInterval:(double)arg1 ;
-(void)retryWithBackoff:(/*^block*/id)arg1 ;
-(void)handleQueryResult:(long long)arg1 query:(id)arg2 ;
-(void)handleQuerySuccess:(id)arg1 ;
-(BOOL)isEligibleAsset:(id)arg1 ;
-(void)downloadAsset:(id)arg1 ;
-(void)handleAvailableAsset:(id)arg1 ;
-(id)pluginDecoderForMid:(id)arg1 depth:(int)arg2 ;
@end
