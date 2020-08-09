/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HUStatusBarVisibilityHandling.h>

@class NSString;

@interface HUDefaultStatusBarVisiblityHandler : NSObject <HUStatusBarVisibilityHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isStatusBarHidden,nonatomic,readonly) BOOL statusBarHidden; 
-(BOOL)isStatusBarHidden;
-(id)_statusBarAnimationParametersForAnimationSettings:(id)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 withAnimationSettings:(id)arg2 ;
@end
