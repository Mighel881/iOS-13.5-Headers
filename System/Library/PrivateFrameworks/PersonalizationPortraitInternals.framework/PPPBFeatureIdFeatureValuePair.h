/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBFeatureIdFeatureValuePair : PBCodable <NSCopying> {

	NSString* _featureId;
	float _value;
	SCD_Struct_PP1 _has;

}

@property (nonatomic,readonly) BOOL hasFeatureId; 
@property (nonatomic,retain) NSString * featureId;              //@synthesize featureId=_featureId - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) float value;                       //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasValue;
-(NSString *)featureId;
-(void)setFeatureId:(NSString *)arg1 ;
-(BOOL)hasFeatureId;
-(void)setHasValue:(BOOL)arg1 ;
@end

