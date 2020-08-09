/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSHashTable;

@interface HDDiagnosticManager : NSObject {

	NSHashTable* _objects;
	os_unfair_lock_s _lock;

}
+(id)sharedDiagnosticManager;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)logAllDiagnostics;
-(id)_diagnosticsForKeys:(id)arg1 shouldLog:(BOOL)arg2 ;
-(id)_diagnosticsOverview;
-(id)diagnosticsForKeys:(id)arg1 ;
@end
