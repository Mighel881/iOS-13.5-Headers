/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFSecurityService <NSObject>
@required
-(oneway void)setKeychainValue:(id)arg1 forKey:(id)arg2 accountIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(oneway void)processData:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3;
-(oneway void)processDataMap:(id)arg1 usingProcedure:(long long)arg2 completion:(/*^block*/id)arg3;

@end
