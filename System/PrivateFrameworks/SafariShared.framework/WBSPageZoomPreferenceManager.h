/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSPerSitePreferenceManager.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerDefaultsDelegate.h>
#import <libobjc.A.dylib/WBSPerSitePreferenceManagerStorageDelegate.h>

@class WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;

@interface WBSPageZoomPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {

	WBSPerSitePreferencesSQLiteStore* _perSitePreferencesStore;
	WBSPerSitePreference* _pageZoomPreference;

}

@property (nonatomic,readonly) WBSPerSitePreference * pageZoomPreference;                               //@synthesize pageZoomPreference=_pageZoomPreference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) WBSPerSitePreferencesSQLiteStore * perSitePreferencesStore; 
+(id)pageZoomFactors;
-(id)preferences;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(WBSPerSitePreference *)pageZoomPreference;
-(WBSPerSitePreferencesSQLiteStore *)perSitePreferencesStore;
-(long long)preferencesStoreKeyForPreference:(id)arg1 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg1 ;
-(void)didUpdatePreference:(id)arg1 toValue:(id)arg2 forDomain:(id)arg3 ;
-(id)valuesForPreference:(id)arg1 ;
-(id)localizedStringForValue:(id)arg1 inPreference:(id)arg2 ;
-(void)getPageZoomFactorForURL:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)zoomInOnURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)zoomOutOnURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetZoomLevelOnURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAvailableActionsForURL:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removePageZoomPreferencesForHostnames:(id)arg1 ;
-(void)removeAllPageZoomPreferences;
-(double)_pageZoomStepToZoomFactor:(long long)arg1 ;
-(void)_getDefaultZoomStep:(/*^block*/id)arg1 ;
-(void)_getZoomStepForDomain:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_incrementOrDecreaseZoomStep:(BOOL)arg1 forURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_canChangePageZoom:(BOOL)arg1 fromStep:(long long)arg2 ;
@end
