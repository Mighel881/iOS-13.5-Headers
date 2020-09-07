/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSMachService.h>

@class NSString;

@interface AMSMultiUserService : NSObject <AMSMachService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
+(id)machServiceName;
+(id)serviceInterface;
+(id)proxyObject;
+(id)proxyObjectAsync;
+(id)sharedConnectionAccessQueue;
+(id)_createXPCConnection;
+(void)setSharedConnection:(id)arg1 ;
+(BOOL)isConnectionEntitled:(id)arg1 ;
@end
