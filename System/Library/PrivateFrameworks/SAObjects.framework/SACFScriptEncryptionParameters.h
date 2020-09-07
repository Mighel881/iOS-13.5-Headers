/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>

@class NSData, NSString;

@interface SACFScriptEncryptionParameters : SABaseAceObject

@property (nonatomic,copy) NSData * encryptionKey; 
@property (nonatomic,copy) NSData * hmac; 
@property (nonatomic,copy) NSData * hmacKey; 
@property (nonatomic,copy) NSData * initializationVector; 
@property (nonatomic,copy) NSString * type; 
+(id)scriptEncryptionParameters;
+(id)scriptEncryptionParametersWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSData *)hmacKey;
-(id)encodedClassName;
-(NSData *)encryptionKey;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(NSData *)hmac;
-(void)setHmac:(NSData *)arg1 ;
-(void)setHmacKey:(NSData *)arg1 ;
-(NSData *)initializationVector;
-(void)setInitializationVector:(NSData *)arg1 ;
@end
