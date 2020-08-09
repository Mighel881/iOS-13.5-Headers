/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _AWDWiFiUIScanCount : PBCodable <NSCopying> {

	unsigned _max;
	NSString* _section;
	SCD_Struct_AW13 _has;

}

@property (nonatomic,readonly) BOOL hasSection; 
@property (nonatomic,retain) NSString * section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL hasMax; 
@property (assign,nonatomic) unsigned max;                    //@synthesize max=_max - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMax:(unsigned)arg1 ;
-(unsigned)max;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)section;
-(void)setSection:(NSString *)arg1 ;
-(void)setHasMax:(BOOL)arg1 ;
-(BOOL)hasMax;
-(BOOL)hasSection;
@end
