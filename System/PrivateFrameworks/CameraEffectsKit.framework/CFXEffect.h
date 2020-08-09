/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, JTEffect;

@interface CFXEffect : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _localizedTitle;
	JTEffect* _jtEffect;

}

@property (nonatomic,readonly) BOOL isNone; 
@property (nonatomic,retain) JTEffect * jtEffect;                           //@synthesize jtEffect=_jtEffect - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
+(void)initEffectRegistry;
+(void)preWarmShaderCache;
+(id)effectWithIdentifier:(id)arg1 forEffectType:(id)arg2 ;
+(id)effectWithJTEffect:(id)arg1 ;
+(id)effectIdentifiersForEffectType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)localizedTitle;
-(BOOL)isNone;
-(JTEffect *)jtEffect;
-(id)initWithJTEffect:(id)arg1 ;
-(void)setJtEffect:(JTEffect *)arg1 ;
@end
