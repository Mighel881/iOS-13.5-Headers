/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RERelevanceEngineObserver <NSObject>
@optional
-(void)relevanceEngineDidBeginUpdatingRelevance:(id)arg1;
-(void)relevanceEngineDidFinishUpdatingRelevance:(id)arg1;
-(void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
-(void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
-(void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
-(BOOL)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2;
-(void)relevanceEngine:(id)arg1 didUpdateRelevanceForElement:(id)arg2;
-(void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3;

@end
