/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSData, NSString;

@interface IDSAuthenticationSigningResult : NSObject {

	NSArray* _authenticationCertificateSignatures;
	NSData* _inputData;
	NSData* _nonce;

}

@property (nonatomic,readonly) NSString * serverVerifiableEncoding; 
@property (nonatomic,readonly) NSArray * authenticationCertificateSignatures;              //@synthesize authenticationCertificateSignatures=_authenticationCertificateSignatures - In the implementation block
@property (nonatomic,readonly) NSData * inputData;                                         //@synthesize inputData=_inputData - In the implementation block
@property (nonatomic,readonly) NSData * nonce;                                             //@synthesize nonce=_nonce - In the implementation block
-(id)description;
-(NSData *)nonce;
-(NSString *)serverVerifiableEncoding;
-(NSArray *)authenticationCertificateSignatures;
-(id)initWithSubscriptionIdentifiers:(id)arg1 authenticationCertificates:(id)arg2 inputData:(id)arg3 nonce:(id)arg4 signature:(id)arg5 ;
-(NSData *)inputData;
@end
