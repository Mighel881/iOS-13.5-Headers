/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBRestorePaidSubscriptionItem : PBCodable <NSCopying> {

	NSString* _restoredPaidSubscriptionChannelId;
	BOOL _isNewsAppPurchase;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasRestoredPaidSubscriptionChannelId; 
@property (nonatomic,retain) NSString * restoredPaidSubscriptionChannelId;              //@synthesize restoredPaidSubscriptionChannelId=_restoredPaidSubscriptionChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasIsNewsAppPurchase; 
@property (assign,nonatomic) BOOL isNewsAppPurchase;                                    //@synthesize isNewsAppPurchase=_isNewsAppPurchase - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isNewsAppPurchase;
-(void)setIsNewsAppPurchase:(BOOL)arg1 ;
-(void)setRestoredPaidSubscriptionChannelId:(NSString *)arg1 ;
-(BOOL)hasRestoredPaidSubscriptionChannelId;
-(void)setHasIsNewsAppPurchase:(BOOL)arg1 ;
-(BOOL)hasIsNewsAppPurchase;
-(NSString *)restoredPaidSubscriptionChannelId;
@end

