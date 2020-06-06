/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebItemProviderRegistrar.h>

@class NSString, NSData;

@interface WebItemProviderDataRegistrar : NSObject <WebItemProviderRegistrar> {

	RetainPtr<NSString>* _typeIdentifier;
	RetainPtr<NSData>* _data;

}

@property (nonatomic,readonly) NSString * typeIdentifier; 
@property (nonatomic,readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSItemProviderWriting> representingObjectForClient; 
@property (nonatomic,readonly) NSString * typeIdentifierForClient; 
@property (nonatomic,readonly) NSData * dataForClient; 
-(NSString *)description;
-(NSData *)data;
-(NSString *)typeIdentifier;
-(NSString *)typeIdentifierForClient;
-(NSData *)dataForClient;
-(void)registerItemProvider:(id)arg1 ;
-(id)initWithData:(id)arg1 type:(id)arg2 ;
@end
