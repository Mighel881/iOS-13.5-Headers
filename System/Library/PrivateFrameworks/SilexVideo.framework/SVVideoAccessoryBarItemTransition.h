/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVAccessoryItem, SVVideoAccessoryItemTransitioning;
@class SVVideoAccessoryBarItemTransitionContext;

@interface SVVideoAccessoryBarItemTransition : NSObject {

	id<SVAccessoryItem> _fromItem;
	id<SVAccessoryItem> _toItem;
	id<SVVideoAccessoryItemTransitioning> _transitionCoordinator;
	SVVideoAccessoryBarItemTransitionContext* _context;

}

@property (nonatomic,retain) SVVideoAccessoryBarItemTransitionContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<SVAccessoryItem> fromItem;                                             //@synthesize fromItem=_fromItem - In the implementation block
@property (nonatomic,readonly) id<SVAccessoryItem> toItem;                                               //@synthesize toItem=_toItem - In the implementation block
@property (nonatomic,readonly) id<SVVideoAccessoryItemTransitioning> transitionCoordinator;              //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
-(void)cancel;
-(SVVideoAccessoryBarItemTransitionContext *)context;
-(void)setContext:(SVVideoAccessoryBarItemTransitionContext *)arg1 ;
-(id<SVVideoAccessoryItemTransitioning>)transitionCoordinator;
-(id<SVAccessoryItem>)fromItem;
-(id<SVAccessoryItem>)toItem;
-(id)initWithFromItem:(id)arg1 toItem:(id)arg2 transitionCoordinator:(id)arg3 ;
-(void)performTransitionOnContainerView:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end
