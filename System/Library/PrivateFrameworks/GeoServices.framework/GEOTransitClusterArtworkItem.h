/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>
#import <libobjc.A.dylib/GEOTransitTextDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOFormattedString, NSString;

@interface GEOTransitClusterArtworkItem : PBCodable <GEOTransitArtworkDataSource, GEOTransitTextDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _text;
	unsigned _artworkIndex;
	SCD_Struct_GE99 _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int artworkSourceType; 
@property (nonatomic,readonly) int artworkUseType; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource; 
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource; 
@property (nonatomic,readonly) id<GEOTransitTextDataSource> textDataSource; 
@property (nonatomic,readonly) BOOL hasRoutingIncidentBadge; 
@property (nonatomic,readonly) NSString * accessibilityText; 
@property (nonatomic,readonly) id<GEOServerFormattedString> text; 
@property (assign,nonatomic) BOOL hasArtworkIndex; 
@property (assign,nonatomic) unsigned artworkIndex; 
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) GEOFormattedString * text; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(id<GEOServerFormattedString>)text;
-(void)setText:(id<GEOServerFormattedString>)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasText;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)artworkSourceType;
-(int)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(id<GEOTransitTextDataSource>)textDataSource;
-(BOOL)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;
-(BOOL)hasArtworkIndex;
-(unsigned)artworkIndex;
-(void)setArtworkIndex:(unsigned)arg1 ;
-(void)setHasArtworkIndex:(BOOL)arg1 ;
@end

