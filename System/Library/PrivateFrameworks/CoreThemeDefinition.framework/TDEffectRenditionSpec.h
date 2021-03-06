/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSNumber, NSOrderedSet, TDEffectComponent;

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) NSNumber * effectScale; 
@property (nonatomic,retain) NSOrderedSet * components; 
@property (nonatomic,retain,readonly) TDEffectComponent * CUIShapeEffectShapeOpacity; 
@property (nonatomic,retain,readonly) TDEffectComponent * CUIShapeEffectOutputOpacity; 
+(id)keyPathsForValuesAffectingCUIShapeEffectShapeOpacity;
+(id)keyPathsForValuesAffectingCUIShapeEffectOutputOpacity;
-(id)effectPreset;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2 ;
-(id)componentOfType:(unsigned)arg1 ;
-(void)replaceComponentsWithComponentsFromEffectRendition:(id)arg1 withDocument:(id)arg2 ;
-(TDEffectComponent *)CUIShapeEffectShapeOpacity;
-(TDEffectComponent *)CUIShapeEffectOutputOpacity;
@end

