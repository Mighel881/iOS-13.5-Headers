/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface GEORPPageInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSData* _nextPageToken;
	unsigned _pageSize;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasPageSize; 
@property (assign,nonatomic) unsigned pageSize; 
@property (nonatomic,readonly) BOOL hasNextPageToken; 
@property (nonatomic,retain) NSData * nextPageToken; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSData *)nextPageToken;
-(void)setNextPageToken:(NSData *)arg1 ;
-(unsigned)pageSize;
-(void)setPageSize:(unsigned)arg1 ;
-(void)setHasPageSize:(BOOL)arg1 ;
-(BOOL)hasPageSize;
-(BOOL)hasNextPageToken;
@end

