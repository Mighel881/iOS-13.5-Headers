/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDMailboxChangeHookResponder.h>
#import <libobjc.A.dylib/EDMessageChangeHookResponder.h>
#import <libobjc.A.dylib/EMMailboxChangeObserver.h>
#import <libobjc.A.dylib/EFCancelable.h>

@protocol EMMessageRepositoryCountQueryObserver_xpc;
@class NSMutableDictionary, NSMutableSet, EMObjectID, EFQuery, NSPredicate, EMMailboxScope, EDMessageQueryEvaluator, EDMessagePersistence, EDPersistenceHookRegistry, EFCancelationToken, EDUpdateThrottler, NSString;

@interface EDMessageCountQueryHandler : NSObject <EFLoggable, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EMMailboxChangeObserver, EFCancelable> {

	NSMutableDictionary* _serverCounts;
	NSMutableSet* _mailboxesBeingSynced;
	long long _resyncDatabaseGeneration;
	EMObjectID* _mailboxObserverID;
	NSMutableSet* _seenMessageIDs;
	NSMutableSet* _newMessageIDs;
	os_unfair_lock_s _seenMessageIDsLock;
	AQ _recalculationPending;
	EFAtomicObject _atomicQueryDescription;
	EFAtomicObject _atomicMailboxScopeDescription;
	EFQuery* _query;
	EFQuery* _expandedQuery;
	NSPredicate* _predicateIgnoringFlags;
	EMMailboxScope* _serverCountMailboxScope;
	EDMessageQueryEvaluator* _queryEvaluator;
	id<EMMessageRepositoryCountQueryObserver_xpc> _resultsObserver;
	EDMessagePersistence* _messagePersistence;
	EDPersistenceHookRegistry* _hookRegistry;
	EFCancelationToken* _cancelationToken;
	EDUpdateThrottler* _updateThrottler;
	NSString* _pendingFlagChangesKey;
	long long _localCount;

}

@property (nonatomic,retain) EFQuery * query;                                                            //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) EFQuery * expandedQuery;                                                    //@synthesize expandedQuery=_expandedQuery - In the implementation block
@property (nonatomic,retain) NSPredicate * predicateIgnoringFlags;                                       //@synthesize predicateIgnoringFlags=_predicateIgnoringFlags - In the implementation block
@property (nonatomic,readonly) EMMailboxScope * serverCountMailboxScope;                                 //@synthesize serverCountMailboxScope=_serverCountMailboxScope - In the implementation block
@property (nonatomic,retain) EDMessageQueryEvaluator * queryEvaluator;                                   //@synthesize queryEvaluator=_queryEvaluator - In the implementation block
@property (nonatomic,retain) id<EMMessageRepositoryCountQueryObserver_xpc> resultsObserver;              //@synthesize resultsObserver=_resultsObserver - In the implementation block
@property (nonatomic,retain) EDMessagePersistence * messagePersistence;                                  //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,retain) EDPersistenceHookRegistry * hookRegistry;                                   //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (nonatomic,retain) EFCancelationToken * cancelationToken;                                      //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (nonatomic,retain) EDUpdateThrottler * updateThrottler;                                        //@synthesize updateThrottler=_updateThrottler - In the implementation block
@property (readonly) NSString * pendingFlagChangesKey;                                                   //@synthesize pendingFlagChangesKey=_pendingFlagChangesKey - In the implementation block
@property (assign,nonatomic) long long localCount;                                                       //@synthesize localCount=_localCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)defaultScheduler;
-(void)dealloc;
-(EFQuery *)query;
-(void)cancel;
-(void)setQuery:(EFQuery *)arg1 ;
-(EFCancelationToken *)cancelationToken;
-(EDPersistenceHookRegistry *)hookRegistry;
-(void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4 ;
-(void)persistenceDidUpdateServerCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceDidUpdateMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3 ;
-(EDMessagePersistence *)messagePersistence;
-(void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2 ;
-(void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2 ;
-(void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3 ;
-(void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(id)arg2 generationWindow:(id)arg3 ;
-(void)setMessagePersistence:(EDMessagePersistence *)arg1 ;
-(void)setCancelationToken:(EFCancelationToken *)arg1 ;
-(void)mailboxListChanged:(id)arg1 ;
-(void)setHookRegistry:(EDPersistenceHookRegistry *)arg1 ;
-(id<EMMessageRepositoryCountQueryObserver_xpc>)resultsObserver;
-(EDUpdateThrottler *)updateThrottler;
-(void)willSyncMailbox:(id)arg1 ;
-(void)didSyncMailbox:(id)arg1 ;
-(void)_scheduleCountCalculation;
-(void)_fireCountCalculation;
-(EFQuery *)expandedQuery;
-(void)setLocalCount:(long long)arg1 ;
-(EMMailboxScope *)serverCountMailboxScope;
-(void)_notifyObserverWithLogMessage:(id)arg1 ;
-(long long)localCount;
-(EDMessageQueryEvaluator *)queryEvaluator;
-(id)_filterMessages:(id)arg1 potentiallyMatchingMessages:(id*)arg2 ;
-(BOOL)_moreThan:(long long)arg1 messagesExistWithMessageIDHeaderHash:(id)arg2 ;
-(id)_originalMessagesKeyForKey:(id)arg1 ;
-(void)_incrementLocalCount:(long long)arg1 logMessage:(id)arg2 generationWindow:(id)arg3 ;
-(void)_decrementLocalCount:(long long)arg1 logMessage:(id)arg2 generationWindow:(id)arg3 ;
-(NSPredicate *)predicateIgnoringFlags;
-(NSString *)pendingFlagChangesKey;
-(void)_prepareForChangeWithMessages:(id)arg1 changeKey:(id)arg2 ;
-(void)_persistenceDidDeleteMessages:(id)arg1 includeMessagesWithDeletedFlag:(BOOL)arg2 generationWindow:(id)arg3 ;
-(void)_processChangedMessages:(id)arg1 changeKey:(id)arg2 generationWindow:(id)arg3 ;
-(id)initWithQuery:(id)arg1 serverCountMailboxScope:(id)arg2 messagePersistence:(id)arg3 hookRegistry:(id)arg4 observer:(id)arg5 ;
-(void)setExpandedQuery:(EFQuery *)arg1 ;
-(void)setPredicateIgnoringFlags:(NSPredicate *)arg1 ;
-(void)setQueryEvaluator:(EDMessageQueryEvaluator *)arg1 ;
-(void)setResultsObserver:(id<EMMessageRepositoryCountQueryObserver_xpc>)arg1 ;
-(void)setUpdateThrottler:(EDUpdateThrottler *)arg1 ;
@end
