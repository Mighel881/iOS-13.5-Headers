/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDDatabaseProtocol.h>

@class NSPersistentStoreCoordinator, NSString;

@interface ACDTransientDatabase : NSObject <ACDDatabaseProtocol> {

	NSPersistentStoreCoordinator* _persistentStoreCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)createConnection;
-(id)_addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
@end

