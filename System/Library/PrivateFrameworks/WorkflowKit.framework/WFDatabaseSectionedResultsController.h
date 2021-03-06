/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFDatabase, NSArray, NSIndexSet;

@interface WFDatabaseSectionedResultsController : NSObject {

	WFDatabase* _database;
	NSArray* _resultsControllers;
	NSIndexSet* _sections;

}

@property (nonatomic,readonly) WFDatabase * database;                          //@synthesize database=_database - In the implementation block
@property (nonatomic,copy,readonly) NSArray * resultsControllers;              //@synthesize resultsControllers=_resultsControllers - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * sections;                     //@synthesize sections=_sections - In the implementation block
-(void)removeObserver:(id)arg1 ;
-(WFDatabase *)database;
-(void)update;
-(NSIndexSet *)sections;
-(NSArray *)resultsControllers;
-(id)descriptorAtIndexPath:(id)arg1 ;
-(id)resultsControllerForSection:(long long)arg1 ;
-(id)initWithCollections:(id)arg1 forSections:(id)arg2 database:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)addUpdateObserver:(id)arg1 selector:(SEL)arg2 ;
-(id)indexPathForDescriptor:(id)arg1 ;
-(void)addUpdateObserver:(id)arg1 selector:(SEL)arg2 forSection:(unsigned long long)arg3 ;
-(void)removeObserver:(id)arg1 forSection:(unsigned long long)arg2 ;
@end

