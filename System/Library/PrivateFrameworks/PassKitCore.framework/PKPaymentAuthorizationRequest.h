/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject {

	NSData* _credential;
	NSData* _nonceData;
	PKPaymentRequest* _paymentRequest;

}

@property (nonatomic,retain) NSData * credential;                              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) NSData * nonceData;                               //@synthesize nonceData=_nonceData - In the implementation block
@property (nonatomic,readonly) PKPaymentRequest * paymentRequest;              //@synthesize paymentRequest=_paymentRequest - In the implementation block
-(NSData *)credential;
-(void)setCredential:(NSData *)arg1 ;
-(id)initWithPaymentRequest:(id)arg1 ;
-(PKPaymentRequest *)paymentRequest;
-(NSData *)nonceData;
-(void)setNonceData:(NSData *)arg1 ;
@end
