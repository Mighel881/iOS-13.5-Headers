/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _HKDaemonPreferences : NSObject
+(BOOL)setValue:(id)arg1 forKey:(id)arg2 ;
+(id)valueForKey:(id)arg1 ;
+(BOOL)_boolValueForKey:(id)arg1 ;
+(BOOL)usingDemoDataDatabase;
+(BOOL)isGenerateDemoDataSet;
+(BOOL)isStoreDemoModeSet;
+(BOOL)_setPreferenceValue:(void*)arg1 forKey:(id)arg2 ;
+(id)_safePreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2 ;
+(BOOL)shouldGenerateDemoData;
+(void)synchronizePreferencesWithWatch:(id)arg1 ;
@end

