/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocomplete/CNAutocompleteResult.h>

@class NSDate;

@interface CNAutocompleteRecentResult : CNAutocompleteResult {

	NSDate* _date;
	BOOL _matchesSendingAddress;
	BOOL _completesChosenGroup;

}

@property (readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (assign) BOOL matchesSendingAddress;              //@synthesize matchesSendingAddress=_matchesSendingAddress - In the implementation block
@property (assign) BOOL completesChosenGroup;               //@synthesize completesChosenGroup=_completesChosenGroup - In the implementation block
+(id)comparators;
+(id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 date:(id)arg4 ;
+(id)groupResultWithDisplayName:(id)arg1 date:(id)arg2 ;
-(NSDate *)date;
-(BOOL)matchesSendingAddress;
-(BOOL)completesChosenGroup;
-(void)setMatchesSendingAddress:(BOOL)arg1 ;
-(void)setCompletesChosenGroup:(BOOL)arg1 ;
@end

