/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet, _UILegibilitySettings, UIColor;


@protocol CSAppearanceProviding <NSObject>
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@required
-(NSSet *)components;
-(UIColor *)backgroundColor;
-(_UILegibilitySettings *)legibilitySettings;
-(long long)backgroundStyle;
-(NSString *)appearanceIdentifier;

@end
