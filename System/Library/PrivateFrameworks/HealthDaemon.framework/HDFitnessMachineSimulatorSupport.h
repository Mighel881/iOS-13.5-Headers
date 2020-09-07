/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSData, NSString;

@interface HDFitnessMachineSimulatorSupport : NSObject {

	unsigned long long _fitnessMachineType;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) unsigned long long fitnessMachineType;              //@synthesize fitnessMachineType=_fitnessMachineType - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSData * btIdentifierData; 
@property (nonatomic,readonly) NSString * btIdentifier; 
-(NSUUID *)uuid;
-(id)initWithFitnessMachineType:(unsigned long long)arg1 ;
-(void)updateAdvertisementDataForSimulation:(id)arg1 ;
-(unsigned long long)fitnessMachineType;
-(NSData *)btIdentifierData;
-(NSString *)btIdentifier;
@end
