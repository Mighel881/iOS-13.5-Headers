/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDXPCListenerDelegate <NSObject>
@optional
-(void)connectionConfiguredForListener:(id)arg1 client:(id)arg2 exportedObject:(id)arg3;

@required
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3;

@end
