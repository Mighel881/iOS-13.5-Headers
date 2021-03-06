/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DPDaemonProtocol.h>

@class NSXPCConnection;

@interface _DPDaemonConnection : NSObject <_DPDaemonProtocol> {

	NSXPCConnection* _daemonConnection;

}

@property (nonatomic,readonly) NSXPCConnection * daemonConnection;              //@synthesize daemonConnection=_daemonConnection - In the implementation block
+(id)daemonConnection;
+(id)daemonAgentConnection;
-(id)init;
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(NSXPCConnection *)daemonConnection;
-(void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)reportsNotYetSubmittedWithReply:(/*^block*/id)arg1 ;
-(void)retireReports:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end

