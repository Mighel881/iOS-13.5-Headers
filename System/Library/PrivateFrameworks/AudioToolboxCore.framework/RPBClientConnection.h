/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPBInspecting;
@class NSXPCConnection;

@interface RPBClientConnection : NSObject {

	NSXPCConnection* _xpconnection;
	id<RPBInspecting> _proxyInterface;

}

@property (retain) NSXPCConnection * xpconnection;                //@synthesize xpconnection=_xpconnection - In the implementation block
@property (retain) id<RPBInspecting> proxyInterface;              //@synthesize proxyInterface=_proxyInterface - In the implementation block
-(id<RPBInspecting>)proxyInterface;
-(void)setProxyInterface:(id<RPBInspecting>)arg1 ;
-(NSXPCConnection *)xpconnection;
-(void)setXpconnection:(NSXPCConnection *)arg1 ;
@end

