/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PKExtensionProvider;

@interface PKExtension : NSObject {

	NSString* _identifier;
	PKExtensionProvider* _provider;

}

@property (assign,nonatomic,__weak) PKExtensionProvider * provider;              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * extensionPointIdentifier; 
-(id)description;
-(long long)type;
-(NSString *)identifier;
-(NSString *)extensionPointIdentifier;
-(void)setProvider:(PKExtensionProvider *)arg1 ;
-(PKExtensionProvider *)provider;
-(id)extension;
-(id)initWithIdentifier:(id)arg1 provider:(id)arg2 ;
-(void)beginRemoteViewControllerExtensionServiceWithInputItems:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

