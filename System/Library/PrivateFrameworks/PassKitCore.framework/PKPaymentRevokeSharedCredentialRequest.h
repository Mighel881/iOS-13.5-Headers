/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, NSDictionary;

@interface PKPaymentRevokeSharedCredentialRequest : PKPaymentWebServiceRequest {

	NSString* _credentialIdentifier;
	NSDictionary* _revocationAttestation;

}
-(id)initWithCredential:(id)arg1 revocationAttestation:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)requestBody;
@end

