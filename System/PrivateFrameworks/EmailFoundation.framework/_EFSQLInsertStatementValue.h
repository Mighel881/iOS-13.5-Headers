/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMutableDictionary;

@interface _EFSQLInsertStatementValue : NSObject {

	NSMutableOrderedSet* _requiredColumns;
	NSMutableDictionary* _bindables;
	NSMutableDictionary* _expressables;

}

@property (nonatomic,retain) NSMutableOrderedSet * requiredColumns;              //@synthesize requiredColumns=_requiredColumns - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bindables;                    //@synthesize bindables=_bindables - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * expressables;                 //@synthesize expressables=_expressables - In the implementation block
-(id)initWithRequiredColumns:(id)arg1 ;
-(NSMutableOrderedSet *)requiredColumns;
-(void)setRequiredColumns:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)bindables;
-(void)setBindables:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)expressables;
-(void)setExpressables:(NSMutableDictionary *)arg1 ;
@end
