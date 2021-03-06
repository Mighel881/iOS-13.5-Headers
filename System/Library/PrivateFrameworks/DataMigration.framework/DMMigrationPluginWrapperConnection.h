/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject {

	DMXPCConnection* _connection;

}
+(id)connection;
-(id)init;
-(void)invalidate;
-(void)resume;
-(int)pid;
-(void)handleMessage:(id)arg1 ;
-(void)runPluginAtPath:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

