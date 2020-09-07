/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SSVSAPSignaturePolicy : NSObject <NSCopying> {

	long long _policyType;
	NSArray* _signatureComponents;

}

@property (nonatomic,readonly) long long policyType;                            //@synthesize policyType=_policyType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * signatureComponents;              //@synthesize signatureComponents=_signatureComponents - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPolicyType:(long long)arg1 ;
-(id)initWithSignedActionsDictionary:(id)arg1 ;
-(id)initWithPolicyType:(long long)arg1 signatureComponents:(id)arg2 ;
-(id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2 ;
-(long long)policyType;
-(id)dataToSignWithURLRequest:(id)arg1 ;
-(id)_dataToSignWithDataSource:(id)arg1 ;
-(id)dataToSignWithRequestProperties:(id)arg1 ;
-(NSArray *)signatureComponents;
@end
