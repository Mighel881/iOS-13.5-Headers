/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTManagedConfiguration.h>

@interface RTManagedConfiguration_Embedded : RTManagedConfiguration
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)effectiveBoolValueForSetting:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isFindMyCarAllowed;
-(BOOL)isDiagnosticsAndUsageAllowed;
-(id)stringToManagedConfigurationKey:(id)arg1 ;
@end

