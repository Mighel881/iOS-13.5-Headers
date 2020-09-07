/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REElementDataSourceControllerProperties.h>
#import <libobjc.A.dylib/REElementDataSourceDelegate.h>

@protocol OS_dispatch_queue, REElementDataSourceControllerDelegate;
@class NSString, NSArray, NSMutableSet, NSMutableDictionary, NSObject, NSMutableArray, REUpNextScheduler, NSSet, RERelevanceProviderEnvironment, RERelevanceEngine, REElementDataSource;

@interface REElementDataSourceController : NSObject <REElementDataSourceControllerProperties, REElementDataSourceDelegate> {

	NSString* _loggingHeader;
	NSMutableSet* _dataSourceElements;
	NSMutableDictionary* _dataSourceElementSectionMap;
	NSMutableDictionary* _dataSourceElementIdentifierMap;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _updates;
	REUpNextScheduler* _updateScheduler;
	REUpNextScheduler* _reloadScheduler;
	BOOL _wantsReloadWhilePaused;
	BOOL _hasDataAvailable;
	unsigned long long _contentMode;
	BOOL _isPerformingReload;
	NSMutableArray* _enqueuedBlocks;
	NSSet* _supportedSections;
	RERelevanceProviderEnvironment* _providerEnvironment;
	RERelevanceEngine* _relevanceEngine;
	BOOL _willUnload;
	BOOL _allowsLocationUse;
	BOOL _supportsContentRelevance;
	NSArray* _contentAttributes;
	int _boostCount;
	Class _dataSourceClass;
	REElementDataSource* _dataSource;
	unsigned long long _state;
	id<REElementDataSourceControllerDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) Class dataSourceClass; 
@property (nonatomic,readonly) NSArray * supportedSections; 
@property (nonatomic,readonly) NSArray * allProvidedElements; 
@property (nonatomic,readonly) BOOL allowsLocationUse; 
@property (nonatomic,readonly) BOOL hasDataAvailable; 
@property (nonatomic,readonly) unsigned long long updateCount; 
@property (assign,nonatomic,__weak) id<REElementDataSourceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) Class dataSourceClass;                                                //@synthesize dataSourceClass=_dataSourceClass - In the implementation block
@property (nonatomic,readonly) REElementDataSource * dataSource;                                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifier; 
@property (nonatomic,readonly) BOOL hasLoadedData; 
@property (nonatomic,readonly) NSArray * allElements; 
@property (assign,nonatomic) unsigned long long state;                                               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id<REElementDataSourceControllerDelegate>)delegate;
-(void)setDelegate:(id<REElementDataSourceControllerDelegate>)arg1 ;
-(void)pause;
-(void)resume;
-(NSString *)bundleIdentifier;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(REElementDataSource *)dataSource;
-(NSString *)applicationBundleIdentifier;
-(Class)dataSourceClass;
-(unsigned long long)updateCount;
-(BOOL)hasLoadedData;
-(void)_queue_resume;
-(void)_loadLoggingHeader;
-(NSArray *)supportedSections;
-(BOOL)allowsLocationUse;
-(void)setAllowsLocationUse:(BOOL)arg1 ;
-(id)_initWithRelevanceEngine:(id)arg1 dataSourceClass:(Class)arg2 dataSource:(id)arg3 ;
-(void)_queue_performUpdates;
-(void)_queue_reloadWithQOS:(unsigned)arg1 qosOffset:(int)arg2 forceReload:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleSignifiantTimeChange:(id)arg1 ;
-(void)_handleDeviceLockStateChange:(id)arg1 ;
-(void)invalidateElements;
-(BOOL)_validElement:(id)arg1 ;
-(BOOL)_supportsContentRelevanceProviderForElement:(id)arg1 ;
-(BOOL)_isWhitelisted;
-(void)_performOrEnqueueUpdateBlock:(/*^block*/id)arg1 ;
-(void)_queue_updateDataSourceLocationUse;
-(void)_queue_pause;
-(id)_elementsByRemovingInvalidElements:(id)arg1 ;
-(id)_updateRelevanceProvidersForElement:(id)arg1 ;
-(id)_shallowCopiedElements:(id)arg1 ;
-(BOOL)_containsElementIdentifier:(id)arg1 ;
-(void)_addElementIdentifier:(id)arg1 ;
-(void)_setSection:(id)arg1 forElementWithIdentifier:(id)arg2 ;
-(void)_storeElement:(id)arg1 ;
-(void)_namespaceElementIdentifier:(id)arg1 section:(id)arg2 ;
-(void)_queue_scheduleUpdate:(id)arg1 ;
-(id)_sectionForElementWithIdentifier:(id)arg1 ;
-(id)_elementForIdentifier:(id)arg1 ;
-(id)_allDataSourceElements;
-(void)_removeElementIdentifier:(id)arg1 ;
-(id)_dataSourceIdentifierFromIdentifier:(id)arg1 ;
-(void)_removeElementForIdentifier:(id)arg1 ;
-(id)_groupElements:(id)arg1 bySections:(id)arg2 ;
-(id)_queue_elementsForIds:(id)arg1 ;
-(NSArray *)allElements;
-(void)_queue_processUpdates:(id)arg1 forSection:(id)arg2 ;
-(id)elementOperationQueue;
-(void)addElements:(id)arg1 toSectionWithIdentifier:(id)arg2 ;
-(void)reloadElement:(id)arg1 ;
-(void)removeElementsWithIds:(id)arg1 ;
-(void)refreshElement:(id)arg1 ;
-(BOOL)hasElementWithId:(id)arg1 inSectionWithIdentifier:(id)arg2 ;
-(void)fetchElementWithIdentifierVisible:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)addElements:(id)arg1 toSection:(unsigned long long)arg2 ;
-(void)removeElements:(id)arg1 fromSection:(unsigned long long)arg2 ;
-(BOOL)hasElementWithId:(id)arg1 inSection:(unsigned long long)arg2 ;
-(id)initWithRelevanceEngine:(id)arg1 dataSource:(id)arg2 ;
-(id)initWithRelevanceEngine:(id)arg1 dataSourceClass:(Class)arg2 ;
-(void)pauseIfNeeded;
-(void)prepareToUnload;
-(void)invalidateAndReloadWithCompletion:(/*^block*/id)arg1 ;
-(void)elementWillBecomeVisible:(id)arg1 ;
-(void)elementDidBecomeHidden:(id)arg1 ;
-(BOOL)hasDataAvailable;
-(NSArray *)allProvidedElements;
@end
