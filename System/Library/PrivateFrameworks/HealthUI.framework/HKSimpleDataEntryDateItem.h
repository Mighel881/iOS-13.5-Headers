/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKSimpleDataEntryItem.h>

@class HKSimpleDataEntryPlainTextCell, NSString, NSDate, HKValueRange, UIDatePicker, NSDateFormatter;

@interface HKSimpleDataEntryDateItem : HKSimpleDataEntryItem {

	HKSimpleDataEntryPlainTextCell* _cell;
	NSString* _title;
	NSString* _registrantModelKey;
	NSDate* _date;
	NSDate* _defaultDate;
	HKValueRange* _dateRange;
	UIDatePicker* _datePicker;
	NSDateFormatter* _exportFormatter;

}
+(id)_dateFormatter;
+(id)gregorianGMTCalendar;
-(void)beginEditing;
-(id)cell;
-(void)localeDidChange:(id)arg1 ;
-(void)datePickerValueChanged:(id)arg1 ;
-(void)updateCellDisplay;
-(void)_setTextForInputTextField:(id)arg1 ;
-(id)formattedKeyAndValue;
-(id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 date:(id)arg3 defaultDate:(id)arg4 dateRange:(id)arg5 exportFormatter:(id)arg6 ;
@end

