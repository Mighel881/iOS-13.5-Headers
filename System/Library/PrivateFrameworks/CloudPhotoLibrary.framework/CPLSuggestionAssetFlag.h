/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CPLSuggestionAssetFlag : PBCodable <NSCopying> {

	BOOL _isKeyAsset;
	BOOL _isRepresentative;
	SCD_Struct_CP1 _has;

}

@property (assign,nonatomic) BOOL hasIsRepresentative; 
@property (assign,nonatomic) BOOL isRepresentative;                 //@synthesize isRepresentative=_isRepresentative - In the implementation block
@property (assign,nonatomic) BOOL hasIsKeyAsset; 
@property (assign,nonatomic) BOOL isKeyAsset;                       //@synthesize isKeyAsset=_isKeyAsset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsRepresentative:(BOOL)arg1 ;
-(void)setIsKeyAsset:(BOOL)arg1 ;
-(BOOL)isRepresentative;
-(BOOL)isKeyAsset;
-(void)setHasIsRepresentative:(BOOL)arg1 ;
-(BOOL)hasIsRepresentative;
-(void)setHasIsKeyAsset:(BOOL)arg1 ;
-(BOOL)hasIsKeyAsset;
@end

