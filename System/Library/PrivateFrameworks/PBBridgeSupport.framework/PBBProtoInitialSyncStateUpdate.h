/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoInitialSyncStateUpdate : PBCodable <NSCopying> {

	double _progress;
	unsigned _state;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) BOOL hasProgress; 
@property (assign,nonatomic) double progress;               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned state;                //@synthesize state=_state - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)progress;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(BOOL)hasState;
-(void)setHasState:(BOOL)arg1 ;
-(void)setHasProgress:(BOOL)arg1 ;
-(BOOL)hasProgress;
@end
