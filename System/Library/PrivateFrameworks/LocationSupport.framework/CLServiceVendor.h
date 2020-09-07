/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSMutableSet;

@interface CLServiceVendor : NSObject {

	NSMutableDictionary* _catalog;
	NSDictionary* _serviceReplacementMap;
	NSMutableSet* _unavailableServiceNames;
	NSMutableSet* _timeCoercibleSilos;
	int _missBehavior;
	double _currentGlobalLatchedAbsoluteTimestamp;
	NSMutableDictionary* _recordingFromTriggersByTo;
	NSMutableDictionary* _recordingToTriggersByFrom;

}
+(void)initialize;
+(id)sharedInstance;
+(void)rereadConfiguration:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)proxyForService:(id)arg1 ;
-(id)getServiceWithName:(id)arg1 ;
-(void)enableTimeCoercion;
-(BOOL)isTimeCoercionEnabled;
-(void)setServiceReplacementMap:(id)arg1 missBehavior:(int)arg2 ;
-(id)setRecordingTriggerMap:(id)arg1 outputPathBase:(id)arg2 ;
-(void)retireServiceWithName:(id)arg1 ;
-(BOOL)isServiceEnabled:(id)arg1 ;
-(BOOL)isServiceRunning:(id)arg1 ;
-(BOOL)ensureServiceIsRunning:(id)arg1 ;
-(id)proxyForService:(id)arg1 forClient:(id)arg2 ;
-(void)setCurrentGlobalLatchedAbsoluteTimestamp:(double)arg1 ;
@end
