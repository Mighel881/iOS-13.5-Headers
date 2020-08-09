/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ATXHeuristicResultCache, NSArray, NSSet;

@interface ATXHeuristicResultCacheEntry : NSObject {

	NSString* _heuristicName;
	ATXHeuristicResultCache* _cache;
	NSArray* _actions;
	NSSet* _expirers;

}
-(void)dealloc;
-(id)initWithHeuristic:(id)arg1 cache:(id)arg2 ;
-(void)setActions:(id)arg1 expirers:(id)arg2 ;
@end
