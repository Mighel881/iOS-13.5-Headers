/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface _DASLogConditionHistory : NSObject {

	NSMutableArray* _conditions;
	NSMutableArray* _intervals;

}

@property (nonatomic,retain) NSMutableArray * conditions;              //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,retain) NSMutableArray * intervals;               //@synthesize intervals=_intervals - In the implementation block
+(id)condition:(id)arg1 fromDate:(id)arg2 ;
-(id)description;
-(NSMutableArray *)conditions;
-(void)setConditions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)intervals;
-(void)setIntervals:(NSMutableArray *)arg1 ;
-(id)initWithCondition:(id)arg1 fromDate:(id)arg2 ;
-(void)addCondition:(id)arg1 atDate:(id)arg2 ;
-(id)idealIntervals;
@end

