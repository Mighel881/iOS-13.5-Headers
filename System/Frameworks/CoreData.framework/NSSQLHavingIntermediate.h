/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLWhereIntermediate;

@interface NSSQLHavingIntermediate : NSSQLIntermediate {

	NSSQLWhereIntermediate* _whereClause;

}
-(void)dealloc;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3 ;
-(BOOL)isHavingScoped;
@end

