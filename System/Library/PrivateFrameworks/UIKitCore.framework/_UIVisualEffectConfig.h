/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, _UIVisualEffectLayerConfig, NSArray;

@interface _UIVisualEffectConfig : NSObject {

	NSMutableArray* _layerConfigs;
	_UIVisualEffectLayerConfig* _contentConfig;

}

@property (nonatomic,readonly) NSArray * layerConfigs;                                  //@synthesize layerConfigs=_layerConfigs - In the implementation block
@property (nonatomic,readonly) _UIVisualEffectLayerConfig * contentConfig;              //@synthesize contentConfig=_contentConfig - In the implementation block
+(id)configWithContentConfig:(id)arg1 ;
+(id)configWithLayerConfigs:(id)arg1 ;
-(id)description;
-(void)addLayerConfig:(id)arg1 ;
-(void)enumerateLayerConfigs:(/*^block*/id)arg1 ;
-(NSArray *)layerConfigs;
-(_UIVisualEffectLayerConfig *)contentConfig;
@end
