/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/STUIDateTimePickerCellDelegate.h>

@protocol STDeviceBedtimeListControllerDelegate, STRootViewModelCoordinator;
@class STDeviceBedtime, STUIUser, NSArray, PSSpecifier, NSString;

@interface STDeviceBedtimeListController : PSListController <STUIDateTimePickerCellDelegate> {

	BOOL _canAskForMoreTime;
	id<STDeviceBedtimeListControllerDelegate> _delegate;
	id<STRootViewModelCoordinator> _coordinator;
	STDeviceBedtime* _bedtime;
	STUIUser* _affectedUser;
	NSArray* _orderedWeekdayIndexes;
	NSArray* _orderedLocalizedWeekdayNames;
	PSSpecifier* _deviceBedtimeSpecifier;
	PSSpecifier* _informativeTextGroupSpecifier;
	PSSpecifier* _everyDaySpecifier;
	PSSpecifier* _customizeDaysSpecifier;
	PSSpecifier* _startTimeSpecifier;
	PSSpecifier* _endTimeSpecifier;
	PSSpecifier* _startTimePickerSpecifier;
	PSSpecifier* _endTimePickerSpecifier;
	NSArray* _weekdaySpecifiers;
	PSSpecifier* _selectedTimeSpecifier;
	PSSpecifier* _atBedtimeGroupSpecifier;
	PSSpecifier* _atBedtimeSpecifier;

}

@property (readonly) NSArray * orderedWeekdayIndexes;                                                //@synthesize orderedWeekdayIndexes=_orderedWeekdayIndexes - In the implementation block
@property (readonly) NSArray * orderedLocalizedWeekdayNames;                                         //@synthesize orderedLocalizedWeekdayNames=_orderedLocalizedWeekdayNames - In the implementation block
@property (nonatomic,retain) PSSpecifier * deviceBedtimeSpecifier;                                   //@synthesize deviceBedtimeSpecifier=_deviceBedtimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * informativeTextGroupSpecifier;                            //@synthesize informativeTextGroupSpecifier=_informativeTextGroupSpecifier - In the implementation block
@property (retain) PSSpecifier * everyDaySpecifier;                                                  //@synthesize everyDaySpecifier=_everyDaySpecifier - In the implementation block
@property (retain) PSSpecifier * customizeDaysSpecifier;                                             //@synthesize customizeDaysSpecifier=_customizeDaysSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * startTimeSpecifier;                                       //@synthesize startTimeSpecifier=_startTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * endTimeSpecifier;                                         //@synthesize endTimeSpecifier=_endTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * startTimePickerSpecifier;                                 //@synthesize startTimePickerSpecifier=_startTimePickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * endTimePickerSpecifier;                                   //@synthesize endTimePickerSpecifier=_endTimePickerSpecifier - In the implementation block
@property (retain) NSArray * weekdaySpecifiers;                                                      //@synthesize weekdaySpecifiers=_weekdaySpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * selectedTimeSpecifier;                                    //@synthesize selectedTimeSpecifier=_selectedTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * atBedtimeGroupSpecifier;                                  //@synthesize atBedtimeGroupSpecifier=_atBedtimeGroupSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * atBedtimeSpecifier;                                       //@synthesize atBedtimeSpecifier=_atBedtimeSpecifier - In the implementation block
@property (readonly) BOOL shouldShowCompatibilityAlert; 
@property (assign,nonatomic,__weak) id<STDeviceBedtimeListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<STRootViewModelCoordinator> coordinator;                             //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,copy) STDeviceBedtime * bedtime;                                                //@synthesize bedtime=_bedtime - In the implementation block
@property (nonatomic,retain) STUIUser * affectedUser;                                                //@synthesize affectedUser=_affectedUser - In the implementation block
@property (assign,nonatomic) BOOL canAskForMoreTime;                                                 //@synthesize canAskForMoreTime=_canAskForMoreTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<STDeviceBedtimeListControllerDelegate>)delegate;
-(void)setDelegate:(id<STDeviceBedtimeListControllerDelegate>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willResignActive;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setCoordinator:(id<STRootViewModelCoordinator>)arg1 ;
-(id<STRootViewModelCoordinator>)coordinator;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
-(void)datePickerChanged:(id)arg1 ;
-(id)datePickerForSpecifier:(id)arg1 ;
-(void)setSelectedTimeSpecifier:(PSSpecifier *)arg1 ;
-(id)timeFooterText;
-(void)setCustomizeDaysSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)customizeDaysSpecifier;
-(PSSpecifier *)selectedTimeSpecifier;
-(BOOL)shouldShowCompatibilityAlert;
-(void)setDeviceBedtimeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)deviceBedtimeSpecifier;
-(STDeviceBedtime *)bedtime;
-(void)setBedtime:(STDeviceBedtime *)arg1 ;
-(void)setAffectedUser:(STUIUser *)arg1 ;
-(void)setCanAskForMoreTime:(BOOL)arg1 ;
-(void)_didEndEditingDailySchedule:(id)arg1 ;
-(PSSpecifier *)startTimeSpecifier;
-(PSSpecifier *)startTimePickerSpecifier;
-(PSSpecifier *)endTimeSpecifier;
-(PSSpecifier *)endTimePickerSpecifier;
-(void)_showOrHidePickerSpecifierForSpecifier:(id)arg1 ;
-(void)_didFinishEditingBedtime;
-(PSSpecifier *)everyDaySpecifier;
-(void)setInformativeTextGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)setDeviceBedtimeEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)deviceBedtimeEnabled:(id)arg1 ;
-(void)setEveryDaySpecifier:(PSSpecifier *)arg1 ;
-(id)_simpleStartTime:(id)arg1 ;
-(void)setStartTimeSpecifier:(PSSpecifier *)arg1 ;
-(id)_simpleEndTime:(id)arg1 ;
-(void)setEndTimeSpecifier:(PSSpecifier *)arg1 ;
-(NSArray *)orderedLocalizedWeekdayNames;
-(id)_customScheduleTime:(id)arg1 ;
-(void)_showCustomizeDailyScheduleListController:(id)arg1 ;
-(void)setWeekdaySpecifiers:(NSArray *)arg1 ;
-(void)setStartTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(void)setEndTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)canAskForMoreTime;
-(id)atDowntimeFooterText;
-(void)setAtBedtimeGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)atBedtimeGroupSpecifier;
-(void)setAskForMoreTime:(id)arg1 specifier:(id)arg2 ;
-(id)askForMoreTime:(id)arg1 ;
-(void)setAtBedtimeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)atBedtimeSpecifier;
-(PSSpecifier *)informativeTextGroupSpecifier;
-(NSArray *)orderedWeekdayIndexes;
-(NSArray *)weekdaySpecifiers;
-(STUIUser *)affectedUser;
@end
