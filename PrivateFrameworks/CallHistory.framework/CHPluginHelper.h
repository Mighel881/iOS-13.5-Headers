/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSXPCInterface;

@interface CHPluginHelper : NSObject {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;

}
-(id)init;
-(unsigned long long)unreadCallCount;
-(id)recentCallsWithLimitingTypes:(unsigned)arg1 ;
@end
