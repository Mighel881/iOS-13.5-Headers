/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifier.h>

@protocol SBFluidSwitcherScrollProviding;
@class SBAppLayout, SBSwitcherModifier;

@interface SBRemovalSwitcherModifier : SBSwitcherModifier {

	SBAppLayout* _appLayout;
	long long _reason;
	SBSwitcherModifier*<SBFluidSwitcherScrollProviding> _multitaskingModifier;
	BOOL _simulatingPostRemovalState;
	unsigned long long _indexToScrollToAfterRemoval;
	unsigned long long _indexOfAppLayoutPriorToRemoval;
	unsigned long long _phase;

}
-(CGPoint)scrollViewContentOffset;
-(id)appLayouts;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(id)topMostAppLayouts;
-(long long)layoutUpdateMode;
-(id)appLayoutsForInsertionOrRemoval;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)initWithAppLayout:(id)arg1 reason:(long long)arg2 multitaskingModifier:(id)arg3 ;
-(void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(/*^block*/id)arg1 ;
@end
