/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSMutableDictionary, NSObject, NSString, NSArray;

@interface CUBonjourBrowser : NSObject {

	BOOL _activateCalled;
	BOOL _activated;
	BonjourBrowserRef _bonjourBrowser;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSMutableDictionary* _deviceMap;
	LogCategory* _ucat;
	BOOL _browseFlagsChanged;
	unsigned _changeFlags;
	unsigned _controlFlags;
	unsigned long long _browseFlags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _domain;
	NSString* _interfaceName;
	NSString* _label;
	NSString* _serviceType;
	/*^block*/id _deviceFoundHandler;
	/*^block*/id _deviceLostHandler;
	/*^block*/id _deviceChangedHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (assign,nonatomic) unsigned long long browseFlags;                          //@synthesize browseFlags=_browseFlags - In the implementation block
@property (assign,nonatomic) unsigned changeFlags;                                    //@synthesize changeFlags=_changeFlags - In the implementation block
@property (assign,nonatomic) unsigned controlFlags;                                   //@synthesize controlFlags=_controlFlags - In the implementation block
@property (copy,readonly) NSArray * devices; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * domain;                                         //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                                  //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id deviceFoundHandler;                                     //@synthesize deviceFoundHandler=_deviceFoundHandler - In the implementation block
@property (nonatomic,copy) id deviceLostHandler;                                      //@synthesize deviceLostHandler=_deviceLostHandler - In the implementation block
@property (nonatomic,copy) id deviceChangedHandler;                                   //@synthesize deviceChangedHandler=_deviceChangedHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSString *)domain;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_update;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)serviceType;
-(void)update;
-(void)setDomain:(NSString *)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)controlFlags;
-(void)setControlFlags:(unsigned)arg1 ;
-(void)setDeviceFoundHandler:(id)arg1 ;
-(void)setDeviceChangedHandler:(id)arg1 ;
-(void)setDeviceLostHandler:(id)arg1 ;
-(NSArray *)devices;
-(void)_invalidated;
-(void)_interrupted;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)activate;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setChangeFlags:(unsigned)arg1 ;
-(unsigned)changeFlags;
-(id)deviceFoundHandler;
-(id)deviceLostHandler;
-(id)deviceChangedHandler;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)_activateSafeInvokeBlock:(/*^block*/id)arg1 ;
-(void)_updateLocked;
-(void)setBrowseFlags:(unsigned long long)arg1 ;
-(void)_lostAllDevices;
-(int)_bonjourStart;
-(void)_bonjourHandleEventType:(unsigned)arg1 info:(id)arg2 ;
-(void)_bonjourHandleAddOrUpdateDevice:(id)arg1 ;
-(void)_bonjourHandleRemoveDevice:(id)arg1 ;
-(unsigned long long)browseFlags;
@end
