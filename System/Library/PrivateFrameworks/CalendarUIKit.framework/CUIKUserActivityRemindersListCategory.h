/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource {

	NSString* _title;
	NSString* _externalID;
	BOOL _predictable;

}
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)updateActivity:(id)arg1 ;
-(id)initWithRemindersList:(id)arg1 forceLocal:(BOOL)arg2 ;
-(BOOL)_isMatchForRemindersList:(id)arg1 ;
-(id)initWithRemindersList:(id)arg1 ;
-(id)remindersListFromStore:(id)arg1 ;
@end

