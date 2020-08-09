/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/ENAccountKey.h>

@class IDSMPFullAccountIdentityCluster, IDSMPFullAccountIdentity, IDSMPFullServiceIdentityAdmin, IDSMPFullServiceIdentitySigning, IDSPublicAccountIdentity, NSString;

@interface IDSAccountIdentity : NSObject <ENAccountKey> {

	IDSMPFullAccountIdentityCluster* _identityCluster;

}

@property (nonatomic,readonly) IDSMPFullAccountIdentityCluster * identityCluster;              //@synthesize identityCluster=_identityCluster - In the implementation block
@property (nonatomic,readonly) IDSMPFullAccountIdentity * accountIdentity; 
@property (nonatomic,readonly) IDSMPFullServiceIdentityAdmin * adminIdentity; 
@property (nonatomic,readonly) IDSMPFullServiceIdentitySigning * signingIdentity; 
@property (nonatomic,readonly) IDSPublicAccountIdentity * accountPublicKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IDSMPFullAccountIdentity *)accountIdentity;
-(IDSMPFullServiceIdentityAdmin *)adminIdentity;
-(IDSMPFullServiceIdentitySigning *)signingIdentity;
-(id)initWithFullCluster:(id)arg1 ;
-(IDSMPFullAccountIdentityCluster *)identityCluster;
-(IDSPublicAccountIdentity *)accountPublicKey;
@end
