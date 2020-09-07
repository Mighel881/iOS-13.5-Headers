/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
#import <DaemonUtils/DaemonUtils-Structs.h>
@class NSXPCConnection, NSObject, NSData;

@interface Caller : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_xpc_object> _connection2;
	NSObject*<OS_xpc_object> _event;

}

@property (nonatomic,__weak,readonly) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,__weak,readonly) NSObject*<OS_xpc_object> connection2;                            //@synthesize connection2=_connection2 - In the implementation block
@property (nonatomic,__weak,readonly) NSObject*<OS_xpc_object> event;                                  //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) unsigned uid; 
@property (nonatomic,readonly) int asid; 
@property (nonatomic,readonly) SCD_Struct_Ca0 auditToken; 
@property (nonatomic,readonly) NSData * auditTokenData; 
@property (getter=isUsingLegacyConnection,nonatomic,readonly) BOOL usingLegacyConnection; 
+(id)current;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SCD_Struct_Ca0)auditToken;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(unsigned)uid;
-(NSObject*<OS_xpc_object>)event;
-(int)pid;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSData *)auditTokenData;
-(id)initWithConnection:(id)arg1 event:(id)arg2 ;
-(BOOL)isEqualToAuditToken:(SCD_Struct_Ca0)arg1 ;
-(NSObject*<OS_xpc_object>)connection2;
-(BOOL)isEqualToAuditTokenData:(id)arg1 ;
-(int)asid;
-(BOOL)isUsingLegacyConnection;
@end
