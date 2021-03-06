/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageProtection/MessageProtection-Structs.h>
#import <libobjc.A.dylib/P256PrivateKeyProtocol.h>

@class NSString;

@interface CoreCryptoP256Private : NSObject <P256PrivateKeyProtocol> {

	ccec_full_ctx* _full_key;

}

@property (assign) ccec_full_ctx* full_key;                         //@synthesize full_key=_full_key - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generate;
-(void)dealloc;
-(id)initWithKey:(ccec_full_ctx*)arg1 ;
-(id)publicKey;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(id)keychainData;
-(id)keyAgreement:(id)arg1 error:(id*)arg2 ;
-(ccec_full_ctx*)full_key;
-(void)setFull_key:(ccec_full_ctx*)arg1 ;
@end

