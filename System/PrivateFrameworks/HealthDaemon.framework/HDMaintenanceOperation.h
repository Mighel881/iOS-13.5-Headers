/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface HDMaintenanceOperation : NSOperation {

	double _startedTime;

}
+(id)maintenanceOperationWithName:(id)arg1 asynchronousBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
