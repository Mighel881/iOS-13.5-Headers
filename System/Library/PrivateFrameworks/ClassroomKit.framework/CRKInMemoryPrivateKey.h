/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKPrivateKey.h>

@class CRKIdentityConfiguration, NSString, NSData;

@interface CRKInMemoryPrivateKey : NSObject <CRKPrivateKey> {

	CRKIdentityConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) CRKIdentityConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) SecKeyRef underlyingPrivateKey; 
-(id)init;
-(id)initWithData:(id)arg1 ;
-(NSData *)dataRepresentation;
-(id)initWithConfiguration:(id)arg1 ;
-(CRKIdentityConfiguration *)configuration;
-(SecKeyRef)underlyingPrivateKey;
@end

