/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryNetworkProtectionReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _status;
	AWDHomeKitVendorInformation* _vendorDetails;
	BOOL _hadViolationsInLast24h;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorDetails; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorDetails;              //@synthesize vendorDetails=_vendorDetails - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasHadViolationsInLast24h; 
@property (assign,nonatomic) BOOL hadViolationsInLast24h;                              //@synthesize hadViolationsInLast24h=_hadViolationsInLast24h - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setVendorDetails:(AWDHomeKitVendorInformation *)arg1 ;
-(BOOL)hasVendorDetails;
-(void)setHadViolationsInLast24h:(BOOL)arg1 ;
-(void)setHasHadViolationsInLast24h:(BOOL)arg1 ;
-(BOOL)hasHadViolationsInLast24h;
-(AWDHomeKitVendorInformation *)vendorDetails;
-(BOOL)hadViolationsInLast24h;
@end
