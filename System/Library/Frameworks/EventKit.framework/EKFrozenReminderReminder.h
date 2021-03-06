/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKFrozenReminderObject.h>

@interface EKFrozenReminderReminder : EKFrozenReminderObject
+(Class)meltedClass;
-(id)calendar;
-(id)timeZone;
-(id)attachments;
-(id)UUID;
-(id)URL;
-(id)title;
-(id)uniqueIdentifier;
-(unsigned long long)priority;
-(id)uniqueID;
-(id)action;
-(id)creationDate;
-(id)clientLocation;
-(id)appLink;
-(id)lastModifiedDate;
-(id)organizer;
-(id)originalItem;
-(id)notes;
-(id)startDateComponents;
-(id)calendarItemIdentifier;
-(id)alarms;
-(id)attendees;
-(BOOL)hasAttendees;
-(id)calendarItemExternalIdentifier;
-(BOOL)hasRecurrenceRules;
-(id)selfAttendee;
-(id)structuredLocation;
-(id)travelStartLocation;
-(id)structuredLocationWithoutPrediction;
-(id)recurrenceRules;
-(id)detachedItems;
-(id)completionDate;
-(id)_reminder;
-(id)dueDateComponents;
-(id)remObjectID;
-(id)initNewReminderInStore:(id)arg1 ;
-(BOOL)_applyChangesToSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)_copyToNewList:(id)arg1 error:(id*)arg2 ;
-(BOOL)_applyChanges:(id)arg1 error:(id*)arg2 ;
-(id)ekExceptionDates;
-(BOOL)hasNotes;
-(void)_fixAlarmUUIDsForClone:(id)arg1 from:(id)arg2 ;
-(BOOL)defaultAlarmRemoved;
@end

