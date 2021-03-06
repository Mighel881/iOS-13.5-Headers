/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, PKPeerPaymentDeviceRegistrationData;

@interface PKPeerPaymentServiceRegistrationRequest : PKPeerPaymentWebServiceRequest {

	NSString* _pushToken;
	PKPeerPaymentDeviceRegistrationData* _deviceData;

}

@property (nonatomic,copy) NSString * pushToken;                                            //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) PKPeerPaymentDeviceRegistrationData * deviceData;              //@synthesize deviceData=_deviceData - In the implementation block
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(void)setDeviceData:(PKPeerPaymentDeviceRegistrationData *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
-(PKPeerPaymentDeviceRegistrationData *)deviceData;
@end

