/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKContainer, NSString;

@interface MSPCloudKitAccountAccess : NSObject {

	CKContainer* _container;
	CKContainer* _containerWithZoneWidePCS;
	CKContainer* _secureContainer;
	CKContainer* _secureContainerWithZoneWidePCS;
	BOOL _useSecureContainer;
	BOOL _disableDeviceToDeviceEncryption;
	NSString* _accountIdentifier;

}

@property (assign,nonatomic) BOOL useSecureContainer;                           //@synthesize useSecureContainer=_useSecureContainer - In the implementation block
@property (nonatomic,retain) NSString * accountIdentifier;                      //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) BOOL disableDeviceToDeviceEncryption;              //@synthesize disableDeviceToDeviceEncryption=_disableDeviceToDeviceEncryption - In the implementation block
+(long long)defaultEnvironment;
+(id)sharedAccess;
+(BOOL)hasCloudKitEntitlement;
+(void)fetchDeviceToDeviceEncryptionStatus:(/*^block*/id)arg1 ;
+(long long)containerEnvironmentForAccessEnvironment:(long long)arg1 ;
+(BOOL)useLongLivedOperations;
-(id)description;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)initWithEnvironment:(long long)arg1 ;
-(void)setDisableDeviceToDeviceEncryption:(BOOL)arg1 ;
-(id)containerWithZoneWidePCS:(BOOL)arg1 ;
-(void)setUseSecureContainer:(BOOL)arg1 ;
-(BOOL)useSecureContainer;
-(void)fetchAccountIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDeviceToDeviceEncryptionStatus:(/*^block*/id)arg1 ;
-(id)initWithEnvironment:(long long)arg1 createContainers:(BOOL)arg2 ;
-(BOOL)disableDeviceToDeviceEncryption;
-(id)containerForAccount;
-(void)fetchAccountStatus:(/*^block*/id)arg1 ;
@end
