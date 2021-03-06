/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFUserPromptOperation.h>
#import <libobjc.A.dylib/WFCredentialsProvider.h>

@protocol WFCredentialsProviderContext;
@class NSString;

@interface WFPasswordPromptOperation : WFUserPromptOperation <WFCredentialsProvider> {

	NSString* password;
	SecIdentityRef TLSIdentity;
	NSString* username;
	id<WFCredentialsProviderContext> _credentialsProviderContext;

}

@property (nonatomic,retain) id<WFCredentialsProviderContext> credentialsProviderContext;              //@synthesize credentialsProviderContext=_credentialsProviderContext - In the implementation block
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
@property (nonatomic,readonly) SecIdentityRef TLSIdentity; 
@property (nonatomic,copy,readonly) NSString * username; 
+(id)passwordPromptOperationWithCredentialsContext:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)username;
-(SecIdentityRef)TLSIdentity;
-(void)setCredentialsProviderContext:(id<WFCredentialsProviderContext>)arg1 ;
-(id<WFCredentialsProviderContext>)credentialsProviderContext;
@end

