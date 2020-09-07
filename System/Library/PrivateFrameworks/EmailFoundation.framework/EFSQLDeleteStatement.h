/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLDeleteStatement : NSObject {

	NSString* _table;
	id<EFSQLExpressable> _whereClause;

}

@property (nonatomic,copy,readonly) NSString * table;                         //@synthesize table=_table - In the implementation block
@property (nonatomic,readonly) id<EFSQLExpressable> whereClause;              //@synthesize whereClause=_whereClause - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString; 
-(NSString *)table;
-(id)initWithTable:(id)arg1 ;
-(NSString *)queryString;
-(id)initWithTable:(id)arg1 where:(id)arg2 ;
-(id<EFSQLExpressable>)whereClause;
@end
