/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/STTelephonyStateObserver.h>

@protocol SBApplicationRestrictionDataSource;
@class NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, SBApplicationDefaults, NSString;

@interface SBApplicationRestrictionController : NSObject <STTelephonyStateObserver> {

	id<SBApplicationRestrictionDataSource> _dataSource;
	NSHashTable* _observers;
	NSMutableDictionary* _tagValidityMap;
	NSMutableDictionary* _validTagsByIdentifier;
	MGNotificationTokenStructRef _tagsNotificationToken;
	NSMutableSet* _enabledTags;
	NSMutableDictionary* _ratingRanksByIdentifier;
	NSSet* _restrictedIdentifiers;
	SBApplicationDefaults* _applicationDefaults;
	BOOL _showInternalApps;
	BOOL _hasHideNonDefaultSystemAppsCapability;
	BOOL _showAllSystemApps;
	BOOL _canPostRestrictionState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(void)beginPostingChanges;
-(BOOL)isApplicationIdentifierRestricted:(id)arg1 ;
-(void)noteApplicationIdentifiersDidChangeWithAdded:(id)arg1 replaced:(id)arg2 removed:(id)arg3 ;
-(void)noteVisibilityOverridesDidChange;
-(void)noteRestrictionsMayHaveChanged;
-(void)_updateVisibilityPreferences;
-(void)_postRestrictionStateToObservers:(id)arg1 ;
-(void)_postRestrictionState;
-(void)_updateRestrictionsAndForcePost:(BOOL)arg1 ;
@end

