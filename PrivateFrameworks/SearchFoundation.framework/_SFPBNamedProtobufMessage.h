/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBNamedProtobufMessage.h>
@class NSData, NSString;


@protocol _SFPBNamedProtobufMessage <NSObject>
@property (nonatomic,copy) NSData * protobufMessageData; 
@property (nonatomic,copy) NSString * protobufMessageName; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setProtobufMessageData:(id)arg1;
-(void)setProtobufMessageName:(id)arg1;
-(NSData *)protobufMessageData;
-(NSString *)protobufMessageName;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBNamedProtobufMessage : PBCodable <_SFPBNamedProtobufMessage, NSSecureCoding> {

	NSData* _protobufMessageData;
	NSString* _protobufMessageName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * protobufMessageData;                //@synthesize protobufMessageData=_protobufMessageData - In the implementation block
@property (nonatomic,copy) NSString * protobufMessageName;              //@synthesize protobufMessageName=_protobufMessageName - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setProtobufMessageData:(NSData *)arg1 ;
-(void)setProtobufMessageName:(NSString *)arg1 ;
-(NSData *)protobufMessageData;
-(NSString *)protobufMessageName;
@end
