/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSLock, NSXPCConnection, NSObject, NSXPCInterface, NSString, NFWeakReference;

@interface NFCSession : NSObject {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSXPCInterface* _remoteObjectInterface;
	NSXPCInterface* _exportedObjectInterface;
	NSString* _machServiceName;
	NFWeakReference* _exportedObject;
	NFWeakReference* _delegate;

}
-(void)dealloc;
-(void)_invalidate;
-(id)_connection;
-(id)_connectionLock;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_setConnection:(id)arg1 ;
-(BOOL)_connectIfNeeded;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 delegate:(id)arg5 ;
-(id)_exportedObjectClassName;
@end

