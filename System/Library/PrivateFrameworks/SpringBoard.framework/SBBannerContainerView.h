/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <PlatterKit/PLPlatterView.h>

@class SBBannerContextView, SBUIBannerContext;

@interface SBBannerContainerView : PLPlatterView {

	SBBannerContextView* _bannerContextView;

}

@property (nonatomic,retain) SBBannerContextView * bannerContextView;                 //@synthesize bannerContextView=_bannerContextView - In the implementation block
@property (nonatomic,retain,readonly) SBUIBannerContext * bannerContext; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SBUIBannerContext *)bannerContext;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(void)noteWillAppear;
-(void)noteDidDismissWithReason:(int)arg1 ;
-(void)noteDidAppear;
-(void)setBannerContextView:(SBBannerContextView *)arg1 ;
-(SBBannerContextView *)bannerContextView;
@end

