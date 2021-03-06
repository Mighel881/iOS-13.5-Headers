/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivityScheduler/DuetActivityScheduler-Structs.h>
#import <libobjc.A.dylib/_DASBudgetPersisting.h>

@class NSMutableDictionary, NSString;

@interface _DASSharedMemoryBudgetPersistence : NSObject <_DASBudgetPersisting> {

	SCD_Struct_DA3* _currentData;
	NSMutableDictionary* _budgetToIndex;

}

@property (nonatomic,retain) NSMutableDictionary * budgetToIndex;              //@synthesize budgetToIndex=_budgetToIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)log;
+(id)persistence;
-(id)init;
-(NSMutableDictionary *)budgetToIndex;
-(id)validatedStringFromStoredValue:(char*)arg1 withAllowedNames:(id)arg2 ;
-(id)loadBudgetsWithExpectedNames:(id)arg1 ;
-(void)saveBudgets:(id)arg1 ;
-(void)updateBudget:(id)arg1 ;
-(void)saveModulationDate:(id)arg1 ;
-(id)lastModulationDate;
-(void)setBudgetToIndex:(NSMutableDictionary *)arg1 ;
@end

