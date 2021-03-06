/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/OccurrenceCacheDataSource.h>

@class EKOccurrenceCacheSearch, NSMutableArray;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource {

	EKOccurrenceCacheSearch* _search;
	NSMutableArray* _processingCachedDays;
	opaque_pthread_mutex_t _resultsLock;

}
-(void)dealloc;
-(void)invalidate;
-(id)_cachedDays;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2 ;
-(BOOL)supportsInvitations;
-(BOOL)supportsFakeTodaySection;
-(long long)countOfOccurrencesAtDayIndex:(long long)arg1 ;
-(void)invalidateCachedOccurrences;
-(void)searchWithTerm:(id)arg1 ;
-(void)stopSearching;
-(void)_setCachedDaysAndNotify:(id)arg1 ;
@end

