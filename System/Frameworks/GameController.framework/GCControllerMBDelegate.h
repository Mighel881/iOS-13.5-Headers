/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSTimer;

@interface GCControllerMBDelegate : NSObject {

	BTSessionImplRef _session;
	BTPairingAgentImplRef _pairingAgent;
	BTDiscoveryAgentImplRef _discoveryAgent;
	NSTimer* _timer;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)stopScan;
-(void)startScan;
-(void)fireCompletionHandler;
-(void)scanTimeout:(id)arg1 ;
@end
