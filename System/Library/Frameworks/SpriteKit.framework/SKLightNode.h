/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class UIColor;

@interface SKLightNode : SKNode {

	SKCLightNode* _skcLightNode;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIColor * lightColor; 
@property (nonatomic,retain) UIColor * ambientColor; 
@property (nonatomic,retain) UIColor * shadowColor; 
@property (assign,nonatomic) double falloff; 
@property (assign,nonatomic) unsigned categoryBitMask; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(double)falloff;
-(void)setFalloff:(double)arg1 ;
-(void)commonInit;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
-(UIColor *)lightColor;
-(void)setLightColor:(UIColor *)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)setAmbientColor:(UIColor *)arg1 ;
-(void)setLightCategoryBitMask:(unsigned)arg1 ;
-(void)setLightDecay:(double)arg1 ;
-(UIColor *)ambientColor;
-(double)lightDecay;
-(unsigned)lightCategoryBitMask;
@end

