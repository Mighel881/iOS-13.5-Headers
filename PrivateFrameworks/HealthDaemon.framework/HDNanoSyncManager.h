/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDNanoSyncStoreDelegate.h>
#import <libobjc.A.dylib/HDSyncSessionDelegate.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/HDIDSMessageCenterDelegate.h>
#import <libobjc.A.dylib/HDForegroundClientProcessObserver.h>

@protocol _CDLocalContext, OS_dispatch_queue, OS_dispatch_source;
@class HKNanoSyncPairedDevicesSnapshot, HDProfile, NSObject, HDIDSMessageCenter, HKObserverSet, HDKeyValueDomain, HDNanoSyncStore, NSMutableDictionary, NSArray, NSDate, HDPairedSyncManager, NSString;

@interface HDNanoSyncManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDNanoSyncStoreDelegate, HDSyncSessionDelegate, HDDatabaseProtectedDataObserver, HDDataObserver, HDIDSMessageCenterDelegate, HDForegroundClientProcessObserver> {

	BOOL _isMaster;
	BOOL _invalidated;
	id<_CDLocalContext> _context;
	BOOL _waitingForFirstUnlock;
	BOOL _enablePeriodicSyncTimer;
	HKNanoSyncPairedDevicesSnapshot* _pairedDevicesSnapshot;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _syncQueue;
	HDIDSMessageCenter* _messageCenter;
	HKObserverSet* _observers;
	HDKeyValueDomain* _nanoSyncDomain;
	HDNanoSyncStore* _activeSyncStore;
	NSMutableDictionary* _syncStoresByDeviceIdentifier;
	NSArray* _pairedDevices;
	NSObject*<OS_dispatch_source> _periodicSyncTimer;
	NSDate* _lastPeriodicSyncDate;
	double _restoreTimeout;
	HDPairedSyncManager* _pairedSyncManager;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;                          //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) HDIDSMessageCenter * messageCenter;                              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,retain) HKObserverSet * observers;                                       //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) HDKeyValueDomain * nanoSyncDomain;                               //@synthesize nanoSyncDomain=_nanoSyncDomain - In the implementation block
@property (nonatomic,retain) HDNanoSyncStore * activeSyncStore;                               //@synthesize activeSyncStore=_activeSyncStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * syncStoresByDeviceIdentifier;              //@synthesize syncStoresByDeviceIdentifier=_syncStoresByDeviceIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * pairedDevices;                                         //@synthesize pairedDevices=_pairedDevices - In the implementation block
@property (retain) HKNanoSyncPairedDevicesSnapshot * pairedDevicesSnapshot;                   //@synthesize pairedDevicesSnapshot=_pairedDevicesSnapshot - In the implementation block
@property (assign,nonatomic) BOOL waitingForFirstUnlock;                                      //@synthesize waitingForFirstUnlock=_waitingForFirstUnlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> periodicSyncTimer;                 //@synthesize periodicSyncTimer=_periodicSyncTimer - In the implementation block
@property (nonatomic,retain) NSDate * lastPeriodicSyncDate;                                   //@synthesize lastPeriodicSyncDate=_lastPeriodicSyncDate - In the implementation block
@property (assign) double restoreTimeout;                                                     //@synthesize restoreTimeout=_restoreTimeout - In the implementation block
@property (assign) BOOL enablePeriodicSyncTimer;                                              //@synthesize enablePeriodicSyncTimer=_enablePeriodicSyncTimer - In the implementation block
@property (nonatomic,readonly) HDPairedSyncManager * pairedSyncManager;                       //@synthesize pairedSyncManager=_pairedSyncManager - In the implementation block
@property (readonly) BOOL isMaster; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(void)setObservers:(HKObserverSet *)arg1 ;
-(HKObserverSet *)observers;
-(BOOL)isMaster;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)pairedDevices;
-(void)invalidateAndWait;
-(void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(HDIDSMessageCenter *)messageCenter;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2 ;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(void)_deviceDidBecomeActive:(id)arg1 ;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(void)syncHealthDataWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_userCharacteristicsDidChange:(id)arg1 ;
-(id)initWithProfile:(id)arg1 isMaster:(BOOL)arg2 ;
-(void)_unregisterForSyncTriggers;
-(BOOL)_queue_finishInitializationAfterFirstUnlockIfNecessaryWithError:(id*)arg1 ;
-(void)_queue_syncImmediatelyWithReason:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_pairedSyncDidBeginForDevice:(id)arg1 messagesSentHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_waitForLastChanceSyncWithPairingID:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_resetSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_updateSyncStoresWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_requestAuthorizationForRequestRecord:(id)arg1 syncStore:(id)arg2 requestSentHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_queue_sendStartWorkoutAppRequest:(id)arg1 syncStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_sendCompanionUserNotificationRequest:(id)arg1 syncStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_deviceDidPair:(id)arg1 ;
-(void)_deviceDidUnpair:(id)arg1 ;
-(void)_queue_setUpMessageCentersIfNecessary;
-(void)_registerForSyncTriggers;
-(void)_queue_updateSyncStores;
-(void)_addDaytonaVersionMessageHandlersToMessageCenter:(id)arg1 ;
-(void)_addGraceVersionMessageHandlersToMessageCenter:(id)arg1 ;
-(void)messageCenterDidReceiveRestoreRequest:(id)arg1 ;
-(void)messageCenterDidReceiveRestoreResponse:(id)arg1 ;
-(void)messageCenterRestoreError:(id)arg1 ;
-(void)messageCenterDidReceiveChangesRequest:(id)arg1 ;
-(void)messageCenterDidReceiveChangesResponse:(id)arg1 ;
-(void)messageCenterChangesError:(id)arg1 ;
-(void)messageCenterDidReceiveAuthorizationResponse:(id)arg1 ;
-(void)messageCenterDidReceiveAuthorizationRequest:(id)arg1 ;
-(void)messageCenterDidReceiveAuthorizationError:(id)arg1 ;
-(void)messageCenterDidReceiveAuthorizationCompleteRequest:(id)arg1 ;
-(void)messageCenterDidReceiveRoutineRequest:(id)arg1 ;
-(void)messageCenterDidReceiveStartWorkoutAppRequest:(id)arg1 ;
-(void)messageCenterDidReceiveStartWorkoutAppResponse:(id)arg1 ;
-(void)messageCenterDidReceiveStartWorkoutAppError:(id)arg1 ;
-(void)messageCenterDidReceiveCompanionUserNotificationRequest:(id)arg1 ;
-(void)messageCenterDidReceiveCompanionUserNotificationResponse:(id)arg1 ;
-(void)messageCenterDidReceiveCompanionUserNotificationError:(id)arg1 ;
-(void)_logIncomingRequest:(id)arg1 ;
-(id)_queue_syncStoreForIDSDevice:(id)arg1 updateIfNecessary:(BOOL)arg2 ;
-(void)_logIncomingResponse:(id)arg1 ;
-(void)_handleIncomingRequest:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_logOutgoingMessageError:(id)arg1 ;
-(id)_queue_syncStoreForMessageCenterError:(id)arg1 ;
-(void)_queue_handleRestoreRequest:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_handleRestoreResponse:(id)arg1 syncStore:(id)arg2 ;
-(void)_handleIncomingResponse:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_queue_receiveChangeRequest:(id)arg1 syncStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_syncronouslyHandleIncomingRequest:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_queue_receiveChangeResponse:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_changeRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_changeResponseDidFailToSendWithError:(id)arg1 syncStore:(id)arg2 ;
-(void)_handleOutgoingMessageError:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_queue_receiveAuthorizationRequest:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_receiveAuthorizationResponse:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_authorizationRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_receiveAuthorizationCompleteRequest:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_receiveRoutineRequest:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_recieveStartWorkoutAppRequest:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_recieveStartWorkoutAppResponse:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_startWorkoutAppRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_recieveCompanionUserNotificationRequest:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_recieveCompanionUserNotificationResponse:(id)arg1 syncStore:(id)arg2 ;
-(void)_queue_companionUserNotificationRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2 ;
-(void)setPairedDevicesSnapshot:(HKNanoSyncPairedDevicesSnapshot *)arg1 ;
-(void)_queue_startPeriodicSyncTimerIfNecessary;
-(void)_showFitnessAppIfNeeded;
-(void)_queue_updateDeviceNameIfNecessaryWithSyncStore:(id)arg1 ;
-(void)_queue_cancelPeriodicSyncTimer;
-(void)_queue_generateWatchActivationSamples;
-(void)_notifyObserversPairedDevicesChanged:(id)arg1 ;
-(BOOL)_queue_permitSyncWithError:(id*)arg1 ;
-(void)_queue_beginProactiveSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_transitionToRestoreInProgressWithSyncStore:(id)arg1 ;
-(void)_resetSyncAnchorsForStore:(id)arg1 ;
-(void)_queue_beginRestoreWithStore:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_transitionToRestoreIncompleteWithSyncStore:(id)arg1 error:(id)arg2 ;
-(id)_queue_nanoSyncKeyValueDomain;
-(id)_queue_syncStoreForNanoRegistryPairingID:(id)arg1 ;
-(void)_queue_synchronizeWithOptions:(unsigned long long)arg1 restoreMessagesSentHandler:(/*^block*/id)arg2 targetSyncStore:(id)arg3 reason:(id)arg4 completion:(/*^block*/id)arg5 ;
-(double)restoreTimeout;
-(void)restoreTimedOutWithSyncStore:(id)arg1 ;
-(void)_queue_sendRestoreMessageWithStore:(id)arg1 restoreUUID:(id)arg2 sequenceNumber:(long long)arg3 statusCode:(int)arg4 ;
-(void)_queue_sendRequest:(id)arg1 syncStore:(id)arg2 ;
-(id)_queue_validatedSyncStore:(id)arg1 device:(id)arg2 message:(id)arg3 error:(id*)arg4 ;
-(long long)_queue_actionForRestoreRequest:(id)arg1 syncStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)_syncQueue_applyActivationRestore:(id)arg1 request:(id)arg2 syncStore:(id)arg3 error:(id*)arg4 ;
-(BOOL)_syncQueue_prepareForCompanionChangeWithStore:(id)arg1 error:(id*)arg2 ;
-(void)_queue_transitionToRestoreCompleteWithSyncStore:(id)arg1 ;
-(void)_queue_sendResponse:(id)arg1 syncStore:(id)arg2 ;
-(BOOL)_queue_isRestoreCompleteForSyncStore:(id)arg1 error:(id*)arg2 ;
-(void)_didReceiveChangeRequest;
-(long long)_queue_changeRequestActionForMessage:(id)arg1 syncStore:(id)arg2 errorDescription:(id*)arg3 ;
-(int)_changeResponseStatusCodeForAction:(long long)arg1 ;
-(id)_queue_eligibleInactiveSyncStores;
-(void)_syncQueue_forwardSpeculativeChangeSetIfNecessaryForChanges:(id)arg1 destinationSyncStores:(id)arg2 originSyncStore:(id)arg3 ;
-(id)_syncQueue_responseForChangesRequest:(id)arg1 syncStore:(id)arg2 statusCode:(int)arg3 ;
-(long long)_queue_changeResponseActionForMessage:(id)arg1 statusCode:(int)arg2 syncStore:(id)arg3 errorDescription:(id*)arg4 ;
-(BOOL)enablePeriodicSyncTimer;
-(void)_queue_periodicSyncTimerFired;
-(void)_queue_performNextProactiveSyncWithRemainingDevices:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_sendSpeculativeChangeSet:(id)arg1 syncStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_syncImmediatelyWithReason:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_userPreferencesDidChange:(id)arg1 ;
-(void)_syncImmediatelyWithReason:(id)arg1 ;
-(void)_sendFinalStatusMessageForSyncSession:(id)arg1 didFinishSuccessfully:(BOOL)arg2 error:(id)arg3 ;
-(void)_queue_sendChangeSet:(id)arg1 status:(id)arg2 session:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_sendFinalMessageForSyncSession:(id)arg1 status:(id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)nanoSyncStore:(id)arg1 remoteSystemBuildVersionDidChange:(id)arg2 ;
-(void)nanoSyncStore:(id)arg1 restoreStateDidChange:(long long)arg2 ;
-(void)nanoSyncStore:(id)arg1 deviceNameDidChange:(id)arg2 ;
-(void)syncSessionWillBegin:(id)arg1 ;
-(void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncSession:(id)arg1 didFinishSuccessfully:(BOOL)arg2 error:(id)arg3 ;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2 ;
-(void)messageCenter:(id)arg1 activeDeviceDidChange:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)foregroundClientProcessesDidChange:(id)arg1 previouslyForegroundBundleIdentifiers:(id)arg2 ;
-(void)obliterateWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)pairedSyncDidBeginForDevice:(id)arg1 messagesSentHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncHealthDataWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)updatePairedDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)unitTest_performWithActiveSyncStore:(/*^block*/id)arg1 ;
-(void)requestAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendStartWorkoutAppRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendCompanionUserNotificationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_workoutSamplesWereAssociated:(id)arg1 ;
-(void)_watchOffWristNotification:(id)arg1 ;
-(HKNanoSyncPairedDevicesSnapshot *)pairedDevicesSnapshot;
-(HDKeyValueDomain *)nanoSyncDomain;
-(void)setNanoSyncDomain:(HDKeyValueDomain *)arg1 ;
-(HDNanoSyncStore *)activeSyncStore;
-(void)setActiveSyncStore:(HDNanoSyncStore *)arg1 ;
-(NSMutableDictionary *)syncStoresByDeviceIdentifier;
-(void)setSyncStoresByDeviceIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setPairedDevices:(NSArray *)arg1 ;
-(BOOL)waitingForFirstUnlock;
-(void)setWaitingForFirstUnlock:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)periodicSyncTimer;
-(void)setPeriodicSyncTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSDate *)lastPeriodicSyncDate;
-(void)setLastPeriodicSyncDate:(NSDate *)arg1 ;
-(void)setRestoreTimeout:(double)arg1 ;
-(void)setEnablePeriodicSyncTimer:(BOOL)arg1 ;
-(HDPairedSyncManager *)pairedSyncManager;
@end
