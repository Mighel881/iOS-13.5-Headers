/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSyncStore <NSObject>
@property (readonly) int protocolVersion; 
@property (readonly) long long syncStoreType; 
@required
-(id)profile;
-(int)protocolVersion;
-(id)syncStoreIdentifier;
-(id)databaseIdentifier;
-(long long)syncStoreType;
-(long long)syncProvenance;
-(id)orderedSyncEntities;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
-(long long)syncEpoch;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncEntityDependenciesForSyncEntity:(Class)arg1;
-(BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg1;
-(BOOL)enforceSyncEntityOrdering;
-(BOOL)shouldContinueAfterAnchorValidationError:(id)arg1;
-(BOOL)shouldEnforceSequenceOrdering;
-(long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
-(void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;

@end
