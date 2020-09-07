/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SBFParallaxSettings;


@protocol SBIconAccessoryView <SBReusableView>
@property (nonatomic,retain) SBFParallaxSettings * parallaxSettings; 
@property (nonatomic,retain) id<SBIconListLayout> listLayout; 
@optional
-(void)setListLayout:(id)arg1;
-(id<SBIconListLayout>)listLayout;
-(void)setParallaxSettings:(id)arg1;
-(SBFParallaxSettings *)parallaxSettings;

@required
-(CGPoint*)accessoryCenterForIconBounds:(CGRect)arg1;
-(void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3;
-(BOOL)displayingAccessory;
-(void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
-(void)setAccessoryBrightness:(double)arg1;

@end
