/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoAccountAuthenticationState : PBCodable <NSCopying> {

	NSString* _accountId;
	NSString* _displayName;
	unsigned _standaloneState;
	NSString* _subsectionId;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,readonly) BOOL hasAccountId; 
@property (nonatomic,retain) NSString * accountId;                  //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL hasStandaloneState; 
@property (assign,nonatomic) unsigned standaloneState;              //@synthesize standaloneState=_standaloneState - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasSubsectionId; 
@property (nonatomic,retain) NSString * subsectionId;               //@synthesize subsectionId=_subsectionId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)hasDisplayName;
-(NSString *)accountId;
-(void)setAccountId:(NSString *)arg1 ;
-(BOOL)hasAccountId;
-(unsigned)standaloneState;
-(void)setSubsectionId:(NSString *)arg1 ;
-(void)setStandaloneState:(unsigned)arg1 ;
-(void)setHasStandaloneState:(BOOL)arg1 ;
-(BOOL)hasStandaloneState;
-(BOOL)hasSubsectionId;
-(NSString *)subsectionId;
@end

