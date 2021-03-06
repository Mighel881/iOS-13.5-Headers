/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2CertificatePayload : NEIKEv2Payload {

	unsigned long long _encoding;
	NSData* _certificateData;

}

@property (assign) unsigned long long encoding;              //@synthesize encoding=_encoding - In the implementation block
@property (retain) NSData * certificateData;                 //@synthesize certificateData=_certificateData - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)encoding;
-(NSData *)certificateData;
-(void)setEncoding:(unsigned long long)arg1 ;
-(void)setCertificateData:(NSData *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

