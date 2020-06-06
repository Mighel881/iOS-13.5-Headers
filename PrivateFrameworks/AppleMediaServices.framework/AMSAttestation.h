/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AMSAttestation : NSObject
+(id)_certChainStringsWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)attestationWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)_attestationPListWithStyle:(unsigned long long)arg1 primaryAttestation:(id)arg2 extendedAttestation:(id)arg3 error:(id*)arg4 ;
+(BOOL)clearAttestationWithAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)attestationHTTPBodyDataWithStyle:(unsigned long long)arg1 regenerateKeys:(BOOL)arg2 error:(id*)arg3 ;
+(id)ACLVersionForOptions:(id)arg1 ;
+(id)ACLVersionOnDiskForOptions:(id)arg1 ;
+(BOOL)clearAttestationWithOptions:(id)arg1 error:(id*)arg2 ;
@end
