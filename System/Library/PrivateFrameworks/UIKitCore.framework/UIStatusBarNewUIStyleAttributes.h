/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarStyleAttributes.h>

@class UIColor;

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {

	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	BOOL _hasBusyBackground;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isTranslucent;
-(id)initWithRequest:(id)arg1 ;
-(id)foregroundColor;
-(long long)legibilityStyle;
-(Class)foregroundStyleClass;
-(id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 hasBusyBackground:(BOOL)arg4 ;
-(id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 ;
-(BOOL)isTransparent;
-(BOOL)shouldUseVisualAltitude;
-(id)backgroundColorWithTintColor:(id)arg1 ;
-(id)newForegroundStyleWithHeight:(double)arg1 ;
@end

