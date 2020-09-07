/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayPresentationRequest.h>

@class SBTransientOverlayViewController;

@interface SBMutableTransientOverlayPresentationRequest : SBTransientOverlayPresentationRequest

@property (assign,getter=isAnimated,nonatomic) BOOL animated; 
@property (nonatomic,copy) id completionHandler; 
@property (assign,nonatomic) BOOL shouldDismissSiri; 
@property (nonatomic,retain) SBTransientOverlayViewController * viewController; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setViewController:(SBTransientOverlayViewController *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setShouldDismissSiri:(BOOL)arg1 ;
@end
