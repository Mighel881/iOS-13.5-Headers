/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BCSVisibility : PBCodable <NSCopying> {

	double _ratio;
	NSString* _country;
	NSString* _language;
	SCD_Struct_BC1 _has;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country;               //@synthesize country=_country - In the implementation block
@property (assign,nonatomic) BOOL hasRatio; 
@property (assign,nonatomic) double ratio;                     //@synthesize ratio=_ratio - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)country;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)hasLanguage;
-(void)setCountry:(NSString *)arg1 ;
-(BOOL)hasCountry;
-(double)ratio;
-(void)setRatio:(double)arg1 ;
-(void)setHasRatio:(BOOL)arg1 ;
-(BOOL)hasRatio;
@end
