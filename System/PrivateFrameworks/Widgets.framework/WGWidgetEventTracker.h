/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateComponents, NSDate, NSMutableDictionary, PETDistributionEventTracker, PETScalarEventTracker;

@interface WGWidgetEventTracker : NSObject {

	NSDateComponents* _previousTodayViewAppearDateComponents;
	NSDate* _previousTodayViewAppearanceDate;
	NSMutableDictionary* _previousWidgetAppearanceDateByIdentifier;
	unsigned long long _location;
	PETDistributionEventTracker* _widgetLingerTracker;
	PETScalarEventTracker* _widgetShownTracker;
	PETScalarEventTracker* _widgetStatusTracker;
	PETDistributionEventTracker* _widgetListLingerTracker;
	PETScalarEventTracker* _widgetToggleContractTracker;
	PETScalarEventTracker* _widgetToggleExpandTracker;
	PETScalarEventTracker* _widgetListShownTracker;
	PETScalarEventTracker* _widgetToggleContract;
	PETScalarEventTracker* _widgetToggleExpand;
	BOOL _authenticated;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)widgetViewDidAppearWithWidget:(id)arg1 ;
-(void)widgetViewDidDisappearWithWidget:(id)arg1 ;
-(void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2 ;
-(void)widget:(id)arg1 didAppearInMode:(long long)arg2 ;
-(void)widget:(id)arg1 didDisappearInMode:(long long)arg2 ;
-(void)_lockedStateDidChange;
-(void)_trackWidgetStatusEventForWidget:(id)arg1 withStatus:(BOOL)arg2 ;
-(void)_trackWidgetListShownEventWithLocation:(unsigned long long)arg1 authenticated:(BOOL)arg2 ;
-(void)_trackWidgetListLingerEventWithLocation:(unsigned long long)arg1 authenticated:(BOOL)arg2 duration:(double)arg3 ;
-(void)_trackWidgetShownEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(BOOL)arg3 mode:(long long)arg4 ;
-(void)_trackWidgetLingerEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(BOOL)arg3 mode:(long long)arg4 duration:(double)arg5 ;
-(void)_trackWidgetContractEventForWidget:(id)arg1 ;
-(void)_trackWidgetExpandEventForWidget:(id)arg1 ;
-(id)_widgetProperty;
-(id)_locationProperty;
-(id)_authenticationProperty;
-(id)_modeProperty;
-(id)_widgetLingerTracker;
-(id)_widgetShownTracker;
-(id)_statusProperty;
-(id)_widgetStatusTracker;
-(id)_widgetToggleContractTracker;
-(id)widgetToggleExpandTracker;
-(id)_widgetListLingerTracker;
-(id)widgetListShownTracker;
-(void)widgetListDidAppearAtLocation:(unsigned long long)arg1 withEnabledWidgets:(id)arg2 disabledWidgets:(id)arg3 ;
-(void)widgetListDidDisappearAtLocation:(unsigned long long)arg1 ;
@end
