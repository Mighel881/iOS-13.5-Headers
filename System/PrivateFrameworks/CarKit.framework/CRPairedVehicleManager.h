/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRCarKitServiceClient;

@interface CRPairedVehicleManager : NSObject {

	CRCarKitServiceClient* _serviceClient;

}

@property (nonatomic,retain) CRCarKitServiceClient * serviceClient;              //@synthesize serviceClient=_serviceClient - In the implementation block
-(id)init;
-(void)setServiceClient:(CRCarKitServiceClient *)arg1 ;
-(CRCarKitServiceClient *)serviceClient;
-(void)fetchAllVehiclesWithCompletion:(/*^block*/id)arg1 ;
-(void)syncFetchAllVehiclesWithCompletion:(/*^block*/id)arg1 ;
-(id)_firstVehicleMatchingTest:(/*^block*/id)arg1 ;
-(void)saveVehicle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeVehicle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPairedVehiclesWithCompletion:(/*^block*/id)arg1 ;
-(id)vehicleForBluetoothAddress:(id)arg1 ;
-(id)vehicleNameForWiFiUUID:(id)arg1 ;
-(id)vehicleForCertificateSerial:(id)arg1 ;
-(id)saveVehicle:(id)arg1 ;
-(BOOL)removeVehicle:(id)arg1 ;
-(id)allVehicles;
-(id)pairedVehicles;
@end
