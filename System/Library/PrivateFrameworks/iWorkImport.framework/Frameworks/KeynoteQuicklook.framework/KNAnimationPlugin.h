/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KNAnimationPlugin <NSObject>
@optional
+(id)customAttributes;
+(id)customEffectTimingCurveDisplayParametersForAttributes:(id)arg1 layoutStyleOnly:(BOOL)arg2;
+(long long)rendererTypeForAnimationContext:(id)arg1;
+(BOOL)isResponsibleForDrawingAllTextures;
+(BOOL)isCARendererBased;
-(id)animationInfoForAnimatedBuild:(id)arg1;

@required
+(id)defaultAttributes;
+(id)supportedTypes;
+(id)localizedMenuString:(long long)arg1;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(long long)arg2;
+(id)thumbnailImageNameForType:(long long)arg1;
+(id)animationName;
+(long long)animationCategory;
+(id)animationFilter;
+(unsigned long long)directionType;
-(id)initWithAnimationContext:(id)arg1;

@end
