/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, WBSFormAutoFillCorrectionsStore;
@class NSMutableArray, NSObject, WBSCrowdsourcedFeedbackDomainNormalizer;

@interface WBSFormAutoFillCorrectionsHistoryObserver : NSObject {

	NSMutableArray* _pendingRemovedHistoryItemsToProcess;
	NSMutableArray* _pendingRemovedHistoryVisitsToProcess;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_source> _coalescingTimerSource;
	WBSCrowdsourcedFeedbackDomainNormalizer* _domainNormalizer;
	id<WBSFormAutoFillCorrectionsStore> _correctionsStore;

}
-(void)dealloc;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyWasCleared:(id)arg1 ;
-(id)initWithCorrectionsStore:(id)arg1 ;
-(void)_historyVisitsWereRemoved:(id)arg1 ;
-(void)_invalidateUpdateCoalescingTimer;
-(void)_updateCorrectionsStoreNow;
-(void)_updateCorrectionsStoreSoon;
-(id)_normalizeURL:(id)arg1 ;
-(void)flushPendingChangesAndDisconnectFromStoreAndHistory;
@end

