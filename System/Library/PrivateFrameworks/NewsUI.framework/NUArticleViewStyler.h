/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUArticleViewStyler.h>
@class UIColor;


@protocol NUArticleViewStyler
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) long long statusBarStyle; 
@property (nonatomic,readonly) long long topBackgroundStatusBarStyle; 
@required
-(UIColor *)backgroundColor;
-(long long)statusBarStyle;
-(void)styleToolbar:(id)arg1;
-(void)styleTabBar:(id)arg1;
-(void)unstyleTabBar:(id)arg1 overrideRestoreColor:(id)arg2;
-(void)unstyleToolbar:(id)arg1 overrideRestoreColor:(id)arg2;
-(long long)topBackgroundStatusBarStyle;

@end


@class UIColor;

@interface NUArticleViewStyler : NSObject <NUArticleViewStyler> {

	UIColor* _backgroundColor;
	long long _statusBarStyle;
	long long _topBackgroundStatusBarStyle;
	UIColor* _tabBarTintColor;
	UIColor* _toolbarTintColor;

}

@property (nonatomic,retain) UIColor * tabBarTintColor;                            //@synthesize tabBarTintColor=_tabBarTintColor - In the implementation block
@property (nonatomic,retain) UIColor * toolbarTintColor;                           //@synthesize toolbarTintColor=_toolbarTintColor - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) long long statusBarStyle;                           //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (nonatomic,readonly) long long topBackgroundStatusBarStyle;              //@synthesize topBackgroundStatusBarStyle=_topBackgroundStatusBarStyle - In the implementation block
-(UIColor *)backgroundColor;
-(void)setToolbarTintColor:(UIColor *)arg1 ;
-(long long)statusBarStyle;
-(void)styleToolbar:(id)arg1 ;
-(void)styleTabBar:(id)arg1 ;
-(UIColor *)toolbarTintColor;
-(long long)statusBarStyleForBackgroundColor:(id)arg1 ;
-(UIColor *)tabBarTintColor;
-(void)setTabBarTintColor:(UIColor *)arg1 ;
-(void)unstyleTabBar:(id)arg1 overrideRestoreColor:(id)arg2 ;
-(void)unstyleToolbar:(id)arg1 overrideRestoreColor:(id)arg2 ;
-(long long)topBackgroundStatusBarStyle;
-(id)initWithBackgroundColor:(id)arg1 topBackgroundColor:(id)arg2 ;
@end

