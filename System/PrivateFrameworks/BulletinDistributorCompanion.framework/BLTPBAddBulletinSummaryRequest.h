/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBBulletinSummary;

@interface BLTPBAddBulletinSummaryRequest : PBRequest <NSCopying> {

	BLTPBBulletinSummary* _bulletin;

}

@property (nonatomic,readonly) BOOL hasBulletin; 
@property (nonatomic,retain) BLTPBBulletinSummary * bulletin;              //@synthesize bulletin=_bulletin - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBulletin:(BLTPBBulletinSummary *)arg1 ;
-(BLTPBBulletinSummary *)bulletin;
-(BOOL)hasBulletin;
@end

