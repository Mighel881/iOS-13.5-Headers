/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPBTransitIncidentEntityFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE68* _nextStopMuids;

}

@property (nonatomic,readonly) unsigned long long nextStopMuidsCount; 
@property (nonatomic,readonly) unsigned long long* nextStopMuids; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)dealloc;
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
-(unsigned long long)nextStopMuidsCount;
-(unsigned long long)nextStopMuidAtIndex:(unsigned long long)arg1 ;
-(void)clearNextStopMuids;
-(void)addNextStopMuid:(unsigned long long)arg1 ;
-(unsigned long long*)nextStopMuids;
-(void)setNextStopMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end
