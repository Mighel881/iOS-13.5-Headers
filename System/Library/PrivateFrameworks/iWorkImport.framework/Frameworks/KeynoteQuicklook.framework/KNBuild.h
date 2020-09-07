/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSReading/TSPObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TSKTransformableObject.h>
#import <libobjc.A.dylib/KNInspectableAnimation.h>
#import <libobjc.A.dylib/TSKModel.h>

@class NSUUID, NSString, KNBuildAttributes, KNAbstractSlide, TSDDrawableInfo, NSArray, NSMutableDictionary, KNAnimationInfo, KNAnimationPluginMenu, KNBuildChunk, TSUColor, TSDEditableBezierPathSource, TSDBezierPathSource, NSSet;

@interface KNBuild : TSPObject <NSCopying, TSKTransformableObject, KNInspectableAnimation, TSKModel> {

	NSUUID* _drawableId;
	NSString* _delivery;
	KNBuildAttributes* _attributes;
	int _chunkIDSeed;
	KNAbstractSlide* _slide;
	TSDDrawableInfo* _drawable;
	NSArray* _cachedChunks;
	NSRange _cachedActiveChunkRange;
	BOOL _cachedActiveChunkRangeIsValid;
	NSMutableDictionary* _buildChunkIDMap;

}

@property (nonatomic,readonly) TSDDrawableInfo * i_drawable; 
@property (nonatomic,readonly) NSUUID * i_drawableId; 
@property (nonatomic,readonly) BOOL i_isFullyFormedBuild; 
@property (nonatomic,readonly) int i_chunkIDSeed; 
@property (assign,nonatomic,__weak) KNAbstractSlide * slide;                                      //@synthesize slide=_slide - In the implementation block
@property (nonatomic,retain) TSDDrawableInfo * drawable; 
@property (nonatomic,readonly) NSString * effect; 
@property (nonatomic,copy) KNBuildAttributes * attributes; 
@property (nonatomic,readonly) KNAnimationInfo * animationInfo; 
@property (nonatomic,readonly) KNAnimationPluginMenu * directionMenu; 
@property (nonatomic,readonly) unsigned long long directionType; 
@property (nonatomic,readonly) NSString * localizedEffect; 
@property (nonatomic,readonly) NSString * animationFilter; 
@property (nonatomic,readonly) unsigned long long firstChunkIndexOnSlide; 
@property (nonatomic,readonly) unsigned long long lastChunkIndexOnSlide; 
@property (nonatomic,readonly) NSArray * chunks; 
@property (nonatomic,readonly) unsigned long long chunkCount; 
@property (nonatomic,readonly) unsigned long long expectedChunkCount; 
@property (nonatomic,readonly) KNBuildChunk * firstChunk; 
@property (nonatomic,readonly) NSRange activeChunkRange; 
@property (nonatomic,readonly) unsigned long long startOffset; 
@property (nonatomic,readonly) unsigned long long endOffset; 
@property (nonatomic,readonly) unsigned long long firstActiveChunkIndexInBuild; 
@property (nonatomic,readonly) unsigned long long lastActiveChunkIndexInBuild; 
@property (nonatomic,readonly) BOOL hasInactiveChunks; 
@property (nonatomic,copy) NSString * delivery; 
@property (nonatomic,readonly) BOOL downgradesDelivery; 
@property (nonatomic,readonly) NSString * deliveryWithoutDowngrading; 
@property (nonatomic,readonly) unsigned long long deliveryStyle; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) BOOL isOnSlide; 
@property (nonatomic,readonly) BOOL hasComplement; 
@property (nonatomic,readonly) BOOL isActionBuild; 
@property (nonatomic,readonly) BOOL isActionMotionBuild; 
@property (nonatomic,readonly) BOOL isEmphasisBuild; 
@property (nonatomic,readonly) BOOL isContentBuild; 
@property (nonatomic,readonly) BOOL supportsDirection; 
@property (nonatomic,readonly) BOOL supportsDuration; 
@property (nonatomic,readonly) BOOL supportsBounce; 
@property (nonatomic,readonly) BOOL supportsIncludeEndpoints; 
@property (nonatomic,readonly) BOOL supportsShine; 
@property (nonatomic,readonly) BOOL supportsScaleAmount; 
@property (nonatomic,readonly) BOOL supportsCustomScale; 
@property (nonatomic,readonly) BOOL supportsOpacity; 
@property (nonatomic,readonly) BOOL supportsActionScale; 
@property (nonatomic,readonly) BOOL supportsTravelDistance; 
@property (nonatomic,readonly) BOOL supportsDelivery; 
@property (nonatomic,readonly) BOOL supportsCustomTextDelivery; 
@property (nonatomic,readonly) BOOL supportsRandomNumberSeedInspection; 
@property (nonatomic,readonly) BOOL supportsCustomEffectTimingCurve1; 
@property (nonatomic,readonly) BOOL supportsCustomEffectTimingCurve2; 
@property (nonatomic,readonly) BOOL supportsCustomEffectTimingCurve3; 
@property (nonatomic,readonly) BOOL supportsCustomDetail; 
@property (nonatomic,readonly) BOOL supportsActionRotationAngle; 
@property (nonatomic,readonly) BOOL supportsActionRotationDirection; 
@property (nonatomic,readonly) BOOL supportsCustomRepeats; 
@property (nonatomic,readonly) BOOL supportsDecay; 
@property (nonatomic,readonly) BOOL supports3DChartRotationAngle; 
@property (nonatomic,readonly) BOOL supportsJiggleIntensity; 
@property (nonatomic,readonly) BOOL supportsCursor; 
@property (nonatomic,readonly) long long animationType; 
@property (nonatomic,readonly) unsigned long long direction; 
@property (nonatomic,readonly) TSUColor * color; 
@property (nonatomic,readonly) double durationDefaultForInitialChunk; 
@property (nonatomic,readonly) unsigned long long actionAcceleration; 
@property (nonatomic,readonly) TSDEditableBezierPathSource * actionMotionPathSource; 
@property (nonatomic,readonly) double actionScale; 
@property (nonatomic,readonly) double actionRotationAngle; 
@property (nonatomic,readonly) unsigned long long actionRotationDirection; 
@property (nonatomic,readonly) double actionOpacity; 
@property (nonatomic,readonly) long long customTextDelivery; 
@property (nonatomic,readonly) unsigned long long customDeliveryOption; 
@property (nonatomic,readonly) long long customAccelerationOption; 
@property (nonatomic,readonly) float custom3DChartRotation; 
@property (nonatomic,readonly) BOOL customBounce; 
@property (nonatomic,readonly) BOOL customMotionBlur; 
@property (nonatomic,readonly) BOOL customIncludeEndpoints; 
@property (nonatomic,readonly) BOOL customShine; 
@property (nonatomic,readonly) double customScaleAmount; 
@property (nonatomic,readonly) double customTravelDistance; 
@property (nonatomic,readonly) unsigned long long customRepeatCount; 
@property (nonatomic,readonly) BOOL customDecay; 
@property (nonatomic,readonly) unsigned long long customScale; 
@property (nonatomic,readonly) unsigned long long customJiggleIntensity; 
@property (nonatomic,readonly) long long randomNumberSeed; 
@property (nonatomic,readonly) double customDetail; 
@property (nonatomic,readonly) BOOL customCursor; 
@property (nonatomic,readonly) TSDBezierPathSource * customEffectTimingCurve1; 
@property (nonatomic,readonly) TSDBezierPathSource * customEffectTimingCurve2; 
@property (nonatomic,readonly) TSDBezierPathSource * customEffectTimingCurve3; 
@property (nonatomic,readonly) NSString * customEffectTimingCurveThemeName1; 
@property (nonatomic,readonly) NSString * customEffectTimingCurveThemeName2; 
@property (nonatomic,readonly) NSString * customEffectTimingCurveThemeName3; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * inspectableAttributes; 
@property (nonatomic,readonly) BOOL canEditAnimations; 
+(void)i_repairBuildToDrawableReferencesFromUUIDsForBuilds:(id)arg1 drawables:(id)arg2 ;
+(BOOL)needsObjectUUID;
+(id)p_drawableFromInfo:(id)arg1 ;
+(BOOL)p_shouldExcludeAnimationName:(id)arg1 forDrawable:(id)arg2 ;
+(id)supportedAnimationInfosForDrawableInfo:(id)arg1 animationType:(long long)arg2 ;
+(id)menuAnimationInfosForDrawableInfo:(id)arg1 animationType:(long long)arg2 ;
+(id)buildWithEffect:(id)arg1 animationType:(long long)arg2 drawable:(id)arg3 slide:(id)arg4 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(KNBuildAttributes *)attributes;
-(void)setAttributes:(KNBuildAttributes *)arg1 ;
-(NSString *)title;
-(TSUColor *)color;
-(unsigned long long)direction;
-(long long)animationType;
-(unsigned long long)startOffset;
-(unsigned long long)endOffset;
-(NSString *)effect;
-(NSString *)delivery;
-(BOOL)supportsDirection;
-(void)setDelivery:(NSString *)arg1 ;
-(unsigned long long)chunkCount;
-(TSDDrawableInfo *)drawable;
-(KNAbstractSlide *)slide;
-(void)setDrawable:(TSDDrawableInfo *)arg1 ;
-(KNAnimationInfo *)animationInfo;
-(NSArray *)chunks;
-(NSString *)animationFilter;
-(unsigned long long)directionType;
-(void)didInitFromSOS;
-(void)i_invalidateChunkCache;
-(void)i_generateAndApplyNewChunkIdentifierToChunk:(id)arg1 ;
-(void)i_registerBuildChunkIdentifierForChunk:(id)arg1 ;
-(void)i_rollbackChunkIDSeedForChunk:(id)arg1 ;
-(BOOL)isActionBuild;
-(BOOL)isEmphasisBuild;
-(BOOL)isContentBuild;
-(unsigned long long)firstActiveChunkIndexInBuild;
-(unsigned long long)lastActiveChunkIndexInBuild;
-(NSRange)activeChunkRange;
-(void)setSlide:(KNAbstractSlide *)arg1 ;
-(int)i_chunkIDSeed;
-(double)actionScale;
-(void)loadFromArchive:(const BuildArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)i_isFullyFormedBuild;
-(unsigned long long)expectedChunkCount;
-(void)saveToArchive:(BuildArchive*)arg1 archiver:(id)arg2 ;
-(BOOL)hasComplement;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned long long)deliveryStyle;
-(long long)customTextDelivery;
-(BOOL)supportsCustomTextDelivery;
-(NSUUID *)i_drawableId;
-(void)i_deregisterBuildChunkWithChunkIdentifier:(id)arg1 ;
-(id)p_buildChunkIDMap;
-(TSDDrawableInfo *)i_drawable;
-(id)i_drawableForArchiving:(BOOL)arg1 ;
-(id)i_drawableOnSlide:(id)arg1 ;
-(void)i_resetChunkIDSeed;
-(id)i_buildChunkForChunkIdentifier:(id)arg1 ;
-(BOOL)supportsDuration;
-(BOOL)supportsBounce;
-(BOOL)supportsRandomNumberSeedInspection;
-(BOOL)supportsCustomEffectTimingCurve3;
-(BOOL)supportsCustomEffectTimingCurve2;
-(BOOL)supportsCustomEffectTimingCurve1;
-(BOOL)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg1 ;
-(NSSet *)inspectableAttributes;
-(BOOL)canEditAnimations;
-(KNAnimationPluginMenu *)directionMenu;
-(BOOL)supportsTravelDistance;
-(double)customTravelDistance;
-(BOOL)customBounce;
-(BOOL)customMotionBlur;
-(long long)randomNumberSeed;
-(TSDBezierPathSource *)customEffectTimingCurve1;
-(TSDBezierPathSource *)customEffectTimingCurve2;
-(TSDBezierPathSource *)customEffectTimingCurve3;
-(NSString *)customEffectTimingCurveThemeName1;
-(NSString *)customEffectTimingCurveThemeName2;
-(NSString *)customEffectTimingCurveThemeName3;
-(double)durationDefaultForInitialChunk;
-(BOOL)isComplementOfBuild:(id)arg1 ;
-(id)initWithSlide:(id)arg1 effect:(id)arg2 buildType:(long long)arg3 context:(id)arg4 ;
-(id)deliveriesLocalized:(BOOL)arg1 ;
-(KNBuildChunk *)firstChunk;
-(BOOL)supportsDelivery;
-(BOOL)p_isDeliveryLocalized:(id)arg1 forNonNilDrawable:(id)arg2 ;
-(BOOL)downgradesDelivery;
-(NSRange)p_calculateActiveChunkRange;
-(unsigned long long)endChunkIndexFromEndOffset:(unsigned long long)arg1 ;
-(id)p_chunkAtIndex:(unsigned long long)arg1 ;
-(id)p_chunkTitleByTruncatingTitle:(id)arg1 toLength:(unsigned long long)arg2 ;
-(BOOL)p_hasComplementInBuilds:(id)arg1 ;
-(BOOL)isActionMotionBuild;
-(BOOL)p_supportsCustomTextDeliveryOptionsForAttributes:(id)arg1 ;
-(BOOL)supportsAcceleration;
-(BOOL)supportsCustomDetail;
-(NSString *)localizedEffect;
-(unsigned long long)firstChunkIndexOnSlide;
-(unsigned long long)lastChunkIndexOnSlide;
-(id)chunkForIdentifier:(id)arg1 ;
-(NSString *)deliveryWithoutDowngrading;
-(BOOL)hasInactiveChunks;
-(BOOL)isOnSlide;
-(BOOL)supportsIncludeEndpoints;
-(BOOL)supportsShine;
-(BOOL)supportsScaleAmount;
-(BOOL)supportsCustomScale;
-(BOOL)supportsOpacity;
-(BOOL)supportsActionScale;
-(BOOL)supportsActionRotationAngle;
-(BOOL)supportsActionRotationDirection;
-(BOOL)supports3DChartRotationAngle;
-(BOOL)supportsJiggleIntensity;
-(BOOL)supportsCursor;
-(BOOL)supportsCustomRepeats;
-(BOOL)supportsDecay;
-(BOOL)supportsCustomCursor;
-(unsigned long long)actionAcceleration;
-(TSDEditableBezierPathSource *)actionMotionPathSource;
-(double)actionRotationAngle;
-(unsigned long long)actionRotationDirection;
-(double)actionOpacity;
-(float)custom3DChartRotation;
-(unsigned long long)customDeliveryOption;
-(long long)customAccelerationOption;
-(BOOL)customIncludeEndpoints;
-(BOOL)customShine;
-(double)customScaleAmount;
-(unsigned long long)customRepeatCount;
-(BOOL)customDecay;
-(unsigned long long)customScale;
-(unsigned long long)customJiggleIntensity;
-(double)customDetail;
-(BOOL)customCursor;
@end
