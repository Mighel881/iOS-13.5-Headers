/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _NSPersistentHistoryPredicateRemapper : NSObject {

	NSString* _storeID;

}
+(id)defaultInstance;
-(void)dealloc;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
-(id)createPredicateForFetchFromPredicate:(id)arg1 ;
-(id)initWithStoreIdentifier:(id)arg1 ;
-(id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2 ;
-(id)replacementValueForValue:(id)arg1 ;
-(id)replacementValueForKeyPath:(id)arg1 ;
@end

