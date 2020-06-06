/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface INExplicitAppTrustCache : NSObject {

	BOOL _loadedManagedBundleIdentifiers;
	BOOL _loadedTrustedCodeSigningIdentities;
	BOOL _enterpriseAppTrustAllowedLoaded;
	BOOL _enterpriseAppTrustAllowed;
	NSArray* _managedBundleIdentifiers;
	NSArray* _trustedCodeSigningIdentities;
	NSSet* _signingIdentitiesRequiringExplicitTrust;

}

@property (assign,nonatomic) BOOL enterpriseAppTrustAllowed;                               //@synthesize enterpriseAppTrustAllowed=_enterpriseAppTrustAllowed - In the implementation block
@property (nonatomic,retain) NSArray * managedBundleIdentifiers;                           //@synthesize managedBundleIdentifiers=_managedBundleIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * trustedCodeSigningIdentities;                       //@synthesize trustedCodeSigningIdentities=_trustedCodeSigningIdentities - In the implementation block
@property (nonatomic,retain) NSSet * signingIdentitiesRequiringExplicitTrust;              //@synthesize signingIdentitiesRequiringExplicitTrust=_signingIdentitiesRequiringExplicitTrust - In the implementation block
-(NSArray *)trustedCodeSigningIdentities;
-(void)setTrustedCodeSigningIdentities:(NSArray *)arg1 ;
-(BOOL)enterpriseAppTrustAllowed;
-(NSArray *)managedBundleIdentifiers;
-(NSSet *)signingIdentitiesRequiringExplicitTrust;
-(void)setEnterpriseAppTrustAllowed:(BOOL)arg1 ;
-(void)setManagedBundleIdentifiers:(NSArray *)arg1 ;
-(void)setSigningIdentitiesRequiringExplicitTrust:(NSSet *)arg1 ;
@end
