/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/BurstClipStylePhoto.h>

@interface BurstClipStylePhotoDissolvePop : BurstClipStylePhoto
-(double)maximumDuration;
-(double)minimumDuration;
-(double)idealDuration;
-(unsigned long long)_minimumNumberOfContainedClips;
-(unsigned long long)_idealNumberOfContainedClips;
-(id)containedClipsWithoutTransitions;
-(unsigned long long)_maximumNumberOfContainedClips;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3 ;
-(double)minimumRegularClipDuration;
-(double)minimumLastClipDuration;
-(double)idealRegularClipDuration;
-(double)idealLastClipDuration;
-(double)maximumRegularClipDuration;
-(double)maximumLastClipDuration;
-(double)clipLastClipRatio;
@end

